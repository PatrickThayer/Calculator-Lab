#include "ButtonFactory.h"


wxButton* ButtonFactory::GetButtonBin(wxWindow* parent)
{
	wxButton* newButton = new wxButton(parent, 997, "Bin", wxPoint(50, 60), wxSize(50, 20));
	return newButton;
}

wxButton* ButtonFactory::GetButtonHex(wxWindow* parent)
{
	wxButton* newButton = new wxButton(parent, 998, "Hex", wxPoint(175, 60), wxSize(50, 20));;
	return newButton;
}

wxButton* ButtonFactory::GetButtonDec(wxWindow* parent)
{
	wxButton* newButton = new wxButton(parent, 999, "Dec", wxPoint(300, 60), wxSize(50, 20));
	return newButton;
}

wxButton* ButtonFactory::GetButton0(wxWindow* parent)
{

	wxButton* newButton = new wxButton(parent, 1000, "0", wxPoint(100, 400), wxSize(100, 100));
	return newButton;
}

wxButton* ButtonFactory::GetButton1(wxWindow* parent)
{
	wxButton* newButton = new wxButton(parent, 1001, "1", wxPoint(0, 100), wxSize(100, 100));
	return newButton;
}

wxButton* ButtonFactory::GetButton2(wxWindow* parent)
{
	wxButton* newButton = new wxButton(parent, 1002, "2", wxPoint(100, 100), wxSize(100, 100));
	return newButton;
}

wxButton* ButtonFactory::GetButton3(wxWindow* parent)
{
	wxButton* newButton = new wxButton(parent, 1003, "3", wxPoint(200, 100), wxSize(100, 100));
	return newButton;
}

wxButton* ButtonFactory::GetButton4(wxWindow* parent)
{
	wxButton* newButton = new wxButton(parent, 1004, "4", wxPoint(0, 200), wxSize(100, 100));
	return newButton;
}

wxButton* ButtonFactory::GetButton5(wxWindow* parent)
{
	wxButton* newButton = new wxButton(parent, 1005, "5", wxPoint(100, 200), wxSize(100, 100));
	return newButton;
}

wxButton* ButtonFactory::GetButton6(wxWindow* parent)
{
	wxButton* newButton = new wxButton(parent, 1006, "6", wxPoint(200, 200), wxSize(100, 100));
	return newButton;
}

wxButton* ButtonFactory::GetButton7(wxWindow* parent)
{
	wxButton* newButton = new wxButton(parent, 1007, "7", wxPoint(0, 300), wxSize(100, 100));
	return newButton;
}

wxButton* ButtonFactory::GetButton8(wxWindow* parent)
{
	wxButton* newButton = new wxButton(parent, 1008, "8", wxPoint(100, 300), wxSize(100, 100));
	return newButton;
}

wxButton* ButtonFactory::GetButton9(wxWindow* parent)
{
	wxButton* newButton = new wxButton(parent, 1009, "9", wxPoint(200, 300), wxSize(100, 100));
	return newButton;
}

wxButton* ButtonFactory::GetButtonClear(wxWindow* parent)
{
	wxButton* newButton = new wxButton(parent, 1010, "C", wxPoint(0, 400), wxSize(100, 100));
	return newButton;
}

wxButton* ButtonFactory::GetButtonEquals(wxWindow* parent)
{
	wxButton* newButton = new wxButton(parent, 1011, "=", wxPoint(200, 400), wxSize(100, 100));
	return newButton;
}

wxButton* ButtonFactory::GetButtonPlus(wxWindow* parent)
{
	wxButton* newButton = new wxButton(parent, 1012, "+", wxPoint(300, 100), wxSize(100, 65));
	return newButton;
}

wxButton* ButtonFactory::GetButtonMinus(wxWindow* parent)
{
	wxButton* newButton = new wxButton(parent, 1013, "-", wxPoint(300, 165), wxSize(100, 65));
	return newButton;
}

wxButton* ButtonFactory::GetButtonTimes(wxWindow* parent)
{
	wxButton* newButton = new wxButton(parent, 1014, "*", wxPoint(300, 230), wxSize(100, 65));
	return newButton;
}

wxButton* ButtonFactory::GetButtonDivide(wxWindow* parent)
{
	wxButton* newButton = new wxButton(parent, 1015, "/", wxPoint(300, 295), wxSize(100, 65));
	return newButton;
}

wxButton* ButtonFactory::GetButtonModulo(wxWindow* parent)
{
	wxButton* newButton = new wxButton(parent, 1016, "%", wxPoint(300, 360), wxSize(100, 65));
	return newButton;
}

wxButton* ButtonFactory::GetButtonPlusOrMinus(wxWindow* parent)
{
	wxButton* newButton = new wxButton(parent, 1017, "+/-", wxPoint(300, 425), wxSize(100, 75));
	return newButton;
}

wxTextCtrl* ButtonFactory::GetTextBox(wxWindow* parent)
{
	wxTextCtrl* newTextCtrl = new wxTextCtrl(parent, 996, "", wxPoint(25, 15), wxSize(350, 25));
	return newTextCtrl;
}
