#include "Window.h"

wxBEGIN_EVENT_TABLE(Window, wxFrame)

EVT_BUTTON(wxID_ANY, Window::OnButtonClick)

wxEND_EVENT_TABLE()

Window::Window() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(200, 200), wxSize(400, 410)) {

	//FIRST ROW
	buttonSIN = new wxButton(this, SIN, "SIN", wxPoint(10, 45), wxSize(60, 60));
	buttonCOS = new wxButton(this, COS, "COS", wxPoint(75, 45), wxSize(60, 60));
	buttonTAN = new wxButton(this, TAN, "TAN", wxPoint(140, 45), wxSize(60, 60));
	buttonClear = new wxButton(this, CLEAR, "C", wxPoint(205, 45), wxSize(105, 60));
	buttonNEG = new wxButton(this, NEG, "+/-", wxPoint(315, 45), wxSize(60, 60));

	//SECOND ROW
	button7 = new wxButton(this, SEVEN, "7", wxPoint(10, 110), wxSize(60, 60));
	button8 = new wxButton(this, EIGHT, "8", wxPoint(75, 110), wxSize(60, 60));
	button9 = new wxButton(this, NINE, "9", wxPoint(140, 110), wxSize(60, 60));
	buttonDiv = new wxButton(this, DIV, "/", wxPoint(205, 110), wxSize(105, 60));
	buttonLeftParen = new wxButton(this, LPAREN, "(", wxPoint(315, 110), wxSize(60, 60));
	
	//THIRD ROW
	button4 = new wxButton(this, FOUR, "4", wxPoint(10, 175), wxSize(60, 60));
	button5 = new wxButton(this, FIVE, "5", wxPoint(75, 175), wxSize(60, 60));
	button6 = new wxButton(this, SIX, "6", wxPoint(140, 175), wxSize(60, 60));
	buttonMult = new wxButton(this, MULT, "*", wxPoint(205, 175), wxSize(105, 60));
	buttonRightParen = new wxButton(this, RPAREN, ")", wxPoint(315, 175), wxSize(60, 60));

	//FOURTH ROW
	button1 = new wxButton(this, ONE, "1", wxPoint(10, 240), wxSize(60, 60));
	button2 = new wxButton(this, TWO, "2", wxPoint(75, 240), wxSize(60, 60));
	button3 = new wxButton(this, THREE, "3", wxPoint(140, 240), wxSize(60, 60));
	buttonMinus = new wxButton(this, MINUS, "-", wxPoint(205, 240), wxSize(105, 60));
	buttonEqual = new wxButton(this, EQUAL, "=", wxPoint(315, 240), wxSize(60, 125));
	
	//FIFTH ROW
	buttonMOD = new wxButton(this, MOD, "MOD", wxPoint(10, 305), wxSize(60, 60));
	button0 = new wxButton(this, ZERO, "0", wxPoint(75, 305), wxSize(60, 60));
	buttonPlus = new wxButton(this, PLUS, "+", wxPoint(205, 305), wxSize(105, 60));
	buttonDEC = new wxButton(this, DEC, ".", wxPoint(140, 305), wxSize(60, 60));


	textBox = new wxTextCtrl(this, wxID_ANY, "", wxPoint(10, 10), wxSize(365, 30));
}