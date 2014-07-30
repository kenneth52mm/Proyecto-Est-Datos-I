#pragma once

namespace ProyectoEstDatosI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PantallaPrincipal
	/// </summary>
	public ref class PantallaPrincipal : public System::Windows::Forms::Form
	{
	public:
		PantallaPrincipal(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PantallaPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menu_principal;
	protected: 

	protected: 
	private: System::Windows::Forms::ToolStripMenuItem^  jugadoresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  equiposToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  jugadoresToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  partidosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  grupoAToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  grupoBToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  alemaniaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  argentinaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  austriaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  costaDeMarfilToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  costaRicaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  espanaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  holandaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  japonToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  jugadoresToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  jugadoresToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^  jugadorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  jugadoresToolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^  jugadoresToolStripMenuItem5;
	private: System::Windows::Forms::ToolStripMenuItem^  jugadoresToolStripMenuItem6;
	private: System::Windows::Forms::ToolStripMenuItem^  jugadoresToolStripMenuItem7;
	private: System::Windows::Forms::ToolStripMenuItem^  jugadoresToolStripMenuItem8;
	private: System::Windows::Forms::DataGridView^  dtGrupos;




	private: System::Windows::Forms::Label^  lblTitulo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  idEquipo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  nombreEquipo;
	private: System::Windows::Forms::DataGridView^  dtEquipos;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  idEquipos;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  entrenador;
	private: System::Windows::Forms::DataGridView^  dtJugadores;
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

	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->menu_principal = (gcnew System::Windows::Forms::MenuStrip());
			this->jugadoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->grupoAToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->grupoBToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->equiposToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->alemaniaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->argentinaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->austriaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->costaDeMarfilToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->costaRicaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->espanaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->holandaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->japonToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->jugadoresToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->partidosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->jugadoresToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->jugadoresToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->jugadorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->jugadoresToolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->jugadoresToolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->jugadoresToolStripMenuItem6 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->jugadoresToolStripMenuItem7 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->jugadoresToolStripMenuItem8 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dtGrupos = (gcnew System::Windows::Forms::DataGridView());
			this->lblTitulo = (gcnew System::Windows::Forms::Label());
			this->idEquipo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->nombreEquipo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dtEquipos = (gcnew System::Windows::Forms::DataGridView());
			this->idEquipos = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->entrenador = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
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
			this->menu_principal->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dtGrupos))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dtEquipos))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dtJugadores))->BeginInit();
			this->SuspendLayout();
			// 
			// menu_principal
			// 
			this->menu_principal->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->jugadoresToolStripMenuItem, 
				this->equiposToolStripMenuItem, this->jugadoresToolStripMenuItem1, this->partidosToolStripMenuItem});
			this->menu_principal->Location = System::Drawing::Point(0, 0);
			this->menu_principal->Name = L"menu_principal";
			this->menu_principal->Size = System::Drawing::Size(1069, 24);
			this->menu_principal->TabIndex = 0;
			this->menu_principal->Text = L"menuStrip1";
			// 
			// jugadoresToolStripMenuItem
			// 
			this->jugadoresToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->grupoAToolStripMenuItem, 
				this->grupoBToolStripMenuItem});
			this->jugadoresToolStripMenuItem->Name = L"jugadoresToolStripMenuItem";
			this->jugadoresToolStripMenuItem->Size = System::Drawing::Size(57, 20);
			this->jugadoresToolStripMenuItem->Text = L"Grupos";
			this->jugadoresToolStripMenuItem->Click += gcnew System::EventHandler(this, &PantallaPrincipal::jugadoresToolStripMenuItem_Click);
			// 
			// grupoAToolStripMenuItem
			// 
			this->grupoAToolStripMenuItem->Name = L"grupoAToolStripMenuItem";
			this->grupoAToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->grupoAToolStripMenuItem->Text = L"Grupo A";
			// 
			// grupoBToolStripMenuItem
			// 
			this->grupoBToolStripMenuItem->Name = L"grupoBToolStripMenuItem";
			this->grupoBToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->grupoBToolStripMenuItem->Text = L"Grupo B";
			// 
			// equiposToolStripMenuItem
			// 
			this->equiposToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {this->alemaniaToolStripMenuItem, 
				this->argentinaToolStripMenuItem, this->austriaToolStripMenuItem, this->costaDeMarfilToolStripMenuItem, this->costaRicaToolStripMenuItem, 
				this->espanaToolStripMenuItem, this->holandaToolStripMenuItem, this->japonToolStripMenuItem});
			this->equiposToolStripMenuItem->Name = L"equiposToolStripMenuItem";
			this->equiposToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->equiposToolStripMenuItem->Text = L"Equipos";
			// 
			// alemaniaToolStripMenuItem
			// 
			this->alemaniaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->jugadoresToolStripMenuItem2});
			this->alemaniaToolStripMenuItem->Name = L"alemaniaToolStripMenuItem";
			this->alemaniaToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->alemaniaToolStripMenuItem->Text = L"Alemania";
			// 
			// argentinaToolStripMenuItem
			// 
			this->argentinaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->jugadoresToolStripMenuItem3});
			this->argentinaToolStripMenuItem->Name = L"argentinaToolStripMenuItem";
			this->argentinaToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->argentinaToolStripMenuItem->Text = L"Argentina";
			// 
			// austriaToolStripMenuItem
			// 
			this->austriaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->jugadorToolStripMenuItem});
			this->austriaToolStripMenuItem->Name = L"austriaToolStripMenuItem";
			this->austriaToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->austriaToolStripMenuItem->Text = L"Australia";
			// 
			// costaDeMarfilToolStripMenuItem
			// 
			this->costaDeMarfilToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->jugadoresToolStripMenuItem4});
			this->costaDeMarfilToolStripMenuItem->Name = L"costaDeMarfilToolStripMenuItem";
			this->costaDeMarfilToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->costaDeMarfilToolStripMenuItem->Text = L"Costa de Marfil";
			// 
			// costaRicaToolStripMenuItem
			// 
			this->costaRicaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->jugadoresToolStripMenuItem5});
			this->costaRicaToolStripMenuItem->Name = L"costaRicaToolStripMenuItem";
			this->costaRicaToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->costaRicaToolStripMenuItem->Text = L"Costa Rica";
			// 
			// espanaToolStripMenuItem
			// 
			this->espanaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->jugadoresToolStripMenuItem6});
			this->espanaToolStripMenuItem->Name = L"espanaToolStripMenuItem";
			this->espanaToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->espanaToolStripMenuItem->Text = L"Espana";
			// 
			// holandaToolStripMenuItem
			// 
			this->holandaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->jugadoresToolStripMenuItem7});
			this->holandaToolStripMenuItem->Name = L"holandaToolStripMenuItem";
			this->holandaToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->holandaToolStripMenuItem->Text = L"Holanda";
			// 
			// japonToolStripMenuItem
			// 
			this->japonToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->jugadoresToolStripMenuItem8});
			this->japonToolStripMenuItem->Name = L"japonToolStripMenuItem";
			this->japonToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->japonToolStripMenuItem->Text = L"Japon";
			// 
			// jugadoresToolStripMenuItem1
			// 
			this->jugadoresToolStripMenuItem1->Name = L"jugadoresToolStripMenuItem1";
			this->jugadoresToolStripMenuItem1->Size = System::Drawing::Size(72, 20);
			this->jugadoresToolStripMenuItem1->Text = L"Jugadores";
			// 
			// partidosToolStripMenuItem
			// 
			this->partidosToolStripMenuItem->Name = L"partidosToolStripMenuItem";
			this->partidosToolStripMenuItem->Size = System::Drawing::Size(62, 20);
			this->partidosToolStripMenuItem->Text = L"Partidos";
			// 
			// jugadoresToolStripMenuItem2
			// 
			this->jugadoresToolStripMenuItem2->Name = L"jugadoresToolStripMenuItem2";
			this->jugadoresToolStripMenuItem2->Size = System::Drawing::Size(152, 22);
			this->jugadoresToolStripMenuItem2->Text = L"Jugadores";
			// 
			// jugadoresToolStripMenuItem3
			// 
			this->jugadoresToolStripMenuItem3->Name = L"jugadoresToolStripMenuItem3";
			this->jugadoresToolStripMenuItem3->Size = System::Drawing::Size(152, 22);
			this->jugadoresToolStripMenuItem3->Text = L"Jugadores";
			// 
			// jugadorToolStripMenuItem
			// 
			this->jugadorToolStripMenuItem->Name = L"jugadorToolStripMenuItem";
			this->jugadorToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->jugadorToolStripMenuItem->Text = L"Jugadores";
			// 
			// jugadoresToolStripMenuItem4
			// 
			this->jugadoresToolStripMenuItem4->Name = L"jugadoresToolStripMenuItem4";
			this->jugadoresToolStripMenuItem4->Size = System::Drawing::Size(152, 22);
			this->jugadoresToolStripMenuItem4->Text = L"Jugadores";
			// 
			// jugadoresToolStripMenuItem5
			// 
			this->jugadoresToolStripMenuItem5->Name = L"jugadoresToolStripMenuItem5";
			this->jugadoresToolStripMenuItem5->Size = System::Drawing::Size(152, 22);
			this->jugadoresToolStripMenuItem5->Text = L"Jugadores";
			// 
			// jugadoresToolStripMenuItem6
			// 
			this->jugadoresToolStripMenuItem6->Name = L"jugadoresToolStripMenuItem6";
			this->jugadoresToolStripMenuItem6->Size = System::Drawing::Size(152, 22);
			this->jugadoresToolStripMenuItem6->Text = L"Jugadores";
			// 
			// jugadoresToolStripMenuItem7
			// 
			this->jugadoresToolStripMenuItem7->Name = L"jugadoresToolStripMenuItem7";
			this->jugadoresToolStripMenuItem7->Size = System::Drawing::Size(152, 22);
			this->jugadoresToolStripMenuItem7->Text = L"Jugadores";
			// 
			// jugadoresToolStripMenuItem8
			// 
			this->jugadoresToolStripMenuItem8->Name = L"jugadoresToolStripMenuItem8";
			this->jugadoresToolStripMenuItem8->Size = System::Drawing::Size(152, 22);
			this->jugadoresToolStripMenuItem8->Text = L"Jugadores";
			// 
			// dtGrupos
			// 
			this->dtGrupos->AllowDrop = true;
			this->dtGrupos->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dtGrupos->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dtGrupos->BackgroundColor = System::Drawing::Color::White;
			this->dtGrupos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dtGrupos->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {this->idEquipo, this->nombreEquipo});
			this->dtGrupos->Location = System::Drawing::Point(188, 87);
			this->dtGrupos->Name = L"dtGrupos";
			this->dtGrupos->Size = System::Drawing::Size(203, 44);
			this->dtGrupos->TabIndex = 0;
			this->dtGrupos->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PantallaPrincipal::dataGridView1_CellContentClick);
			// 
			// lblTitulo
			// 
			this->lblTitulo->AutoSize = true;
			this->lblTitulo->Location = System::Drawing::Point(13, 44);
			this->lblTitulo->Name = L"lblTitulo";
			this->lblTitulo->Size = System::Drawing::Size(40, 13);
			this->lblTitulo->TabIndex = 2;
			this->lblTitulo->Text = L"-----------";
			// 
			// idEquipo
			// 
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->idEquipo->DefaultCellStyle = dataGridViewCellStyle1;
			this->idEquipo->HeaderText = L"Id de equipo";
			this->idEquipo->Name = L"idEquipo";
			this->idEquipo->ReadOnly = true;
			this->idEquipo->Width = 91;
			// 
			// nombreEquipo
			// 
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->nombreEquipo->DefaultCellStyle = dataGridViewCellStyle2;
			this->nombreEquipo->HeaderText = L"Equipo";
			this->nombreEquipo->Name = L"nombreEquipo";
			this->nombreEquipo->ReadOnly = true;
			this->nombreEquipo->Width = 65;
			// 
			// dtEquipos
			// 
			this->dtEquipos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dtEquipos->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {this->idEquipos, 
				this->entrenador});
			this->dtEquipos->Location = System::Drawing::Point(188, 183);
			this->dtEquipos->Name = L"dtEquipos";
			this->dtEquipos->Size = System::Drawing::Size(240, 76);
			this->dtEquipos->TabIndex = 1;
			// 
			// idEquipos
			// 
			this->idEquipos->HeaderText = L"Id de Equipo";
			this->idEquipos->Name = L"idEquipos";
			this->idEquipos->ReadOnly = true;
			// 
			// entrenador
			// 
			this->entrenador->HeaderText = L"Nombre entrenador";
			this->entrenador->Name = L"entrenador";
			this->entrenador->ReadOnly = true;
			// 
			// dtJugadores
			// 
			this->dtJugadores->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dtJugadores->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {this->nombre, this->fecha_nac, 
				this->edad, this->altura, this->id, this->posicion, this->primer_partido, this->partidos_jugados, this->cantidad_goles, this->club});
			this->dtJugadores->Location = System::Drawing::Point(12, 279);
			this->dtJugadores->Name = L"dtJugadores";
			this->dtJugadores->Size = System::Drawing::Size(1033, 61);
			this->dtJugadores->TabIndex = 3;
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
			// PantallaPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1069, 471);
			this->Controls->Add(this->dtJugadores);
			this->Controls->Add(this->dtEquipos);
			this->Controls->Add(this->lblTitulo);
			this->Controls->Add(this->dtGrupos);
			this->Controls->Add(this->menu_principal);
			this->MainMenuStrip = this->menu_principal;
			this->Name = L"PantallaPrincipal";
			this->Text = L"Pantalla Principal";
			this->menu_principal->ResumeLayout(false);
			this->menu_principal->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dtGrupos))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dtEquipos))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dtJugadores))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
};
}
