#pragma once

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
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(9, 40);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(82, 41);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Facture";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Menu::button1_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(183, 85);
			this->button6->Margin = System::Windows::Forms::Padding(2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(82, 41);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Déconnexion";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Menu::button6_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 7);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(161, 26);
			this->label1->TabIndex = 6;
			this->label1->Text = L"\tBienvenue, veuillez\r\nséléctionner l\'opération souhaité.";
			// 
			// Menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(274, 136);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(2);
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
};
}
