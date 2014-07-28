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
			this->menu_principal->SuspendLayout();
			this->SuspendLayout();
			// 
			// menu_principal
			// 
			this->menu_principal->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->jugadoresToolStripMenuItem, 
				this->equiposToolStripMenuItem, this->jugadoresToolStripMenuItem1, this->partidosToolStripMenuItem});
			this->menu_principal->Location = System::Drawing::Point(0, 0);
			this->menu_principal->Name = L"menu_principal";
			this->menu_principal->Size = System::Drawing::Size(751, 24);
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
			this->grupoAToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->grupoAToolStripMenuItem->Text = L"Grupo A";
			// 
			// grupoBToolStripMenuItem
			// 
			this->grupoBToolStripMenuItem->Name = L"grupoBToolStripMenuItem";
			this->grupoBToolStripMenuItem->Size = System::Drawing::Size(118, 22);
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
			this->alemaniaToolStripMenuItem->Name = L"alemaniaToolStripMenuItem";
			this->alemaniaToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->alemaniaToolStripMenuItem->Text = L"Alemania";
			// 
			// argentinaToolStripMenuItem
			// 
			this->argentinaToolStripMenuItem->Name = L"argentinaToolStripMenuItem";
			this->argentinaToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->argentinaToolStripMenuItem->Text = L"Argentina";
			// 
			// austriaToolStripMenuItem
			// 
			this->austriaToolStripMenuItem->Name = L"austriaToolStripMenuItem";
			this->austriaToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->austriaToolStripMenuItem->Text = L"Australia";
			// 
			// costaDeMarfilToolStripMenuItem
			// 
			this->costaDeMarfilToolStripMenuItem->Name = L"costaDeMarfilToolStripMenuItem";
			this->costaDeMarfilToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->costaDeMarfilToolStripMenuItem->Text = L"Costa de Marfil";
			// 
			// costaRicaToolStripMenuItem
			// 
			this->costaRicaToolStripMenuItem->Name = L"costaRicaToolStripMenuItem";
			this->costaRicaToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->costaRicaToolStripMenuItem->Text = L"Costa Rica";
			// 
			// espanaToolStripMenuItem
			// 
			this->espanaToolStripMenuItem->Name = L"espanaToolStripMenuItem";
			this->espanaToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->espanaToolStripMenuItem->Text = L"Espana";
			// 
			// holandaToolStripMenuItem
			// 
			this->holandaToolStripMenuItem->Name = L"holandaToolStripMenuItem";
			this->holandaToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->holandaToolStripMenuItem->Text = L"Holanda";
			// 
			// japonToolStripMenuItem
			// 
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
			// PantallaPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(751, 304);
			this->Controls->Add(this->menu_principal);
			this->MainMenuStrip = this->menu_principal;
			this->Name = L"PantallaPrincipal";
			this->Text = L"Pantalla Principal";
			this->menu_principal->ResumeLayout(false);
			this->menu_principal->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
};
}
