#include "Processor.h"

Processor* Processor::processor_ = nullptr;

int CompareOP(wxString a, wxString b)
{
	int opA = 0;
	int opB = 0;
	//determine first operator
	if (a == "+" || a == "-")
	{
		opA = 0;
	}
	else if (a == "*" || a == "/")
	{
		opA = 1;
	}
	else if (a == "s" || a == "c" || a == "t" || a == "m")
	{
		opA = 2;
	}
	//determine second operator
	if (b == "+" || b == "-")
	{
		opB = 0;
	}
	else if (b == "*" || b == "/")
	{
		opB = 1;
	}
	else if (b == "s" || b == "c" || b == "t" || b == "m")
	{
		opB = 2;
	}
	return opA - opB;
}

bool isParen(const wxString _id)
{
	return _id == "(" || _id == ")";
}

bool isOp(const wxString& _id)
{
	return _id == "+" || _id == "-" || _id == "/" || _id == "*" 
		|| _id == "s" || _id == "c" || _id == "t" || _id == "m";
}
wxString Processor::SetQueueToRPN()
{
	wxStack<wxString> opStack;
	wxVector<wxString> output;

	//checking each char in queue
	for (size_t i = 0; i < GetQueue().length(); i++)
	{
		//assign each char to string
		wxString id = GetQueue()[i];
		
		//check for operator
		if (isOp(id))
		{
			wxString op1 = id;

			//check for presence of other operators
			if (!opStack.empty())
			{
				//assign last operator on stack to compare precedence
				wxString op2 = opStack.top();

				//if operator has higher precedence in stack, result will be less than 0
				//Otherwise stack has higher precedence
				while (CompareOP(op1, op2) <= 0)
				{
					//pop off stack, into output
					opStack.pop();
					output.push_back(op2);

					//if not empty, reassign and compare again
					if (!opStack.empty())
					{
						op2 = opStack.top();
					}
					else
						break;
				}
			}//if stack empty, push first op into stack
			opStack.push(op1);
		}
		//push left parenthesis to stack
		else if (id == "(")
		{
			opStack.push(id);
		}
		//search stack for left parenthesis and push operators to output
		else if (id == ")")
		{
			wxString topOp = opStack.top();

			while (topOp != "(")
			{
				output.push_back(topOp);
				opStack.pop();

				if (opStack.empty())
					break;
				topOp = opStack.top();
			}
			if (!opStack.empty())
			{
				opStack.pop();
			}
			//mismatched parenthesis
			if (topOp != "(")
			{
				return "Error - Mis-matched parenthesis";
			}
		}
		//otherwise it's a number
		else
		{
			output.push_back(id);
		}
		//clear the queue
		Processor::GetInstance()->ClearQueue();
		//reset queue to RPN
		for (wxVector<wxString>::iterator i = output.begin(); i != output.end(); )
		{
			queue.Append(*i);
			++i;
		}
	}
			
}
//float ComputeAdd(std::string a, std::string b)
//{
//
//}
//float ComputeSubtract(std::string a, std::string b)
//{
//
//}
//float ComputeMultiply(std::string a, std::string b)
//{
//
//}
//float ComputeDivide(std::string a, std::string b)
//{
//
//}
//float ComputeSin(std::string x)
//{
//
//}
//float ComputeTan(std::string x)
//{
//
//}
//float ComputeCos(std::string x)
//{
//
//}
//float ComputeMod(std::string x)
//{
//
//}
//float ComputeEqual(wxString x)
//{
//
//}
Processor* Processor::GetInstance()
{
	if (processor_ == nullptr)
	{
		processor_ = new Processor();
	}
	return processor_;
}