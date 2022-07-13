#pragma once
#include "wx/wx.h"
#include "MainWindow.h"

class ButtonFactory
{

public:
	wxButton* GetButtonBin(wxWindow* parent);
	wxButton* GetButtonHex(wxWindow* parent);
	wxButton* GetButtonDec(wxWindow* parent);
	wxButton* GetButton0(wxWindow* parent);
	wxButton* GetButton1(wxWindow* parent);
	wxButton* GetButton2(wxWindow* parent);
	wxButton* GetButton3(wxWindow* parent);
	wxButton* GetButton4(wxWindow* parent);
	wxButton* GetButton5(wxWindow* parent);
	wxButton* GetButton6(wxWindow* parent);
	wxButton* GetButton7(wxWindow* parent);
	wxButton* GetButton8(wxWindow* parent);
	wxButton* GetButton9(wxWindow* parent);
	wxButton* GetButtonClear(wxWindow* parent);
	wxButton* GetButtonEquals(wxWindow* parent);
	wxButton* GetButtonPlus(wxWindow* parent);
	wxButton* GetButtonMinus(wxWindow* parent);
	wxButton* GetButtonTimes(wxWindow* parent);
	wxButton* GetButtonDivide(wxWindow* parent);
	wxButton* GetButtonModulo(wxWindow* parent);
	wxButton* GetButtonPlusOrMinus(wxWindow* parent);

	wxTextCtrl* GetTextBox(wxWindow* parent);
};