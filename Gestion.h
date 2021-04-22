#pragma once
#include "CL_Gestion.h"
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
	/// Description résumée de Gestion
	/// </summary>
	public ref class Gestion : public System::Windows::Forms::Form
	{
	public:
		Gestion(SqlConnection^ connection)
		{
			link = connection;
			InitializeComponent();
			da = gcnew SqlDataAdapter("SELECT * FROM Facture", link);
			ds = gcnew DataSet();
			da->Fill(ds, "Facture");
			dataGridView1->DataSource = ds->Tables["Facture"]->DefaultView;
			delete da;
			delete ds;
		}


	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Gestion()
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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;	
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown5;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;










		   /// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		   /// le contenu de cette méthode avec l'éditeur de code.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			   this->button6 = (gcnew System::Windows::Forms::Button());
			   this->button5 = (gcnew System::Windows::Forms::Button());
			   this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			   this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			   this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			   this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			   this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			   this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			   this->label10 = (gcnew System::Windows::Forms::Label());
			   this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			   this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			   this->button4 = (gcnew System::Windows::Forms::Button());
			   this->button3 = (gcnew System::Windows::Forms::Button());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->label7 = (gcnew System::Windows::Forms::Label());
			   this->label8 = (gcnew System::Windows::Forms::Label());
			   this->label9 = (gcnew System::Windows::Forms::Label());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			   this->groupBox1->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // textBox1
			   // 
			   this->textBox1->Location = System::Drawing::Point(6, 38);
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->Size = System::Drawing::Size(243, 20);
			   this->textBox1->TabIndex = 0;
			   // 
			   // textBox2
			   // 
			   this->textBox2->Location = System::Drawing::Point(6, 77);
			   this->textBox2->Name = L"textBox2";
			   this->textBox2->Size = System::Drawing::Size(243, 20);
			   this->textBox2->TabIndex = 1;
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Location = System::Drawing::Point(6, 22);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(29, 13);
			   this->label1->TabIndex = 3;
			   this->label1->Text = L"Nom";
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Location = System::Drawing::Point(6, 61);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(45, 13);
			   this->label2->TabIndex = 4;
			   this->label2->Text = L"Adresse";
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Location = System::Drawing::Point(6, 100);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(64, 13);
			   this->label3->TabIndex = 5;
			   this->label3->Text = L"Code Postal";
			   // 
			   // groupBox1
			   // 
			   this->groupBox1->Controls->Add(this->button6);
			   this->groupBox1->Controls->Add(this->button5);
			   this->groupBox1->Controls->Add(this->textBox3);
			   this->groupBox1->Controls->Add(this->numericUpDown5);
			   this->groupBox1->Controls->Add(this->numericUpDown4);
			   this->groupBox1->Controls->Add(this->numericUpDown3);
			   this->groupBox1->Controls->Add(this->numericUpDown2);
			   this->groupBox1->Controls->Add(this->textBox4);
			   this->groupBox1->Controls->Add(this->label10);
			   this->groupBox1->Controls->Add(this->textBox5);
			   this->groupBox1->Controls->Add(this->dateTimePicker1);
			   this->groupBox1->Controls->Add(this->button4);
			   this->groupBox1->Controls->Add(this->button3);
			   this->groupBox1->Controls->Add(this->button2);
			   this->groupBox1->Controls->Add(this->button1);
			   this->groupBox1->Controls->Add(this->label7);
			   this->groupBox1->Controls->Add(this->label8);
			   this->groupBox1->Controls->Add(this->label9);
			   this->groupBox1->Controls->Add(this->label6);
			   this->groupBox1->Controls->Add(this->label5);
			   this->groupBox1->Controls->Add(this->label4);
			   this->groupBox1->Controls->Add(this->textBox1);
			   this->groupBox1->Controls->Add(this->label3);
			   this->groupBox1->Controls->Add(this->label1);
			   this->groupBox1->Controls->Add(this->label2);
			   this->groupBox1->Controls->Add(this->textBox2);
			   this->groupBox1->Location = System::Drawing::Point(21, 12);
			   this->groupBox1->Name = L"groupBox1";
			   this->groupBox1->Size = System::Drawing::Size(269, 566);
			   this->groupBox1->TabIndex = 6;
			   this->groupBox1->TabStop = false;
			   this->groupBox1->Text = L"Client";
			   // 
			   // button6
			   // 
			   this->button6->Location = System::Drawing::Point(7, 530);
			   this->button6->Name = L"button6";
			   this->button6->Size = System::Drawing::Size(86, 30);
			   this->button6->TabIndex = 40;
			   this->button6->Text = L"Relance";
			   this->button6->UseVisualStyleBackColor = true;
			   this->button6->Click += gcnew System::EventHandler(this, &Gestion::button6_Click);
			   // 
			   // button5
			   // 
			   this->button5->Location = System::Drawing::Point(108, 488);
			   this->button5->Name = L"button5";
			   this->button5->Size = System::Drawing::Size(86, 30);
			   this->button5->TabIndex = 39;
			   this->button5->Text = L"Supprimer";
			   this->button5->UseVisualStyleBackColor = true;
			   this->button5->Click += gcnew System::EventHandler(this, &Gestion::button5_Click);
			   // 
			   // textBox3
			   // 
			   this->textBox3->Location = System::Drawing::Point(6, 116);
			   this->textBox3->Name = L"textBox3";
			   this->textBox3->Size = System::Drawing::Size(243, 20);
			   this->textBox3->TabIndex = 38;
			   // 
			   // numericUpDown5
			   // 
			   this->numericUpDown5->DecimalPlaces = 4;
			   this->numericUpDown5->Location = System::Drawing::Point(6, 403);
			   this->numericUpDown5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			   this->numericUpDown5->Name = L"numericUpDown5";
			   this->numericUpDown5->Size = System::Drawing::Size(242, 20);
			   this->numericUpDown5->TabIndex = 37;
			   // 
			   // numericUpDown4
			   // 
			   this->numericUpDown4->DecimalPlaces = 4;
			   this->numericUpDown4->Location = System::Drawing::Point(5, 355);
			   this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			   this->numericUpDown4->Name = L"numericUpDown4";
			   this->numericUpDown4->Size = System::Drawing::Size(243, 20);
			   this->numericUpDown4->TabIndex = 36;
			   // 
			   // numericUpDown3
			   // 
			   this->numericUpDown3->DecimalPlaces = 4;
			   this->numericUpDown3->Location = System::Drawing::Point(5, 316);
			   this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			   this->numericUpDown3->Name = L"numericUpDown3";
			   this->numericUpDown3->Size = System::Drawing::Size(243, 20);
			   this->numericUpDown3->TabIndex = 35;
			   // 
			   // numericUpDown2
			   // 
			   this->numericUpDown2->Location = System::Drawing::Point(5, 277);
			   this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			   this->numericUpDown2->Name = L"numericUpDown2";
			   this->numericUpDown2->Size = System::Drawing::Size(243, 20);
			   this->numericUpDown2->TabIndex = 34;
			   // 
			   // textBox4
			   // 
			   this->textBox4->Location = System::Drawing::Point(6, 160);
			   this->textBox4->Name = L"textBox4";
			   this->textBox4->Size = System::Drawing::Size(243, 20);
			   this->textBox4->TabIndex = 26;
			   // 
			   // label10
			   // 
			   this->label10->AutoSize = true;
			   this->label10->Location = System::Drawing::Point(6, 139);
			   this->label10->Name = L"label10";
			   this->label10->Size = System::Drawing::Size(26, 13);
			   this->label10->TabIndex = 25;
			   this->label10->Text = L"Ville";
			   this->label10->Click += gcnew System::EventHandler(this, &Gestion::label10_Click);
			   // 
			   // textBox5
			   // 
			   this->textBox5->Location = System::Drawing::Point(5, 238);
			   this->textBox5->Name = L"textBox5";
			   this->textBox5->Size = System::Drawing::Size(243, 20);
			   this->textBox5->TabIndex = 8;
			   // 
			   // dateTimePicker1
			   // 
			   this->dateTimePicker1->Location = System::Drawing::Point(5, 199);
			   this->dateTimePicker1->Name = L"dateTimePicker1";
			   this->dateTimePicker1->Size = System::Drawing::Size(243, 20);
			   this->dateTimePicker1->TabIndex = 24;
			   // 
			   // button4
			   // 
			   this->button4->Location = System::Drawing::Point(108, 530);
			   this->button4->Name = L"button4";
			   this->button4->Size = System::Drawing::Size(86, 30);
			   this->button4->TabIndex = 23;
			   this->button4->Text = L"Annuler";
			   this->button4->UseVisualStyleBackColor = true;
			   this->button4->Click += gcnew System::EventHandler(this, &Gestion::button4_Click);
			   // 
			   // button3
			   // 
			   this->button3->Location = System::Drawing::Point(6, 488);
			   this->button3->Name = L"button3";
			   this->button3->Size = System::Drawing::Size(86, 30);
			   this->button3->TabIndex = 22;
			   this->button3->Text = L"Modifier";
			   this->button3->UseVisualStyleBackColor = true;
			   this->button3->Click += gcnew System::EventHandler(this, &Gestion::button3_Click);
			   // 
			   // button2
			   // 
			   this->button2->Location = System::Drawing::Point(6, 452);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(86, 30);
			   this->button2->TabIndex = 21;
			   this->button2->Text = L"Ajouter";
			   this->button2->UseVisualStyleBackColor = true;
			   this->button2->Click += gcnew System::EventHandler(this, &Gestion::button1_Click);
			   // 
			   // button1
			   // 
			   this->button1->Location = System::Drawing::Point(108, 452);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(86, 30);
			   this->button1->TabIndex = 20;
			   this->button1->Text = L"Recherche";
			   this->button1->UseVisualStyleBackColor = true;
			   this->button1->Click += gcnew System::EventHandler(this, &Gestion::button1_Click_1);
			   // 
			   // label7
			   // 
			   this->label7->AutoSize = true;
			   this->label7->Location = System::Drawing::Point(6, 300);
			   this->label7->Name = L"label7";
			   this->label7->Size = System::Drawing::Size(61, 13);
			   this->label7->TabIndex = 19;
			   this->label7->Text = L"Prix unitaire";
			   // 
			   // label8
			   // 
			   this->label8->AutoSize = true;
			   this->label8->Location = System::Drawing::Point(6, 339);
			   this->label8->Name = L"label8";
			   this->label8->Size = System::Drawing::Size(49, 13);
			   this->label8->TabIndex = 17;
			   this->label8->Text = L"Total HT";
			   // 
			   // label9
			   // 
			   this->label9->AutoSize = true;
			   this->label9->Location = System::Drawing::Point(6, 387);
			   this->label9->Name = L"label9";
			   this->label9->Size = System::Drawing::Size(55, 13);
			   this->label9->TabIndex = 15;
			   this->label9->Text = L"Total TTC";
			   // 
			   // label6
			   // 
			   this->label6->AutoSize = true;
			   this->label6->Location = System::Drawing::Point(6, 261);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(47, 13);
			   this->label6->TabIndex = 11;
			   this->label6->Text = L"Quantité";
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->Location = System::Drawing::Point(4, 222);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(63, 13);
			   this->label5->TabIndex = 9;
			   this->label5->Text = L"Désignation";
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Location = System::Drawing::Point(4, 183);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(100, 13);
			   this->label4->TabIndex = 7;
			   this->label4->Text = L"Date de commande";
			   // 
			   // dataGridView1
			   // 
			   this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->dataGridView1->Location = System::Drawing::Point(331, 34);
			   this->dataGridView1->MultiSelect = false;
			   this->dataGridView1->Name = L"dataGridView1";
			   this->dataGridView1->ReadOnly = true;
			   this->dataGridView1->RowHeadersWidth = 51;
			   this->dataGridView1->RowTemplate->Height = 24;
			   this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			   this->dataGridView1->Size = System::Drawing::Size(1044, 619);
			   this->dataGridView1->TabIndex = 7;
			   this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Gestion::dataGridView1_CellContentClick);
			   // 
			   // Gestion
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(1407, 765);
			   this->Controls->Add(this->dataGridView1);
			   this->Controls->Add(this->groupBox1);
			   this->Name = L"Gestion";
			   this->Text = L"Gestion";
			   this->groupBox1->ResumeLayout(false);
			   this->groupBox1->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			   this->ResumeLayout(false);

		   }
