#pragma once
#include "Window.h"
#include <wx/vector.h>

class Window;

enum OPS {
	TIMES = '*',
	ADD = '+',
	SUB = '-',
	DIVIDE = '/',
	SIN = 's',
	COS = 'c',
	TAN = 't',
	MOD = 'm'
};

class Processor
{
protected:
	Processor() {}
	static Processor* processor_;

private:
	wxString queue = "";
	wxVector<wxString> opStack;
	wxVector<wxString> output;
	wxVector<wxString> infix;

public:
	//disable copy & assignment 
	Processor(Processor& other) = delete;
	void operator=(Processor& other) = delete;

	//tag strings for quick id
	wxString TagString(wxString input);

	//tag queue, and add tagged operation

	//build RPN
	wxVector<std::string> AddNumToOutput(const std::string taggedStr);
	void BuildInfix(wxVector<wxString> vecToAddTo, const wxString taggedOp);

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

	//singleton
	static Processor* GetInstance();

	//getters
	wxString GetQueue() { return queue; }
	wxVector<wxString> GetOpStack() { return opStack; }
	wxVector<wxString> GetOutput() { return output; }
	wxVector<wxString> GetInfix() { return infix; }

	//setters
	void SetQueue(wxString val) { queue = val; }
	wxString AddToQueue(wxString val) { return queue.Append(val); }

	//clear data
	void ResetProcessor()
	{
		queue = "";
		opStack.clear();
		output.clear();
		infix.clear();
	}
	void ClearQueue()
	{
		queue.clear();
	}
};




