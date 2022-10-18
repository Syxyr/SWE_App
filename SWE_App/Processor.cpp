#include "Processor.h"

Processor* Processor::processor_ = nullptr;

int CompareOP(wxString a, wxString b)
{
	int opA;
	int opB;
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
bool SetQueueToRPN(wxString val)
{
	bool complete = true;
	wxStack<wxString> opStack;
	wxVector<wxString> output;

	for (size_t i = 0; i < val.length(); i++)
	{
		wxString id = val[i];
		
		if (isOp(id))
		{
			wxString op1 = id;

			if (!opStack.empty())
			{
				wxString op2 = opStack.top();

				while (isOp(op1) && CompareOP(op1, op2) <= 0)
				{
					opStack.pop();
					output.push_back(op2);

					if (!opStack.empty())
					{
						op2 = opStack.top();
					}
					else
						break;
				}
			}
			opStack.push(op1);
		}

		else if (id == "(")
		{
			opStack.push(id);
		}
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
			if (topOp != "(")
			{
				return false;
			}
		}
		else if (id == " ") continue;

		else
		{
			wxString temp = "";
			while (!isOp(id))
			{
				temp.Append(id);
			}
			output.push_back(temp);
		}
		Processor::GetInstance()->ClearQueue();
		for (wxVector<wxString>::iterator i = output.begin(); i != output.end(); i++)
		{
			Processor::GetInstance()->GetQueue().Append(*i);
			return complete;
		}
	}
}
float ComputeAdd(std::string a, std::string b)
{

}
float ComputeSubtract(std::string a, std::string b)
{

}
float ComputeMultiply(std::string a, std::string b)
{

}
float ComputeDivide(std::string a, std::string b)
{

}
float ComputeSin(std::string x)
{

}
float ComputeTan(std::string x)
{

}
float ComputeCos(std::string x)
{

}
float ComputeMod(std::string x)
{

}
float ComputeEqual(wxString x)
{

}
Processor* Processor::GetInstance()
{
	if (processor_ == nullptr)
	{
		processor_ = new Processor();
	}
	return processor_;
}