#include "MainForm.h"


using namespace My2DEffectEditor;

using namespace System;
using namespace System::Drawing;

[STAThreadAttribute]
int main() {
	MainForm ^fm = gcnew MainForm();
	fm->ShowDialog();



	return 0;
}