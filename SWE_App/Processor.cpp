#include "Processor.h"

Processor* Processor::processor_ = nullptr;

wxString Processor::TagString(wxString input)
{
	std::string str = input.wxString::ToStdString();

	float isNumber = std::stof(str);

	if (isNumber)
	{
		return *input.insert(input.begin(), '#');
	}
	else
	{
		return *input.insert(input.begin(), '#');
	}
}


//wxVector<std::string> AddNumToOutput(const std::string taggedStr)
//{
//
//}
//wxVector<std::string> AddOpToStack(const std::string taggedOp)
//{
//
//}
void Processor::BuildInfix(wxVector<wxString> vecToAddTo, const wxString taggedOp)
{
	vecToAddTo.push_back(taggedOp);
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
//float ComputeEqual(wxVector<std::string> x)
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