#pragma once
#include "Window.h"
#include <wx/vector.h>

class Window;

enum OPS {
	ADD = '+',
	SUB = '-',
	TIMES = '*',
	DIVIDE = '/',
	SIN = 's',
	COS = 'c',
	TAN = 't',
	MOD = 'm'
};

class Processor
{
private:
	wxString queue = "";
	wxVector<std::string> opStack;
	wxVector<std::string> output;
	float operand = NULL;
	float result = NULL;
	wxVector<std::string>::iterator iter = opStack.begin();
	const float PI = 3.141592654f;
protected:
	Processor() {}
	static Processor* processor_;


public:
	//disable copy & assignment 
	Processor(Processor& other) = delete;
	void operator=(const Processor&) = delete;

	//tag strings for quick id
	const std::string TagString(wxString input);

	//build RPN
	wxVector<std::string> AddNumToOutput(const std::string taggedStr);
	wxVector<std::string> AddOp(wxVector<std::string> vecToAddTo, const std::string taggedOp);

	//computations
	float ComputeAdd(std::string a, std::string b);
	float ComputeSubtract(std::string a, std::string b);
	float ComputeMultiply(std::string a, std::string b);
	float ComputeDivide(std::string a, std::string b);
	float ComputeSin(std::string x);
	float ComputeTan(std::string x);
	float ComputeCos(std::string x);
	float ComputeMod(std::string x);

	//solve RPN
	float ComputeEqual(wxVector<std::string> x);
	static Processor* GetInstance();
	wxString GetQueue() { return queue; }
	wxString AddToQueue(wxString val) { return queue.Append(val); }
	void ResetProcessor()
	{
		queue = "";
		opStack.clear();
		output.clear();
		operand = NULL;
		result = NULL;
		iter = opStack.begin();
	}
};




