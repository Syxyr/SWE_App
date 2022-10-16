#include "Processor.h"



const std::string TagString(wxString input)
{
	std::string str = input.wxString::ToStdString();

	bool isNumber = std::stof(str);

	if (isNumber)
	{
		return "#" + str;
	}
	else
	{
		return "$" + str;
	}
}
wxVector<std::string> AddNumToOutput(const std::string taggedStr)
{

}
wxVector<std::string> AddOpToStack(const std::string taggedOp)
{

}
wxVector<std::string> AddOp(wxVector<std::string> vecToAddTo, const std::string taggedOp)
{

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
float ComputeEqual(wxVector<std::string> x)
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