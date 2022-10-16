#include "WidgetApp.h"
#include "Window.h"
#include "Processor.h"

wxIMPLEMENT_APP(WidgetApp);

bool WidgetApp::OnInit() {
	window = new Window();
	Processor::GetInstance();
	window->Show();
	return true;
}

void Window::OnButtonClick(wxCommandEvent& evt) {

	BUTTONS id = (BUTTONS)evt.GetId();
	switch (id)
	{
	case Window::ZERO:
		Processor::GetInstance()->Processor::AddToQueue("0");
		textBox->AppendText("0");
		break;
	case Window::ONE:
		Processor::GetInstance()->Processor::AddToQueue("1");
		textBox->AppendText("1");
		break;
	case Window::TWO:
		Processor::GetInstance()->Processor::AddToQueue("2");
		textBox->AppendText("2");
		break;
	case Window::THREE:
		Processor::GetInstance()->Processor::AddToQueue("3");
		textBox->AppendText("3");
		break;
	case Window::FOUR:
		Processor::GetInstance()->Processor::AddToQueue("4");
		textBox->AppendText("4");
		break;
	case Window::FIVE:
		Processor::GetInstance()->Processor::AddToQueue("5");
		textBox->AppendText("5");
		break;
	case Window::SIX:
		Processor::GetInstance()->Processor::AddToQueue("6");
		textBox->AppendText("6");
		break;
	case Window::SEVEN:
		Processor::GetInstance()->Processor::AddToQueue("7");
		textBox->AppendText("7");
		break;
	case Window::EIGHT:
		Processor::GetInstance()->Processor::AddToQueue("8");
		textBox->AppendText("8");
		break;
	case Window::NINE:
		Processor::GetInstance()->Processor::AddToQueue("9");
		textBox->AppendText("9");
		break;
	case Window::PLUS:
		Processor::GetInstance()->
			Processor::SetQueue(Processor::GetInstance()->
				TagString(Processor::GetInstance()->
					Processor::GetQueue()));
		Processor::GetInstance()->Processor::ClearQueue();
		textBox->AppendText("+");
		break;
	case Window::MINUS:
		textBox->AppendText("-");
		break;
	case Window::MULT:
		textBox->AppendText("*");
		break;
	case Window::DIV:
		textBox->AppendText("/");
		break;
	case Window::EQUAL:
		textBox->AppendText("=");
		break;
	case Window::CLEAR:
		textBox->Clear();
		break;
	case Window::LPAREN:
		textBox->AppendText("(");
		break;
	case Window::RPAREN:
		textBox->AppendText(")");
		break;
	case Window::MOD:
		break;
	case Window::SIN:
		textBox->AppendText("sin(");
		break;
	case Window::COS:
		textBox->AppendText("cos(");
		break;
	case Window::TAN:
		textBox->AppendText("tan(");
		break;
	case Window::NEG:		
		break;
	case Window::DEC:
		textBox->AppendText(".");
		break;
	default:
		break;
	}
}