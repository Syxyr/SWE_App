#include "WidgetApp.h"
#include "Window.h"
#include "Processor.h"


wxIMPLEMENT_APP(WidgetApp);

bool WidgetApp::OnInit() {
	window = new Window();
	window->Show();
	return true;
}
int WidgetApp::OnExit()
{
	delete window;
	return 0;
}

void Window::OnButtonClick(wxCommandEvent& evt) 
{

	BUTTONS id = (BUTTONS)evt.GetId();

	switch (id)
	{
	case Window::ZERO:
		Processor::GetInstance()->AddToQueue("0");
		textBox->AppendText("0");
		break;
	case Window::ONE:
		Processor::GetInstance()->AddToQueue("1");
		textBox->AppendText("1");
		break;
	case Window::TWO:
		Processor::GetInstance()->AddToQueue("2");
		textBox->AppendText("2");
		break;
	case Window::THREE:
		Processor::GetInstance()->AddToQueue("3");
		textBox->AppendText("3");
		break;
	case Window::FOUR:
		Processor::GetInstance()->AddToQueue("4");
		textBox->AppendText("4");
		break;
	case Window::FIVE:
		Processor::GetInstance()->AddToQueue("5");
		textBox->AppendText("5");
		break;
	case Window::SIX:
		Processor::GetInstance()->AddToQueue("6");
		textBox->AppendText("6");
		break;
	case Window::SEVEN:
		Processor::GetInstance()->AddToQueue("7");
		textBox->AppendText("7");
		break;
	case Window::EIGHT:
		Processor::GetInstance()->AddToQueue("8");
		textBox->AppendText("8");
		break;
	case Window::NINE:
		Processor::GetInstance()->AddToQueue("9");
		textBox->AppendText("9");
		break;
	case Window::PLUS:
		Processor::GetInstance()->AddToQueue(" + ");
		textBox->AppendText(" + ");
		break;
	case Window::MINUS:
		Processor::GetInstance()->AddToQueue(" - ");
		textBox->AppendText(" - ");
		break;
	case Window::MULT:
		Processor::GetInstance()->AddToQueue(" * ");
		textBox->AppendText(" * ");
		break;
	case Window::DIV:
		Processor::GetInstance()->AddToQueue("/");
		textBox->AppendText(" / ");
		break;
	case Window::EQUAL:
		Processor::GetInstance()->SetQueueToRPN(Processor::GetInstance()->GetQueue());
		textBox->AppendText(" = ");
		break;
	case Window::CLEAR:
		Processor::GetInstance()->ResetProcessor();
		textBox->Clear();
		break;
	case Window::LPAREN:
		textBox->AppendText(" (");
		break;
	case Window::RPAREN:
		textBox->AppendText(") ");
		break;
	case Window::MOD:
		break;
	case Window::SIN:
		textBox->AppendText(" sin(");
		break;
	case Window::COS:
		textBox->AppendText(" cos(");
		break;
	case Window::TAN:
		textBox->AppendText(" tan(");
		break;
	case Window::NEG:

		break;
	case Window::DEC:
		Processor::GetInstance()->AddToQueue(" . ");
		textBox->AppendText(" . ");
		break;
	default:
		break;
	}
}