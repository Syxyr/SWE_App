#pragma once
#include "wx/wx.h"

class Window : public wxFrame
{
private:
	//need buttons for 0-9, +, -, *, /, =, (clear), 
	//left & right paren, mod, sin, cos, tan
	wxButton* button0 = nullptr;
	wxButton* button1 = nullptr;
	wxButton* button2 = nullptr;
	wxButton* button3 = nullptr;
	wxButton* button4 = nullptr;
	wxButton* button5 = nullptr;
	wxButton* button6 = nullptr;
	wxButton* button7 = nullptr; 
	wxButton* button8 = nullptr;
	wxButton* button9 = nullptr;
	wxButton* buttonPlus = nullptr;
	wxButton* buttonMinus = nullptr;
	wxButton* buttonMult = nullptr;
	wxButton* buttonDiv = nullptr; 
	wxButton* buttonEqual = nullptr;
	wxButton* buttonClear = nullptr;
	wxButton* buttonLeftParen = nullptr;
	wxButton* buttonRightParen = nullptr;
	wxButton* buttonMOD = nullptr;
	wxButton* buttonSIN = nullptr;
	wxButton* buttonCOS = nullptr;
	wxButton* buttonTAN = nullptr;
	wxButton* buttonNEG = nullptr;
	wxButton* buttonDEC = nullptr;

	//textBox for display
	wxTextCtrl* textBox = nullptr;

public:
	Window();

	enum BUTTONS {
		ZERO,
		ONE,
		TWO,
		THREE,
		FOUR,
		FIVE,
		SIX,
		SEVEN,
		EIGHT,
		NINE,
		PLUS,
		MINUS,
		MULT,
		DIV,
		EQUAL,
		CLEAR,
		LPAREN,
		RPAREN,
		MOD,
		SIN,
		COS,
		TAN,
		NEG,
		DEC
	};
};

