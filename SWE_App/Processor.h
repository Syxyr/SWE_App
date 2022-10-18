#pragma once
#include "Window.h"
#include <wx/vector.h>
#include <wx/stack.h>

class Window;


enum OP {
	TIMES = 1,
	ADD = 0,
	SUB = 0,
	DIVIDE = 1,
	SIN = 2,
	COS = 2,
	TAN = 2,
	MOD = 2
};



class Processor
{
protected:
	Processor() {}
	static Processor* processor_;

private:
	// queue to hold infix notation
	wxString queue = "";
	wxString::iterator q_iter = queue.begin();

public:
	//disable copy & assignment 
	Processor(Processor& other) = delete;
	void operator=(Processor& other) = delete;

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
	float ComputeEqual(wxString x);

	//singleton
	static Processor* GetInstance();

	//getters
	wxString GetQueue() { return queue; }
	wxString::iterator GetQIter() { return q_iter; }

	//setters
	bool SetQueueToRPN(wxString val);
	wxString AddToQueue(wxString val) { return queue.Append(val); }

	//clear data
	void ResetProcessor()
	{
		queue = "";
	}
	void ClearQueue()
	{
		queue.clear();
	}
};




