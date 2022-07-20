#pragma once
#include "wx/wx.h"
#include "MainWindow.h"

class ButtonFactory
{

public:
	wxWindow* _parent = nullptr;
	wxButton* GetButtonBin();
	wxButton* GetButtonHex();
	wxButton* GetButtonDec();
	wxButton* GetButton0();
	wxButton* GetButton1();
	wxButton* GetButton2();
	wxButton* GetButton3();
	wxButton* GetButton4();
	wxButton* GetButton5();
	wxButton* GetButton6();
	wxButton* GetButton7();
	wxButton* GetButton8();
	wxButton* GetButton9();
	wxButton* GetButtonClear();
	wxButton* GetButtonEquals();
	wxButton* GetButtonPlus();
	wxButton* GetButtonMinus();
	wxButton* GetButtonTimes();
	wxButton* GetButtonDivide();
	wxButton* GetButtonModulo();
	wxButton* GetButtonPlusOrMinus();

	wxTextCtrl* GetTextBox();
	wxTextCtrl* GetNumberConverter();
};