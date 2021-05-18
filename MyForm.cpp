#include "MyForm.h"

using namespace System;

using namespace System::Windows::Forms;

[STAThread]
int main() {
	TransporthubFINAL::MyForm Form;
	Form.ShowDialog();
	return 0;
}