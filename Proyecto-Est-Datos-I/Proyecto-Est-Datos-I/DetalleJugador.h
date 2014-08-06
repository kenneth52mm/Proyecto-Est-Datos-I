#pragma once
#include "ListaJugadores.h"
namespace ProyectoEstDatosI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	ListaJugadores* jugadores;

	/// <summary>
	/// Resumen de DetalleJugador
	/// </summary>
	public ref class DetalleJugador : public System::Windows::Forms::Form
	{
	public:
		DetalleJugador(ListaJugadores* _jugador)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			jugadores = _jugador;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~DetalleJugador()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dtJugadores;
	protected: 
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  fecha_nac;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  edad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  altura;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  posicion;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  primer_partido;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  partidos_jugados;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  cantidad_goles;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  club;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label2;

	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(DetalleJugador::typeid));
			this->dtJugadores = (gcnew System::Windows::Forms::DataGridView());
			this->nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fecha_nac = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->edad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->altura = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->posicion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->primer_partido = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->partidos_jugados = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cantidad_goles = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->club = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dtJugadores))->BeginInit();
			this->SuspendLayout();
			// 
			// dtJugadores
			// 
			this->dtJugadores->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dtJugadores->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {this->nombre, this->fecha_nac, 
				this->edad, this->altura, this->id, this->posicion, this->primer_partido, this->partidos_jugados, this->cantidad_goles, this->club});
			this->dtJugadores->Location = System::Drawing::Point(7, 184);
			this->dtJugadores->Name = L"dtJugadores";
			this->dtJugadores->Size = System::Drawing::Size(597, 77);
			this->dtJugadores->TabIndex = 4;
			// 
			// nombre
			// 
			this->nombre->HeaderText = L"Nombre ";
			this->nombre->Name = L"nombre";
			this->nombre->ReadOnly = true;
			// 
			// fecha_nac
			// 
			this->fecha_nac->HeaderText = L"Fecha nacimiento";
			this->fecha_nac->Name = L"fecha_nac";
			this->fecha_nac->ReadOnly = true;
			// 
			// edad
			// 
			this->edad->HeaderText = L"Edad";
			this->edad->Name = L"edad";
			this->edad->ReadOnly = true;
			// 
			// altura
			// 
			this->altura->HeaderText = L"Altura";
			this->altura->Name = L"altura";
			this->altura->ReadOnly = true;
			// 
			// id
			// 
			this->id->HeaderText = L"Número ";
			this->id->Name = L"id";
			this->id->ReadOnly = true;
			// 
			// posicion
			// 
			this->posicion->HeaderText = L"Posición";
			this->posicion->Name = L"posicion";
			this->posicion->ReadOnly = true;
			// 
			// primer_partido
			// 
			this->primer_partido->HeaderText = L"Primer partido jugado";
			this->primer_partido->Name = L"primer_partido";
			this->primer_partido->ReadOnly = true;
			// 
			// partidos_jugados
			// 
			this->partidos_jugados->HeaderText = L"Partidos jugados";
			this->partidos_jugados->Name = L"partidos_jugados";
			this->partidos_jugados->ReadOnly = true;
			// 
			// cantidad_goles
			// 
			this->cantidad_goles->HeaderText = L"Cantidad de goles";
			this->cantidad_goles->Name = L"cantidad_goles";
			this->cantidad_goles->ReadOnly = true;
			// 
			// club
			// 
			this->club->HeaderText = L"Club actual";
			this->club->Name = L"club";
			this->club->ReadOnly = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(345, 29);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Selección: detalles de Jugador";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(235, 126);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(33, 30);
			this->button1->TabIndex = 8;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &DetalleJugador::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(8) {L"Alemania", L"Argentina", L"Australia", L"Costa de Marfin", 
				L"Costa Rica", L"España", L"Holanda", L"Japon"});
			this->comboBox1->Location = System::Drawing::Point(16, 128);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(213, 28);
			this->comboBox1->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(225, 18);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Seleccione al jugador que desea:";
			// 
			// DetalleJugador
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(629, 308);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dtJugadores);
			this->Name = L"DetalleJugador";
			this->Text = L"DetalleJugador";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dtJugadores))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

				 NodoJugador* jug = jugadores->DirNodo(comboBox1->SelectedIndex+1);
				 if(jugadores->DirNodo(comboBox1->SelectedIndex+1)){
					
					 dtJugadores->Rows[0]->Cells[0]->Value = jug->GetJugador()->GetNombre();
					 dtJugadores->Rows[0]->Cells[1]->Value = jug->GetJugador()->GetFechaNac();
					 dtJugadores->Rows[0]->Cells[2]->Value = jug->GetJugador()->GetEdad();
					 dtJugadores->Rows[0]->Cells[3]->Value = jug->GetJugador()->GetAltura();
					 dtJugadores->Rows[0]->Cells[4]->Value = jug->GetJugador()->GetId();
					 dtJugadores->Rows[0]->Cells[5]->Value = jug->GetJugador()->GetPosicion();
					 dtJugadores->Rows[0]->Cells[6]->Value = jug->GetJugador()->GetPrimerPartido();
					 dtJugadores->Rows[0]->Cells[7]->Value = jug->GetJugador()->GetPartidosJugados();
					 dtJugadores->Rows[0]->Cells[8]->Value = jug->GetJugador()->GetPosicion();
					 dtJugadores->Rows[0]->Cells[9]->Value = jug->GetJugador()->GetClub();
				 }
			 }
};
}
