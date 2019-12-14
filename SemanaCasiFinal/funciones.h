using namespace System::Windows::Forms;

int buscarNodoPos(char *nodo);


void insertarNodo(char* dato, int pesoIzq, int pesoDer){

	if (buscarNodoPos(dato) == -1){
		nodoGrafo *nodo = new nodoGrafo;
		strcpy(nodo->dato, dato);
		nodo->pi = pesoIzq;
		nodo->pd = pesoDer;
		nodo->der = nodo->izq = NULL;
		Nodos[cn] = nodo;
		cn++;
	}
	else{
		MessageBox::Show("El nodo ingresado ya existe");
	}


}

nodoGrafo* buscarNodo(char *nodo){
	nodoGrafo* found = NULL;

	for (int i = 0; i < cn; i++){
		nodoGrafo *nodoActual = Nodos[i];
		if (nodoActual != NULL && strcmpi(nodoActual->dato, nodo) == 0){
			found = nodoActual;
			break;
		}
	}
	return found;
}

int buscarNodoPos(char *nodo){
	int found = -1;

	for (int i = 0; i < cn; i++){
		nodoGrafo *nodoActual = Nodos[i];
		if (nodoActual != NULL && strcmpi(nodoActual->dato, nodo) == 0){
			found = i;
			break;
		}
	}
	return found;
}

void asignarNodo(char *nodoActual, char *nodoIzq, char *nodoDer){
	nodoGrafo *NodoA = buscarNodo(nodoActual);
	nodoGrafo *NodoI = buscarNodo(nodoIzq);
	nodoGrafo *NodoD = buscarNodo(nodoDer);


	if (NodoA == NULL || NodoI == NULL || NodoD == NULL){
		System::Windows::Forms::MessageBox::Show("Los nodos ingresados son incorrectos");
	}
	else{
		int posicionActual = buscarNodoPos(nodoActual);
		Nodos[posicionActual]->izq = NodoI;
		Nodos[posicionActual]->der = NodoD;

	}


}



System::Void txtPermitirSoloNumerosyDecimales(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	System::Windows::Forms::TextBox^ txtBox = (System::Windows::Forms::TextBox^)sender;
	int a = (txtBox->Text)->IndexOf(".");
	if ((e->KeyChar >= 48 && e->KeyChar <= 57) || e->KeyChar == 8 || e->KeyChar == 46) {
		if (a != -1 && e->KeyChar == 46) e->Handled = (true);
		else e->Handled = (false);
	}
	else e->Handled = (true);
}

// this->txtPrecio->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(txtPermitirSoloNumerosyDecimales);
System::Void txtPermitirSoloNumeros(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((e->KeyChar >= 48 && e->KeyChar <= 57) || e->KeyChar == 8)
		e->Handled = (false);
	else e->Handled = (true);
}


void calcularCamino(char *nodoInicial, char* nodoFinal){

	nodoGrafo *NodoInicio = buscarNodo(nodoInicial);
	nodoGrafo *NodoFinal = buscarNodo(nodoFinal);

	int actualI = 0;
	int actualD = 0;

	//Se asigna el minimo para la derecha e izquierda del nodo inicial
	NodoInicio->der->pesoAcumuladoMin = NodoInicio->pd;
	NodoInicio->izq->pesoAcumuladoMin = NodoInicio->pi;



	for (nodoGrafo *i = NodoInicio; i != NodoFinal; i = i->izq)
	{
		actualI += i->pi;
	}
	for (nodoGrafo *i = NodoInicio; i != NodoFinal; i = i->der)
	{
		actualD += i->pd;
	}
	
	if (actualD > actualI)
	{
		MessageBox::Show("El menor camino de A hacia E tiene un peso de: " + actualI);
	}
	else
	{
		MessageBox::Show("El menor camino de A hacia E tiene un peso de: " + actualD);
	}
}