#pragma once

namespace SemanaCasiFinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmAgregarNodo
	/// </summary>
	public ref class frmAgregarNodo : public System::Windows::Forms::Form
	{
	public:
		frmAgregarNodo(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~frmAgregarNodo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::TextBox^  txtNodo;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  txtPesoIzq;
	private: System::Windows::Forms::TextBox^  txtPesoDer;
	private: System::Windows::Forms::TextBox^  txtNodoDer;
	private: System::Windows::Forms::TextBox^  txtNodoIzq;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  btnInsertar;
	private: System::Windows::Forms::Button^  btnAsignar;
	private: System::Windows::Forms::Button^  btnCalcular;
	private: System::Windows::Forms::DataGridView^  dgvLista;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colNodo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colPI;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colPD;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colNodos;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtNodo = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtPesoIzq = (gcnew System::Windows::Forms::TextBox());
			this->txtPesoDer = (gcnew System::Windows::Forms::TextBox());
			this->txtNodoDer = (gcnew System::Windows::Forms::TextBox());
			this->txtNodoIzq = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnInsertar = (gcnew System::Windows::Forms::Button());
			this->btnAsignar = (gcnew System::Windows::Forms::Button());
			this->btnCalcular = (gcnew System::Windows::Forms::Button());
			this->dgvLista = (gcnew System::Windows::Forms::DataGridView());
			this->colNodo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colPI = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colPD = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colNodos = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLista))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(25, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nodo";
			// 
			// txtNodo
			// 
			this->txtNodo->Location = System::Drawing::Point(64, 19);
			this->txtNodo->Name = L"txtNodo";
			this->txtNodo->Size = System::Drawing::Size(100, 20);
			this->txtNodo->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(25, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(23, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"P.I.";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(136, 65);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(28, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"P.D.";
			// 
			// txtPesoIzq
			// 
			this->txtPesoIzq->Location = System::Drawing::Point(54, 62);
			this->txtPesoIzq->Name = L"txtPesoIzq";
			this->txtPesoIzq->Size = System::Drawing::Size(60, 20);
			this->txtPesoIzq->TabIndex = 4;
			// 
			// txtPesoDer
			// 
			this->txtPesoDer->Location = System::Drawing::Point(170, 62);
			this->txtPesoDer->Name = L"txtPesoDer";
			this->txtPesoDer->Size = System::Drawing::Size(60, 20);
			this->txtPesoDer->TabIndex = 5;
			// 
			// txtNodoDer
			// 
			this->txtNodoDer->Location = System::Drawing::Point(170, 99);
			this->txtNodoDer->Name = L"txtNodoDer";
			this->txtNodoDer->Size = System::Drawing::Size(60, 20);
			this->txtNodoDer->TabIndex = 9;
			// 
			// txtNodoIzq
			// 
			this->txtNodoIzq->Location = System::Drawing::Point(54, 99);
			this->txtNodoIzq->Name = L"txtNodoIzq";
			this->txtNodoIzq->Size = System::Drawing::Size(60, 20);
			this->txtNodoIzq->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(136, 102);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(29, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"N.D.";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(25, 102);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(24, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"N.I.";
			// 
			// btnInsertar
			// 
			this->btnInsertar->Location = System::Drawing::Point(439, 13);
			this->btnInsertar->Name = L"btnInsertar";
			this->btnInsertar->Size = System::Drawing::Size(75, 23);
			this->btnInsertar->TabIndex = 10;
			this->btnInsertar->Text = L"Insertar";
			this->btnInsertar->UseVisualStyleBackColor = true;
			this->btnInsertar->Click += gcnew System::EventHandler(this, &frmAgregarNodo::btnInsertar_Click);
			// 
			// btnAsignar
			// 
			this->btnAsignar->Location = System::Drawing::Point(439, 56);
			this->btnAsignar->Name = L"btnAsignar";
			this->btnAsignar->Size = System::Drawing::Size(75, 23);
			this->btnAsignar->TabIndex = 11;
			this->btnAsignar->Text = L"Asignar";
			this->btnAsignar->UseVisualStyleBackColor = true;
			this->btnAsignar->Click += gcnew System::EventHandler(this, &frmAgregarNodo::btnAsignar_Click);
			// 
			// btnCalcular
			// 
			this->btnCalcular->Location = System::Drawing::Point(439, 99);
			this->btnCalcular->Name = L"btnCalcular";
			this->btnCalcular->Size = System::Drawing::Size(75, 23);
			this->btnCalcular->TabIndex = 12;
			this->btnCalcular->Text = L"Calcular";
			this->btnCalcular->UseVisualStyleBackColor = true;
			this->btnCalcular->Click += gcnew System::EventHandler(this, &frmAgregarNodo::btnCalcular_Click);
			// 
			// dgvLista
			// 
			this->dgvLista->AllowUserToAddRows = false;
			this->dgvLista->AllowUserToDeleteRows = false;
			this->dgvLista->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvLista->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->colNodo, this->colPI,
					this->colPD, this->colNodos
			});
			this->dgvLista->Location = System::Drawing::Point(12, 238);
			this->dgvLista->Name = L"dgvLista";
			this->dgvLista->ReadOnly = true;
			this->dgvLista->Size = System::Drawing::Size(502, 269);
			this->dgvLista->TabIndex = 13;
			// 
			// colNodo
			// 
			this->colNodo->HeaderText = L"Nodo";
			this->colNodo->Name = L"colNodo";
			this->colNodo->ReadOnly = true;
			// 
			// colPI
			// 
			this->colPI->HeaderText = L"P.I.";
			this->colPI->Name = L"colPI";
			this->colPI->ReadOnly = true;
			// 
			// colPD
			// 
			this->colPD->HeaderText = L"P.D.";
			this->colPD->Name = L"colPD";
			this->colPD->ReadOnly = true;
			// 
			// colNodos
			// 
			this->colNodos->HeaderText = L"Nodos";
			this->colNodos->Name = L"colNodos";
			this->colNodos->ReadOnly = true;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(153, 26);
			// 
			// frmAgregarNodo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(528, 519);
			this->Controls->Add(this->dgvLista);
			this->Controls->Add(this->btnCalcular);
			this->Controls->Add(this->btnAsignar);
			this->Controls->Add(this->btnInsertar);
			this->Controls->Add(this->txtNodoDer);
			this->Controls->Add(this->txtNodoIzq);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtPesoDer);
			this->Controls->Add(this->txtPesoIzq);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtNodo);
			this->Controls->Add(this->label1);
			this->Name = L"frmAgregarNodo";
			this->Text = L"frmAgregarNodo";
			this->Load += gcnew System::EventHandler(this, &frmAgregarNodo::frmAgregarNodo_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLista))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		char *StringToChar(System::Windows::Forms::TextBox^ textBox) {
			String^ val = textBox->Text;
			IntPtr ptrToNativeString = Marshal::StringToHGlobalAnsi(val);
			char* r = static_cast<char*>(ptrToNativeString.ToPointer());
			return r;
		}

		char *StringToChar(String^ val) {
			IntPtr ptrToNativeString = Marshal::StringToHGlobalAnsi(val);
			char* r = static_cast<char*>(ptrToNativeString.ToPointer());
			return r;
		}
		

#pragma endregion
	private: System::Void btnInsertar_Click(System::Object^  sender, System::EventArgs^  e) {

				 int pesoI = Convert::ToInt32(txtPesoIzq->Text);
				 int pesoD = Convert::ToInt32(txtPesoDer->Text);

				 insertarNodo(StringToChar(txtNodo), pesoI, pesoD);
				 MostrarLista();
	}

	private: void MostrarLista(){
				 dgvLista->Rows->Clear();

				 for (int i = 0; i < cn; i++){
					 nodoGrafo *nodo = Nodos[i];

					 String ^ nodosID = "";

					 if (nodo->izq != NULL && nodo->der){
						 nodosID = gcnew String(nodo->izq->dato) + "," + gcnew String(nodo->der->dato);
					 }

					 dgvLista->Rows->Add(
						 gcnew String(nodo->dato),
						 gcnew String(nodo->pi + ""),
						 gcnew String(nodo->pd + ""),
						 nodosID
						 );
				 }

	}

	private: System::Void btnAsignar_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (cn >= 2){
					 asignarNodo(StringToChar(txtNodo), StringToChar(txtNodoIzq), StringToChar(txtNodoDer));
					 MostrarLista();
				 }
				 else{
					 MessageBox::Show("Al menos debe haber 3 nodos para asignar");
				 }
	}
	private: System::Void frmAgregarNodo_Load(System::Object^  sender, System::EventArgs^  e) {
				 this->txtPesoDer->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(txtPermitirSoloNumeros);
				 this->txtPesoIzq->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(txtPermitirSoloNumeros);
				 /*
				 insertarNodo("A", 1, 1);
				 insertarNodo("B", 1, 1);
				 insertarNodo("C", 1, 1);
				 insertarNodo("D", 1, 1);
				 insertarNodo("E", 1, 1);

				 asignarNodo("A", "C", "B");
				 asignarNodo("B", "C", "E");
				 asignarNodo("C", "E", "D");
				 asignarNodo("D", "C", "E");
				 asignarNodo("E", "A", "D");
				 

				 MostrarLista();*/
	}
	private: System::Void btnCalcular_Click(System::Object^  sender, System::EventArgs^  e) {

				 calcularCamino("A", "E");

	}
};
}