#pragma endregion

	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if((!String::IsNullOrWhiteSpace(textBox1->Text)) && (!String::IsNullOrWhiteSpace(textBox2->Text)) && (!String::IsNullOrWhiteSpace(textBox3->Text)) && (!String::IsNullOrWhiteSpace(textBox4->Text)) && (!String::IsNullOrWhiteSpace(textBox5->Text))) {
			CL_Gestion nouvFact(textBox1->Text, textBox2->Text, textBox3->Text, textBox4->Text, dateTimePicker1->Value.ToString("dd/MM/yyyy"), textBox5->Text, (int)numericUpDown2->Value, (float)numericUpDown3->Value, (float)numericUpDown4->Value, (float)numericUpDown5->Value);
			nouvFact.CreerFacture(link);
			SqlDataAdapter^ da = gcnew SqlDataAdapter("SELECT * FROM Facture", link);
			DataSet^ ds = gcnew DataSet();
			da->Fill(ds, "Facture");
			dataGridView1->DataSource = ds->Tables["Facture"]->DefaultView;
			delete ds;
			delete da;
	}
	else {
		this->Close();
	}
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

		DataGridViewRow^ row = dataGridView1->SelectedRows[0];
		textBox1->Text = row->Cells["Nom"]->Value->ToString();
		textBox2->Text = row->Cells["Adresse"]->Value->ToString();
		textBox3->Text = row->Cells["CodePostal"]->Value->ToString();
		textBox4->Text = row->Cells["Ville"]->Value->ToString();
		textBox5->Text = row->Cells["Designation"]->Value->ToString();
		numericUpDown2->Value = Convert::ToDecimal(row->Cells["Quantite"]->Value);
		numericUpDown3->Value = Convert::ToDecimal(row->Cells["Prixunitaire"]->Value);
		numericUpDown4->Value = Convert::ToDecimal(row->Cells["TotalHT"]->Value);
		numericUpDown5->Value = Convert::ToDecimal(row->Cells["TotalTTC"]->Value);
		dateTimePicker1->Value = DateTime::ParseExact(row->Cells["DateCommande"]->Value->ToString()->Substring(0, 10), "dd/MM/yyyy", Globalization::CultureInfo::InvariantCulture);
		ID_Tampon = row->Cells["ID"]->Value->ToString();
	}
	private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((!String::IsNullOrWhiteSpace(textBox1->Text)) && (!String::IsNullOrWhiteSpace(textBox2->Text)) && (!String::IsNullOrWhiteSpace(textBox3->Text)) && (!String::IsNullOrWhiteSpace(textBox4->Text)) && (!String::IsNullOrWhiteSpace(textBox5->Text))) {
			CL_Gestion nouvFact(textBox1->Text, textBox2->Text, textBox3->Text, textBox4->Text, dateTimePicker1->Value.ToString("dd/MM/yyyy"), textBox5->Text, (int)numericUpDown2->Value, (float)numericUpDown3->Value, (float)numericUpDown4->Value, (float)numericUpDown5->Value);
			nouvFact.ModifierFacture(link, ID_Tampon);
			SqlDataAdapter^ da = gcnew SqlDataAdapter("SELECT * FROM Facture", link);
			DataSet^ ds = gcnew DataSet();
			da->Fill(ds, "Facture");
			dataGridView1->DataSource = ds->Tables["Facture"]->DefaultView;
			delete ds;
			delete da;
		}
		else {
				this->Close();
		}
	
	}


