#include "CalculatorMain.h"

wxIMPLEMENT_APP(CalculatorMain);

bool CalculatorMain::OnInit()
{
	window = new MainWindow();
	window->Show();
	return true;
}