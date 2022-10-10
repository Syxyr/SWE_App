#pragma once
#include "Window.h"
#include <wx/vector.h>

class Window;

enum OPS {
	ADD,
	SUB,
	TIMES,
	DIVIDE
};


wxString num1 = "";
int first = 0;
wxString num2 = "";
int second = 0;
int result = 0;
wxString resString = "";

bool operation = false;

OPS OpId = ADD;

wxVector<double> EqNums = wxVector<double>::wxVector(2);

/*
void AssignNum(wxVector<double>& dubs, wxTextCtrl* box, int TextNDX);


void AssignNum(wxVector<double>& dubs, wxTextCtrl* box, int TextNDX) {
	double* toSave = new double();
	wxString dblString = "";
	wxString val = box->GetValue();
	wxString::iterator iter = val.begin();
	while (iter != val.end())
	{
		if (*iter == '\0') { ++iter; }
		dblString.Append(*iter);
		++iter;
	}
	dblString.ToDouble(toSave);
	dubs.push_back(*toSave);
}
*/

