#pragma once
#include "CL_Client.h"
#include "SQL.h"
namespace Suivi {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Description résumée de Client
	/// </summary>
	public ref class Client : public System::Windows::Forms::Form
	{
	public:
		Client(SqlConnection^ connection)
		{
			link = connection;
			InitializeComponent();
			da = gcnew SqlDataAdapter("SELECT * FROM Client", link);
			ds = gcnew DataSet();
			da->Fill(ds, "Client");
			dataGridView10->DataSource = ds->Tables["Client"]->DefaultView;
			delete da;
			delete ds;
		}


	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Client()
		{
			if (components)
			{
				delete components;
			}
		}	
	private:
		SqlConnection^ link;
		SqlDataAdapter^ da;
		DataSet^ ds;
		String^ ID_Tampon;
		String^ ID;
	private: System::Windows::Forms::TextBox^ textBox5;
	protected:
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView10;
	private: System::Windows::Forms::Button^ button6;




		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->dataGridView10 = (gcnew System::Windows::Forms::DataGridView());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView10))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(6, 193);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(180, 20);
			this->textBox5->TabIndex = 5;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(6, 255);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(32, 13);
			this->label13->TabIndex = 67;
			this->label13->Text = L"Email";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(6, 271);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(180, 20);
			this->textBox7->TabIndex = 7;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 216);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(58, 13);
			this->label8->TabIndex = 65;
			this->label8->Text = L"Téléphone";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(6, 232);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(180, 20);
			this->textBox6->TabIndex = 6;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(6, 55);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(43, 13);
			this->label11->TabIndex = 62;
			this->label11->Text = L"Prénom";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(6, 110);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(180, 20);
			this->textBox3->TabIndex = 3;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(6, 149);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(180, 20);
			this->textBox4->TabIndex = 4;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(6, 172);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(26, 13);
			this->label10->TabIndex = 60;
			this->label10->Text = L"Ville";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(6, 310);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(180, 20);
			this->dateTimePicker1->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 294);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(94, 13);
			this->label4->TabIndex = 59;
			this->label4->Text = L"Date de 1er Achat";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(6, 32);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(180, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 133);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 13);
			this->label3->TabIndex = 64;
			this->label3->Text = L"Code Postal";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 13);
			this->label1->TabIndex = 61;
			this->label1->Text = L"Nom";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 13);
			this->label2->TabIndex = 63;
			this->label2->Text = L"Adresse";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(6, 71);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(180, 20);
			this->textBox2->TabIndex = 2;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->dateTimePicker1);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 508);
			this->groupBox1->TabIndex = 69;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Client";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &Client::groupBox1_Enter);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(98, 382);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(86, 30);
			this->button7->TabIndex = 71;
			this->button7->Text = L"Retour";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Client::button7_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(6, 418);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(86, 30);
			this->button5->TabIndex = 74;
			this->button5->Text = L"Supprimer";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Client::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(6, 453);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(86, 30);
			this->button4->TabIndex = 73;
			this->button4->Text = L"Déconnexion";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Client::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(6, 382);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(86, 30);
			this->button3->TabIndex = 72;
			this->button3->Text = L"Modifier";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Client::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(6, 346);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(86, 30);
			this->button2->TabIndex = 70;
			this->button2->Text = L"Ajouter";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Client::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(97, 346);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(86, 30);
			this->button1->TabIndex = 76;
			this->button1->Text = L"Rechercher";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Client::button1_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(12, 526);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(200, 31);
			this->richTextBox1->TabIndex = 71;
			this->richTextBox1->Text = L"";
			// 
			// dataGridView10
			// 
			this->dataGridView10->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView10->Location = System::Drawing::Point(229, 24);
			this->dataGridView10->MultiSelect = false;
			this->dataGridView10->Name = L"dataGridView10";
			this->dataGridView10->ReadOnly = true;
			this->dataGridView10->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Sunken;
			this->dataGridView10->RowHeadersWidth = 51;
			this->dataGridView10->RowTemplate->Height = 48;
			this->dataGridView10->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView10->Size = System::Drawing::Size(945, 471);
			this->dataGridView10->TabIndex = 72;
			this->dataGridView10->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Client::dataGridView1_CellContentClick);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(97, 417);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(86, 30);
			this->button6->TabIndex = 77;
			this->button6->Text = L"Ses Factures";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Client::button6_Click);
			// 
			// Client
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1204, 569);
			this->Controls->Add(this->dataGridView10);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Client";
			this->Text = L"Client";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView10))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	CL_Client nouvClient(textBox1->Text, textBox2->Text, textBox3->Text, textBox4->Text, textBox5->Text, textBox6->Text, textBox7->Text, dateTimePicker1->Value.ToString("dd/MM/yyyy"));//valeur de gestion en paramètre
	nouvClient.CreerClient(link);
	SqlDataAdapter^ da = gcnew SqlDataAdapter("SELECT * FROM Client", link);//selection de la table de la BDD
	DataSet^ ds = gcnew DataSet();
	da->Fill(ds, "Client");
	dataGridView10->DataSource = ds->Tables["Client"]->DefaultView;//affichage gridview 
	delete ds;//destruction constructeur
	delete da;
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	DataGridViewRow^ row = dataGridView10->SelectedRows[0];//configuration du datagridview et de son affichage
	textBox1->Text = row->Cells["Nom"]->Value->ToString();
	textBox2->Text = row->Cells["Prenom"]->Value->ToString();
	textBox3->Text = row->Cells["Adresse"]->Value->ToString();
	textBox4->Text = row->Cells["CodePostal"]->Value->ToString();
	textBox5->Text = row->Cells["Ville"]->Value->ToString();
	textBox6->Text = row->Cells["Telephone"]->Value->ToString();
	textBox7->Text = row->Cells["Email"]->Value->ToString();
	dateTimePicker1->Value = DateTime::ParseExact(row->Cells["Date1erAchat"]->Value->ToString()->Substring(0, 10), "dd/MM/yyyy", Globalization::CultureInfo::InvariantCulture);
	ID_Tampon = row->Cells["ID_Client"]->Value->ToString();
}

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	CL_Client nouvClient(textBox1->Text, textBox2->Text, textBox3->Text, textBox4->Text, textBox5->Text, textBox6->Text, textBox7->Text, dateTimePicker1->Value.ToString("dd/MM/yyyy"));//valeur de gestion en paramètre
	if (MessageBox::Show("Êtes vous sûr ?", "Validation", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
		nouvClient.SupprimerClient(link, ID_Tampon);
		SqlDataAdapter^ da = gcnew SqlDataAdapter("SELECT * FROM Client", link);
		DataSet^ ds = gcnew DataSet();
		da->Fill(ds, "Client");
		dataGridView10->DataSource = ds->Tables["Client"]->DefaultView;
		delete ds;
		delete da;
	}
	else {

	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	CL_Client nouvClient(textBox1->Text, textBox2->Text, textBox3->Text, textBox4->Text, textBox5->Text, textBox6->Text, textBox7->Text, dateTimePicker1->Value.ToString("dd/MM/yyyy"));//valeur de gestion en paramètre
	String^ Request = nouvClient.AfficherClient();						 //methode afficherPersonnel renvoie la requete sous forme de String
	SqlDataAdapter^ da = gcnew SqlDataAdapter(Request, link);
	DataSet^ ds = gcnew DataSet();
	da->Fill(ds, "Client");
	dataGridView10->DataSource = ds->Tables["Client"]->DefaultView;
	delete ds;
	delete da;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("Êtes vous sûr ?", "Validation", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
	 if ((!String::IsNullOrWhiteSpace(textBox1->Text)) && (!String::IsNullOrWhiteSpace(textBox2->Text)) && (!String::IsNullOrWhiteSpace(textBox3->Text)) && (!String::IsNullOrWhiteSpace(textBox4->Text))) {
			CL_Client nouvClient(textBox1->Text, textBox2->Text, textBox3->Text, textBox4->Text, textBox5->Text, textBox6->Text, textBox7->Text, dateTimePicker1->Value.ToString("dd/MM/yyyy"));//valeur de gestion en paramètrece(",", "."), richTextBox1->Text, comboBox3->Text);
			nouvClient.ModifierClient(link, ID_Tampon);
			SqlDataAdapter^ da = gcnew SqlDataAdapter("SELECT * FROM Client", link);
			DataSet^ dsS = gcnew DataSet();
			da->Fill(ds, "Client");
			dataGridView10->DataSource = ds->Tables["Client"]->DefaultView;
			delete ds;
			delete da;
			
		}
		
	
	 else {
		 richTextBox1->Text = "La modification de la Facture n'a pas fonctionné";

	 }
		}
	else {

		}
	
		

}
	   void displayDGV(String^ query) {
		   da = gcnew SqlDataAdapter(query, link);
		   ds = gcnew DataSet();
		   da->Fill(ds, "Display");
		   dataGridView10->DataSource = ds->Tables["Display"]->DefaultView;
		   delete da;
		   delete ds;
	   }

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();//fermeture
}
		 private:
			 void CancelClient(void) {
				 this->textBox1->Text = "";
				 this->textBox2->Text = "";
				 this->textBox3->Text = "";
				 this->textBox4->Text = "";
				 this->textBox7->Text = "";
				 this->textBox5->Text = "";
				 this->textBox6->Text = "";
				 
			 }
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	CancelClient();//fonction cancel pour vider les textbox
	displayDGV(retourC());
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
						 //methode afficherPersonnel renvoie la requete sous forme de String
	SqlDataAdapter^ da = gcnew SqlDataAdapter("SELECT * FROM FACTURE WHERE NOM = '" + textBox1->Text + "';", link);
	DataSet^ ds = gcnew DataSet();
	da->Fill(ds, "Facture");
	dataGridView10->DataSource = ds->Tables["Facture"]->DefaultView;
	richTextBox1->Text = "La recherche a été éffectuée";
	delete ds;
	delete da;
}
};

};

