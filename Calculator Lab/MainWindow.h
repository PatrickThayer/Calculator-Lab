#pragma once
#include "wx/wx.h"

class MainWindow : public wxFrame
{
private:
	wxButton* buttonBin = nullptr;
	wxButton* buttonHex = nullptr;
	wxButton* buttonDec = nullptr;
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
	wxButton* buttonClear = nullptr;
	wxButton* buttonEquals = nullptr;
	wxButton* buttonPlus = nullptr;
	wxButton* buttonMinus = nullptr;
	wxButton* buttonTimes = nullptr;
	wxButton* buttonDivide = nullptr;
	wxButton* buttonModulo = nullptr;
	wxButton* buttonPlusOrMinus = nullptr;

	wxTextCtrl* textBox = nullptr;

public:
	MainWindow();
};