#include "MainWindow.h"

MainWindow::MainWindow() : wxFrame(nullptr, wxID_ANY, "Buttons", wxPoint(200, 50), wxSize(417, 540))
{
	textBox = new wxTextCtrl(this, 996, "", wxPoint(25, 15), wxSize(350, 25));

	buttonBin = new wxButton(this, 997, "Bin", wxPoint(50, 60), wxSize(50, 20));
	buttonHex = new wxButton(this, 998, "Hex", wxPoint(175, 60), wxSize(50, 20));
	buttonDec = new wxButton(this, 999, "Dec", wxPoint(300, 60), wxSize(50, 20));

	button0 = new wxButton(this, 1000, "0", wxPoint(100, 400), wxSize(100, 100));
	button1 = new wxButton(this, 1001, "1", wxPoint(0, 100), wxSize(100, 100));
	button2 = new wxButton(this, 1002, "2", wxPoint(100, 100), wxSize(100, 100));
	button3 = new wxButton(this, 1003, "3", wxPoint(200, 100), wxSize(100, 100));
	button4 = new wxButton(this, 1004, "4", wxPoint(0, 200), wxSize(100, 100));
	button5 = new wxButton(this, 1005, "5", wxPoint(100, 200), wxSize(100, 100));
	button6 = new wxButton(this, 1006, "6", wxPoint(200, 200), wxSize(100, 100));
	button7 = new wxButton(this, 1007, "7", wxPoint(0, 300), wxSize(100, 100));
	button8 = new wxButton(this, 1008, "8", wxPoint(100, 300), wxSize(100, 100));
	button9 = new wxButton(this, 1009, "9", wxPoint(200, 300), wxSize(100, 100));
	buttonClear = new wxButton(this, 1010, "C", wxPoint(0, 400), wxSize(100, 100));
	buttonEquals = new wxButton(this, 1011, "=", wxPoint(200, 400), wxSize(100, 100));
	buttonPlus = new wxButton(this, 1012, "+", wxPoint(300, 100), wxSize(100, 65));
	buttonMinus = new wxButton(this, 1013, "-", wxPoint(300, 165), wxSize(100, 65));
	buttonTimes = new wxButton(this, 1014, "*", wxPoint(300, 230), wxSize(100, 65));
	buttonDivide = new wxButton(this, 1015, "/", wxPoint(300, 295), wxSize(100, 65));
	buttonModulo = new wxButton(this, 1016, "%", wxPoint(300, 360), wxSize(100, 65));
	buttonPlusOrMinus = new wxButton(this, 1017, "+/-", wxPoint(300, 425), wxSize(100, 75));

}