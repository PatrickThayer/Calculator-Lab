#include "MainWindow.h"

wxBEGIN_EVENT_TABLE(MainWindow, wxFrame)


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

	textBox = bf.GetTextBox(this);

	buttonBin = bf.GetButtonBin(this);
	buttonHex = bf.GetButtonHex(this);
	buttonDec = bf.GetButtonDec(this);

	button0 = bf.GetButton0(this);
	button1 = bf.GetButton1(this);
	button2 = bf.GetButton2(this);
	button3 = bf.GetButton3(this);
	button4 = bf.GetButton4(this);
	button5 = bf.GetButton5(this);
	button6 = bf.GetButton6(this);
	button7 = bf.GetButton7(this);
	button8 = bf.GetButton8(this);
	button9 = bf.GetButton9(this);
	buttonClear = bf.GetButtonClear(this);
	buttonEquals = bf.GetButtonEquals(this);
	buttonPlus = bf.GetButtonPlus(this);
	buttonMinus = bf.GetButtonMinus(this);
	buttonTimes = bf.GetButtonTimes(this);
	buttonDivide = bf.GetButtonDivide(this);
	buttonModulo = bf.GetButtonModulo(this);
	buttonPlusOrMinus = bf.GetButtonPlusOrMinus(this);

}

void MainWindow::OnButtonClick(wxCommandEvent& evt)
{
	wxObject* e = evt.GetEventObject();
	wxButton* b = (dynamic_cast <wxButton*>(e));
	wxString c = b->GetLabel();

	if (evt.GetId() != 1017 && evt.GetId() != 997 && evt.GetId() != 998 && evt.GetId() != 999)
		textBox->AppendText(c);

	//Logic for toggling negative or positive
	if (c == "+/-" && textBox->GetRange(0, 1) != "")
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

	if (evt.GetId() == 1010)
		textBox->Clear();

}
