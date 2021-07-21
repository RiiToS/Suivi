#pragma once
#include "Client.h"
#include "Stats.h"
namespace Suivi {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class Menu : public System::Windows::Forms::Form
	{
	public:
		Menu(void) {
			InitializeComponent();
			link = gcnew SqlConnection("Data Source=DESKTOP-4HPMNFU;Initial Catalog=Client;Integrated Security=True");//connection à la BDD
			try { link->Open(); }
			catch (SqlException^ ex) {
				delete this;
			}
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Menu() {
			if (components)
			{
				delete components;
			}
		}
	private:
		SqlConnection^ link;
	private: System::Windows::Forms::Button^ button1;




	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void ActivateComponent() {

		}
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(14, 55);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(109, 51);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Facture";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Menu::button1_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(357, 55);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(109, 51);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Déconnexion";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Menu::button6_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(212, 32);
			this->label1->TabIndex = 6;
			this->label1->Text = L"\tBienvenue, veuillez\r\nséléctionner l\'opération souhaitée.";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(130, 55);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(109, 51);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Statistique";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Menu::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(243, 55);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(109, 51);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Client";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Menu::button3_Click);
			// 
			// Menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(482, 128);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"Menu";
			this->Text = L"Gestion";
			this->Load += gcnew System::EventHandler(this, &Menu::Menu_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Suivi::Gestion Gestion(link);
		Gestion.ShowDialog();
		this->Show();
	}
	
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}

	private: System::Void Menu_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Suivi::Stats Stats(link);
	Stats.ShowDialog();
	this->Show();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Suivi::Client Client(link);
	Client.ShowDialog();
	this->Show();
}
};
}
