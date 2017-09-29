#include "NodeForm.h"


using namespace My2DEffectEditor;

using namespace System;
using namespace System::Drawing;

[STAThreadAttribute]
int NodeFormMain() {
	NodeForm ^fm = gcnew NodeForm();
	fm->ShowDialog();



	return 0;
}
