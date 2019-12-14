struct nodoGrafo{
	char dato[2];
	int pi, pd;
	nodoGrafo *izq, *der;


	int pesoAcumuladoMin = 0;
};

nodoGrafo *Nodos[50];
int cn = 0;