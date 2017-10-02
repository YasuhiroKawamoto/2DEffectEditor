#include "SaveControlImage.h"


using namespace My2DEffectEditor;

using namespace System;
using namespace System::Drawing;

[STAThreadAttribute]
int SaveControlImageMain() {
	SaveControlImage ^fm = gcnew SaveControlImage();
	fm->ShowDialog();



	return 0;
}