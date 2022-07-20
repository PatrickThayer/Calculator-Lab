#include "ButtonFactory.h"


wxButton* ButtonFactory::GetButtonBin()
{
	wxButton* newButton = new wxButton(_parent, 997, "Bin", wxPoint(50, 65), wxSize(50, 20));
	return newButton;
}

wxButton* ButtonFactory::GetButtonHex()
{
	wxButton* newButton = new wxButton(_parent, 998, "Hex", wxPoint(175, 65), wxSize(50, 20));;
	return newButton;
}

wxButton* ButtonFactory::GetButtonDec()
{
	wxButton* newButton = new wxButton(_parent, 999, "Dec", wxPoint(300, 65), wxSize(50, 20));
	return newButton;
}

wxButton* ButtonFactory::GetButton0()
{

	wxButton* newButton = new wxButton(_parent, 1000, "0", wxPoint(100, 400), wxSize(100, 100));
	return newButton;
}

wxButton* ButtonFactory::GetButton1()
{
	wxButton* newButton = new wxButton(_parent, 1001, "1", wxPoint(0, 100), wxSize(100, 100));
	return newButton;
}

wxButton* ButtonFactory::GetButton2()
{
	wxButton* newButton = new wxButton(_parent, 1002, "2", wxPoint(100, 100), wxSize(100, 100));
	return newButton;
}

wxButton* ButtonFactory::GetButton3()
{
	wxButton* newButton = new wxButton(_parent, 1003, "3", wxPoint(200, 100), wxSize(100, 100));
	return newButton;
}

wxButton* ButtonFactory::GetButton4()
{
	wxButton* newButton = new wxButton(_parent, 1004, "4", wxPoint(0, 200), wxSize(100, 100));
	return newButton;
}

wxButton* ButtonFactory::GetButton5()
{
	wxButton* newButton = new wxButton(_parent, 1005, "5", wxPoint(100, 200), wxSize(100, 100));
	return newButton;
}

wxButton* ButtonFactory::GetButton6()
{
	wxButton* newButton = new wxButton(_parent, 1006, "6", wxPoint(200, 200), wxSize(100, 100));
	return newButton;
}

wxButton* ButtonFactory::GetButton7()
{
	wxButton* newButton = new wxButton(_parent, 1007, "7", wxPoint(0, 300), wxSize(100, 100));
	return newButton;
}

wxButton* ButtonFactory::GetButton8()
{
	wxButton* newButton = new wxButton(_parent, 1008, "8", wxPoint(100, 300), wxSize(100, 100));
	return newButton;
}

wxButton* ButtonFactory::GetButton9()
{
	wxButton* newButton = new wxButton(_parent, 1009, "9", wxPoint(200, 300), wxSize(100, 100));
	return newButton;
}

wxButton* ButtonFactory::GetButtonClear()
{
	wxButton* newButton = new wxButton(_parent, 1010, "C", wxPoint(0, 400), wxSize(100, 100));
	return newButton;
}

wxButton* ButtonFactory::GetButtonEquals()
{
	wxButton* newButton = new wxButton(_parent, 1011, "=", wxPoint(200, 400), wxSize(100, 100));
	return newButton;
}

wxButton* ButtonFactory::GetButtonPlus()
{
	wxButton* newButton = new wxButton(_parent, 1012, "+", wxPoint(300, 100), wxSize(100, 65));
	return newButton;
}

wxButton* ButtonFactory::GetButtonMinus()
{
	wxButton* newButton = new wxButton(_parent, 1013, "-", wxPoint(300, 165), wxSize(100, 65));
	return newButton;
}

wxButton* ButtonFactory::GetButtonTimes()
{
	wxButton* newButton = new wxButton(_parent, 1014, "*", wxPoint(300, 230), wxSize(100, 65));
	return newButton;
}

wxButton* ButtonFactory::GetButtonDivide()
{
	wxButton* newButton = new wxButton(_parent, 1015, "/", wxPoint(300, 295), wxSize(100, 65));
	return newButton;
}

wxButton* ButtonFactory::GetButtonModulo()
{
	wxButton* newButton = new wxButton(_parent, 1016, "%", wxPoint(300, 360), wxSize(100, 65));
	return newButton;
}

wxButton* ButtonFactory::GetButtonPlusOrMinus()
{
	wxButton* newButton = new wxButton(_parent, 1017, "+/-", wxPoint(300, 425), wxSize(100, 75));
	return newButton;
}

wxTextCtrl* ButtonFactory::GetTextBox()
{
	wxTextCtrl* newTextCtrl = new wxTextCtrl(_parent, 996, "", wxPoint(25, 10), wxSize(350, 25));
	return newTextCtrl;
}

wxTextCtrl* ButtonFactory::GetNumberConverter() {

	wxTextCtrl* newTextCtrl = new wxTextCtrl(_parent, 995, "", wxPoint(25, 35), wxSize(350, 25));

	return newTextCtrl;
}
