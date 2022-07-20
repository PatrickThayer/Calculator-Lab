#include "MainWindow.h"
#include "ButtonFactory.h"
#include "CalculatorProcessor.h"

wxBEGIN_EVENT_TABLE(MainWindow, wxFrame)


EVT_BUTTON(995, MainWindow::OnButtonClick)
EVT_BUTTON(996, MainWindow::OnButtonClick)
EVT_BUTTON(997, MainWindow::OnButtonClick)
EVT_BUTTON(998, MainWindow::OnButtonClick)
EVT_BUTTON(999, MainWindow::OnButtonClick)
EVT_BUTTON(1000, MainWindow::OnButtonClick)
EVT_BUTTON(1001, MainWindow::OnButtonClick)
EVT_BUTTON(1002, MainWindow::OnButtonClick)
EVT_BUTTON(1003, MainWindow::OnButtonClick)
EVT_BUTTON(1004, MainWindow::OnButtonClick)
EVT_BUTTON(1005, MainWindow::OnButtonClick)
EVT_BUTTON(1006, MainWindow::OnButtonClick)
EVT_BUTTON(1007, MainWindow::OnButtonClick)
EVT_BUTTON(1008, MainWindow::OnButtonClick)
EVT_BUTTON(1009, MainWindow::OnButtonClick)
EVT_BUTTON(1010, MainWindow::OnButtonClick)
EVT_BUTTON(1011, MainWindow::OnButtonClick)
EVT_BUTTON(1012, MainWindow::OnButtonClick)
EVT_BUTTON(1013, MainWindow::OnButtonClick)
EVT_BUTTON(1014, MainWindow::OnButtonClick)
EVT_BUTTON(1015, MainWindow::OnButtonClick)
EVT_BUTTON(1016, MainWindow::OnButtonClick)
EVT_BUTTON(1017, MainWindow::OnButtonClick)

wxEND_EVENT_TABLE()

MainWindow::MainWindow() : wxFrame(nullptr, wxID_ANY, "Buttons", wxPoint(200, 50), wxSize(417, 540))
{
	ButtonFactory bf;

	bf._parent = this;

	textBox = bf.GetTextBox();
	numberConverter = bf.GetNumberConverter();

	buttonBin = bf.GetButtonBin();
	buttonHex = bf.GetButtonHex();
	buttonDec = bf.GetButtonDec();

	button0 = bf.GetButton0();
	button1 = bf.GetButton1();
	button2 = bf.GetButton2();
	button3 = bf.GetButton3();
	button4 = bf.GetButton4();
	button5 = bf.GetButton5();
	button6 = bf.GetButton6();
	button7 = bf.GetButton7();
	button8 = bf.GetButton8();
	button9 = bf.GetButton9();
	buttonClear = bf.GetButtonClear();
	buttonEquals = bf.GetButtonEquals();
	buttonPlus = bf.GetButtonPlus();
	buttonMinus = bf.GetButtonMinus();
	buttonTimes = bf.GetButtonTimes();
	buttonDivide = bf.GetButtonDivide();
	buttonModulo = bf.GetButtonModulo();
	buttonPlusOrMinus = bf.GetButtonPlusOrMinus();

}

void MainWindow::OnButtonClick(wxCommandEvent& evt)
{
	wxObject* e = evt.GetEventObject();
	wxButton* button = (dynamic_cast <wxButton*>(e));
	wxString label = button->GetLabel();

	CalculatorProcessor* processor = CalculatorProcessor::GetInstance();

	if (evt.GetId() > 999 && evt.GetId() < 1010)
		textBox->AppendText(label);

	//Logic for toggling negative or positive
	if (label == "+/-" && textBox->GetRange(0, 1) != "")
		if (textBox->GetRange(0, 1) == "-")
		{
			textBox->Remove(0, 1);
		}
		else
		{
			wxTextCtrl* temp = new wxTextCtrl(this, 996, "", wxPoint(25, 15), wxSize(350, 25));
			temp->AppendText("-");
			temp->AppendText(textBox->GetRange(0, textBox->GetLastPosition()));
			textBox->Clear();
			textBox->AppendText(temp->GetRange(0, temp->GetLastPosition()));
		}

	if (evt.GetId() == 997) {
		numberConverter->Clear();
		wxString input = textBox->GetValue();
		processor->SetBaseNumber(wxAtoi(input));
		wxString binary(processor->GetBinary());
		numberConverter->AppendText(binary);
	}
	if (evt.GetId() == 998) {
		numberConverter->Clear();
		wxString input = textBox->GetValue();
		processor->SetBaseNumber(wxAtoi(input));
		wxString binary(processor->GetHexadecimal());
		numberConverter->AppendText(binary);
	}
	if (evt.GetId() == 999) {
		numberConverter->Clear();
		wxString input = textBox->GetValue();
		processor->SetBaseNumber(wxAtoi(input));
		wxString binary(processor->GetDecimal());
		numberConverter->AppendText(binary);
	}

	if (evt.GetId() == 1010) {

		numberConverter->Clear();
		textBox->Clear();
	}
}

