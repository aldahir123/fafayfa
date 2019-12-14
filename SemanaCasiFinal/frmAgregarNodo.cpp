#include <iostream>
using namespace System::Runtime::InteropServices;
#include <string.h>

#include "estructura.h"
#include "funciones.h"


#include "frmAgregarNodo.h"


using namespace SemanaCasiFinal;



void main(){

	Application::EnableVisualStyles();
	Application::Run(gcnew frmAgregarNodo);
}