private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	CL_Gestion nouvFact(textBox1->Text, textBox2->Text, textBox3->Text, textBox4->Text, dateTimePicker1->Value.ToString("dd/MM/yyyy"), textBox5->Text, (int)numericUpDown2->Value, (float)numericUpDown3->Value, (float)numericUpDown4->Value, (float)numericUpDown5->Value);
	String^ Request = nouvFact.AfficherFacture();						 //methode afficherPersonnel renvoie la requete sous forme de String
	SqlDataAdapter^ da = gcnew SqlDataAdapter(Request, link);
	DataSet^ ds = gcnew DataSet();
	da->Fill(ds, "Facture");
	dataGridView1->DataSource = ds->Tables["Facture"]->DefaultView;
	delete ds;
	delete da;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	CL_Gestion nouveauPers(textBox1->Text, textBox2->Text, textBox3->Text, textBox4->Text, dateTimePicker1->Value.ToString("dd/MM/yyyy"), textBox5->Text, (int)numericUpDown2->Value, (float)numericUpDown3->Value, (float)numericUpDown4->Value, (float)numericUpDown5->Value);
	nouveauPers.SupprimerFacture(link, ID_Tampon);
	SqlDataAdapter^ da = gcnew SqlDataAdapter("SELECT * FROM Facture", link);
	DataSet^ ds = gcnew DataSet();
	da->Fill(ds, "Facture");
	dataGridView1->DataSource = ds->Tables["Facture"]->DefaultView;
	delete ds;
	delete da;
}

	   void displayDGV(String^ query) {
		   da = gcnew SqlDataAdapter(query, link);
		   ds = gcnew DataSet();
		   da->Fill(ds, "Display");
		   dataGridView1->DataSource = ds->Tables["Display"]->DefaultView;
		   delete da;
		   delete ds;
	   }

private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	displayDGV(Relance());
}
};
}
