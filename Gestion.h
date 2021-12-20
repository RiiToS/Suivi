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
		String^ ID_Client;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Label^ label9;	

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private: System::Windows::Forms::Label^ label10;
	
	

	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	
	private: System::Windows::Forms::Label^ label11;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;












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
			   this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			   this->button11 = (gcnew System::Windows::Forms::Button());
			   this->button9 = (gcnew System::Windows::Forms::Button());
			   this->button10 = (gcnew System::Windows::Forms::Button());
			   this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			   this->label13 = (gcnew System::Windows::Forms::Label());
			   this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			   this->label8 = (gcnew System::Windows::Forms::Label());
			   this->label11 = (gcnew System::Windows::Forms::Label());
			   this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			   this->label10 = (gcnew System::Windows::Forms::Label());
			   this->label15 = (gcnew System::Windows::Forms::Label());
			   this->button8 = (gcnew System::Windows::Forms::Button());
			   this->label14 = (gcnew System::Windows::Forms::Label());
			   this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			   this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			   this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			   this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			   this->button7 = (gcnew System::Windows::Forms::Button());
			   this->label12 = (gcnew System::Windows::Forms::Label());
			   this->button6 = (gcnew System::Windows::Forms::Button());
			   this->button5 = (gcnew System::Windows::Forms::Button());
			   this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			   this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			   this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			   this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			   this->button4 = (gcnew System::Windows::Forms::Button());
			   this->button3 = (gcnew System::Windows::Forms::Button());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->label7 = (gcnew System::Windows::Forms::Label());
			   this->label9 = (gcnew System::Windows::Forms::Label());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			   this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			   this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			   this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			   this->groupBox1->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			   this->groupBox2->SuspendLayout();
			   this->groupBox3->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // textBox1
			   // 
			   this->textBox1->Location = System::Drawing::Point(6, 38);
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->Size = System::Drawing::Size(207, 22);
			   this->textBox1->TabIndex = 0;
			   // 
			   // textBox2
			   // 
			   this->textBox2->Location = System::Drawing::Point(6, 116);
			   this->textBox2->Name = L"textBox2";
			   this->textBox2->Size = System::Drawing::Size(207, 22);
			   this->textBox2->TabIndex = 2;
			   // 
			   // textBox6
			   // 
			   this->textBox6->Location = System::Drawing::Point(6, 77);
			   this->textBox6->Name = L"textBox6";
			   this->textBox6->Size = System::Drawing::Size(207, 22);
			   this->textBox6->TabIndex = 1;
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Location = System::Drawing::Point(6, 22);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(37, 16);
			   this->label1->TabIndex = 41;
			   this->label1->Text = L"Nom";
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Location = System::Drawing::Point(6, 100);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(59, 16);
			   this->label2->TabIndex = 42;
			   this->label2->Text = L"Adresse";
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Location = System::Drawing::Point(6, 139);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(82, 16);
			   this->label3->TabIndex = 43;
			   this->label3->Text = L"Code Postal";
			   // 
			   // groupBox1
			   // 
			   this->groupBox1->Controls->Add(this->button11);
			   this->groupBox1->Controls->Add(this->button9);
			   this->groupBox1->Controls->Add(this->button10);
			   this->groupBox1->Controls->Add(this->textBox5);
			   this->groupBox1->Controls->Add(this->label13);
			   this->groupBox1->Controls->Add(this->textBox7);
			   this->groupBox1->Controls->Add(this->label8);
			   this->groupBox1->Controls->Add(this->textBox6);
			   this->groupBox1->Controls->Add(this->label11);
			   this->groupBox1->Controls->Add(this->textBox3);
			   this->groupBox1->Controls->Add(this->textBox4);
			   this->groupBox1->Controls->Add(this->label10);
			   this->groupBox1->Controls->Add(this->textBox1);
			   this->groupBox1->Controls->Add(this->label3);
			   this->groupBox1->Controls->Add(this->label1);
			   this->groupBox1->Controls->Add(this->label2);
			   this->groupBox1->Controls->Add(this->textBox2);
			   this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->groupBox1->Location = System::Drawing::Point(1, 12);
			   this->groupBox1->Name = L"groupBox1";
			   this->groupBox1->Size = System::Drawing::Size(228, 388);
			   this->groupBox1->TabIndex = 6;
			   this->groupBox1->TabStop = false;
			   this->groupBox1->Text = L"Client";
			   this->groupBox1->Enter += gcnew System::EventHandler(this, &Gestion::groupBox1_Enter);
			   // 
			   // button11
			   // 
			   this->button11->Location = System::Drawing::Point(11, 352);
			   this->button11->Name = L"button11";
			   this->button11->Size = System::Drawing::Size(95, 30);
			   this->button11->TabIndex = 57;
			   this->button11->Text = L"Annuler";
			   this->button11->UseVisualStyleBackColor = true;
			   this->button11->Click += gcnew System::EventHandler(this, &Gestion::button11_Click);
			   // 
			   // button9
			   // 
			   this->button9->Location = System::Drawing::Point(11, 309);
			   this->button9->Name = L"button9";
			   this->button9->Size = System::Drawing::Size(95, 30);
			   this->button9->TabIndex = 57;
			   this->button9->Text = L"Suivant";
			   this->button9->UseVisualStyleBackColor = true;
			   this->button9->Click += gcnew System::EventHandler(this, &Gestion::button9_Click);
			   // 
			   // button10
			   // 
			   this->button10->Location = System::Drawing::Point(122, 309);
			   this->button10->Name = L"button10";
			   this->button10->Size = System::Drawing::Size(96, 30);
			   this->button10->TabIndex = 58;
			   this->button10->Text = L"Rechercher";
			   this->button10->UseVisualStyleBackColor = true;
			   this->button10->Click += gcnew System::EventHandler(this, &Gestion::button10_Click);
			   // 
			   // textBox5
			   // 
			   this->textBox5->Location = System::Drawing::Point(6, 277);
			   this->textBox5->Name = L"textBox5";
			   this->textBox5->Size = System::Drawing::Size(207, 22);
			   this->textBox5->TabIndex = 52;
			   // 
			   // label13
			   // 
			   this->label13->AutoSize = true;
			   this->label13->Location = System::Drawing::Point(6, 261);
			   this->label13->Name = L"label13";
			   this->label13->Size = System::Drawing::Size(42, 16);
			   this->label13->TabIndex = 51;
			   this->label13->Text = L"Email";
			   // 
			   // textBox7
			   // 
			   this->textBox7->Location = System::Drawing::Point(6, 238);
			   this->textBox7->Name = L"textBox7";
			   this->textBox7->Size = System::Drawing::Size(207, 22);
			   this->textBox7->TabIndex = 50;
			   // 
			   // label8
			   // 
			   this->label8->AutoSize = true;
			   this->label8->Location = System::Drawing::Point(6, 222);
			   this->label8->Name = L"label8";
			   this->label8->Size = System::Drawing::Size(74, 16);
			   this->label8->TabIndex = 49;
			   this->label8->Text = L"Téléphone";
			   // 
			   // label11
			   // 
			   this->label11->AutoSize = true;
			   this->label11->Location = System::Drawing::Point(6, 61);
			   this->label11->Name = L"label11";
			   this->label11->Size = System::Drawing::Size(55, 16);
			   this->label11->TabIndex = 42;
			   this->label11->Text = L"Prénom";
			   // 
			   // textBox3
			   // 
			   this->textBox3->Location = System::Drawing::Point(6, 155);
			   this->textBox3->Name = L"textBox3";
			   this->textBox3->Size = System::Drawing::Size(207, 22);
			   this->textBox3->TabIndex = 4;
			   // 
			   // textBox4
			   // 
			   this->textBox4->Location = System::Drawing::Point(6, 199);
			   this->textBox4->Name = L"textBox4";
			   this->textBox4->Size = System::Drawing::Size(207, 22);
			   this->textBox4->TabIndex = 5;
			   // 
			   // label10
			   // 
			   this->label10->AutoSize = true;
			   this->label10->Location = System::Drawing::Point(6, 178);
			   this->label10->Name = L"label10";
			   this->label10->Size = System::Drawing::Size(34, 16);
			   this->label10->TabIndex = 25;
			   this->label10->Text = L"Ville";
			   this->label10->Click += gcnew System::EventHandler(this, &Gestion::label10_Click);
			   // 
			   // label15
			   // 
			   this->label15->AutoSize = true;
			   this->label15->Location = System::Drawing::Point(6, 308);
			   this->label15->Name = L"label15";
			   this->label15->Size = System::Drawing::Size(88, 16);
			   this->label15->TabIndex = 56;
			   this->label15->Text = L"Commentaire";
			   // 
			   // button8
			   // 
			   this->button8->Location = System::Drawing::Point(6, 35);
			   this->button8->Name = L"button8";
			   this->button8->Size = System::Drawing::Size(96, 30);
			   this->button8->TabIndex = 55;
			   this->button8->Text = L"En cours";
			   this->button8->UseVisualStyleBackColor = true;
			   this->button8->Click += gcnew System::EventHandler(this, &Gestion::button8_Click);
			   // 
			   // label14
			   // 
			   this->label14->AutoSize = true;
			   this->label14->Location = System::Drawing::Point(6, 262);
			   this->label14->Name = L"label14";
			   this->label14->Size = System::Drawing::Size(98, 16);
			   this->label14->TabIndex = 54;
			   this->label14->Text = L"Etat de relance";
			   // 
			   // comboBox3
			   // 
			   this->comboBox3->FormattingEnabled = true;
			   this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"En cours ", L"Terminé" });
			   this->comboBox3->Location = System::Drawing::Point(6, 278);
			   this->comboBox3->Name = L"comboBox3";
			   this->comboBox3->Size = System::Drawing::Size(207, 24);
			   this->comboBox3->TabIndex = 53;
			   // 
			   // richTextBox1
			   // 
			   this->richTextBox1->Location = System::Drawing::Point(6, 336);
			   this->richTextBox1->Name = L"richTextBox1";
			   this->richTextBox1->Size = System::Drawing::Size(207, 96);
			   this->richTextBox1->TabIndex = 47;
			   this->richTextBox1->Text = L"";
			   // 
			   // comboBox2
			   // 
			   this->comboBox2->FormattingEnabled = true;
			   this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				   L"SGA Granulés", L"PIVETEAU Granulés", L"SGA Buches Compressées ",
					   L"PIVETEAU Buches Compressées ", L"Bois 50", L"Bois 33", L"Bois 22"
			   });
			   this->comboBox2->Location = System::Drawing::Point(6, 119);
			   this->comboBox2->Name = L"comboBox2";
			   this->comboBox2->Size = System::Drawing::Size(207, 24);
			   this->comboBox2->TabIndex = 8;
			   // 
			   // comboBox1
			   // 
			   this->comboBox1->FormattingEnabled = true;
			   this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Sacs", L"Palette", L"Stères", L"Fagot" });
			   this->comboBox1->Location = System::Drawing::Point(6, 81);
			   this->comboBox1->Name = L"comboBox1";
			   this->comboBox1->Size = System::Drawing::Size(207, 24);
			   this->comboBox1->TabIndex = 7;
			   // 
			   // button7
			   // 
			   this->button7->Location = System::Drawing::Point(6, 71);
			   this->button7->Name = L"button7";
			   this->button7->Size = System::Drawing::Size(96, 30);
			   this->button7->TabIndex = 21;
			   this->button7->Text = L"Retour";
			   this->button7->UseVisualStyleBackColor = true;
			   this->button7->Click += gcnew System::EventHandler(this, &Gestion::button7_Click);
			   // 
			   // label12
			   // 
			   this->label12->AutoSize = true;
			   this->label12->Location = System::Drawing::Point(6, 65);
			   this->label12->Name = L"label12";
			   this->label12->Size = System::Drawing::Size(54, 16);
			   this->label12->TabIndex = 44;
			   this->label12->Text = L"Marque";
			   // 
			   // button6
			   // 
			   this->button6->Location = System::Drawing::Point(108, 35);
			   this->button6->Name = L"button6";
			   this->button6->Size = System::Drawing::Size(96, 30);
			   this->button6->TabIndex = 40;
			   this->button6->Text = L"Relancer";
			   this->button6->UseVisualStyleBackColor = true;
			   this->button6->Click += gcnew System::EventHandler(this, &Gestion::button6_Click);
			   // 
			   // button5
			   // 
			   this->button5->Location = System::Drawing::Point(9, 487);
			   this->button5->Name = L"button5";
			   this->button5->Size = System::Drawing::Size(95, 30);
			   this->button5->TabIndex = 39;
			   this->button5->Text = L"Supprimer";
			   this->button5->UseVisualStyleBackColor = true;
			   this->button5->Click += gcnew System::EventHandler(this, &Gestion::button5_Click);
			   // 
			   // numericUpDown5
			   // 
			   this->numericUpDown5->DecimalPlaces = 2;
			   this->numericUpDown5->Location = System::Drawing::Point(6, 237);
			   this->numericUpDown5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			   this->numericUpDown5->Name = L"numericUpDown5";
			   this->numericUpDown5->Size = System::Drawing::Size(207, 22);
			   this->numericUpDown5->TabIndex = 11;
			   // 
			   // numericUpDown3
			   // 
			   this->numericUpDown3->DecimalPlaces = 2;
			   this->numericUpDown3->Location = System::Drawing::Point(6, 198);
			   this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			   this->numericUpDown3->Name = L"numericUpDown3";
			   this->numericUpDown3->Size = System::Drawing::Size(207, 22);
			   this->numericUpDown3->TabIndex = 10;
			   this->numericUpDown3->ThousandsSeparator = true;
			   // 
			   // numericUpDown2
			   // 
			   this->numericUpDown2->Location = System::Drawing::Point(6, 159);
			   this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			   this->numericUpDown2->Name = L"numericUpDown2";
			   this->numericUpDown2->Size = System::Drawing::Size(207, 22);
			   this->numericUpDown2->TabIndex = 9;
			   // 
			   // dateTimePicker1
			   // 
			   this->dateTimePicker1->Location = System::Drawing::Point(6, 42);
			   this->dateTimePicker1->Name = L"dateTimePicker1";
			   this->dateTimePicker1->Size = System::Drawing::Size(207, 22);
			   this->dateTimePicker1->TabIndex = 6;
			   // 
			   // button4
			   // 
			   this->button4->Location = System::Drawing::Point(109, 71);
			   this->button4->Name = L"button4";
			   this->button4->Size = System::Drawing::Size(95, 30);
			   this->button4->TabIndex = 23;
			   this->button4->Text = L"Déconnexion";
			   this->button4->UseVisualStyleBackColor = true;
			   this->button4->Click += gcnew System::EventHandler(this, &Gestion::button4_Click);
			   // 
			   // button3
			   // 
			   this->button3->Location = System::Drawing::Point(118, 451);
			   this->button3->Name = L"button3";
			   this->button3->Size = System::Drawing::Size(95, 30);
			   this->button3->TabIndex = 22;
			   this->button3->Text = L"Modifier";
			   this->button3->UseVisualStyleBackColor = true;
			   this->button3->Click += gcnew System::EventHandler(this, &Gestion::button3_Click);
			   // 
			   // button2
			   // 
			   this->button2->Location = System::Drawing::Point(9, 451);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(95, 30);
			   this->button2->TabIndex = 20;
			   this->button2->Text = L"Ajouter";
			   this->button2->UseVisualStyleBackColor = true;
			   this->button2->Click += gcnew System::EventHandler(this, &Gestion::button1_Click);
			   // 
			   // label7
			   // 
			   this->label7->AutoSize = true;
			   this->label7->Location = System::Drawing::Point(6, 182);
			   this->label7->Name = L"label7";
			   this->label7->Size = System::Drawing::Size(76, 16);
			   this->label7->TabIndex = 19;
			   this->label7->Text = L"Prix unitaire";
			   // 
			   // label9
			   // 
			   this->label9->AutoSize = true;
			   this->label9->Location = System::Drawing::Point(6, 221);
			   this->label9->Name = L"label9";
			   this->label9->Size = System::Drawing::Size(69, 16);
			   this->label9->TabIndex = 15;
			   this->label9->Text = L"Total TTC";
			   // 
			   // label6
			   // 
			   this->label6->AutoSize = true;
			   this->label6->Location = System::Drawing::Point(6, 143);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(57, 16);
			   this->label6->TabIndex = 11;
			   this->label6->Text = L"Quantité";
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->Location = System::Drawing::Point(6, 103);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(40, 16);
			   this->label5->TabIndex = 9;
			   this->label5->Text = L"Type";
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Location = System::Drawing::Point(6, 26);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(127, 16);
			   this->label4->TabIndex = 7;
			   this->label4->Text = L"Date de commande";
			   // 
			   // dataGridView1
			   // 
			   this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->dataGridView1->Location = System::Drawing::Point(505, 18);
			   this->dataGridView1->MultiSelect = false;
			   this->dataGridView1->Name = L"dataGridView1";
			   this->dataGridView1->ReadOnly = true;
			   this->dataGridView1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Sunken;
			   this->dataGridView1->RowHeadersWidth = 51;
			   this->dataGridView1->RowTemplate->Height = 48;
			   this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			   this->dataGridView1->Size = System::Drawing::Size(1398, 866);
			   this->dataGridView1->TabIndex = 7;
			   this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Gestion::dataGridView1_CellContentClick);
			   // 
			   // richTextBox2
			   // 
			   this->richTextBox2->Location = System::Drawing::Point(12, 890);
			   this->richTextBox2->Name = L"richTextBox2";
			   this->richTextBox2->Size = System::Drawing::Size(1891, 35);
			   this->richTextBox2->TabIndex = 8;
			   this->richTextBox2->Text = L"";
			   // 
			   // groupBox2
			   // 
			   this->groupBox2->Controls->Add(this->label4);
			   this->groupBox2->Controls->Add(this->label15);
			   this->groupBox2->Controls->Add(this->label12);
			   this->groupBox2->Controls->Add(this->numericUpDown5);
			   this->groupBox2->Controls->Add(this->numericUpDown3);
			   this->groupBox2->Controls->Add(this->label14);
			   this->groupBox2->Controls->Add(this->comboBox1);
			   this->groupBox2->Controls->Add(this->numericUpDown2);
			   this->groupBox2->Controls->Add(this->comboBox3);
			   this->groupBox2->Controls->Add(this->comboBox2);
			   this->groupBox2->Controls->Add(this->dateTimePicker1);
			   this->groupBox2->Controls->Add(this->richTextBox1);
			   this->groupBox2->Controls->Add(this->label7);
			   this->groupBox2->Controls->Add(this->label5);
			   this->groupBox2->Controls->Add(this->button2);
			   this->groupBox2->Controls->Add(this->button5);
			   this->groupBox2->Controls->Add(this->label9);
			   this->groupBox2->Controls->Add(this->label6);
			   this->groupBox2->Controls->Add(this->button3);
			   this->groupBox2->Enabled = false;
			   this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->groupBox2->Location = System::Drawing::Point(261, 13);
			   this->groupBox2->Name = L"groupBox2";
			   this->groupBox2->Size = System::Drawing::Size(228, 557);
			   this->groupBox2->TabIndex = 56;
			   this->groupBox2->TabStop = false;
			   this->groupBox2->Text = L"Commande";
			   this->groupBox2->Enter += gcnew System::EventHandler(this, &Gestion::groupBox2_Enter);
			   // 
			   // groupBox3
			   // 
			   this->groupBox3->Controls->Add(this->button8);
			   this->groupBox3->Controls->Add(this->button4);
			   this->groupBox3->Controls->Add(this->button7);
			   this->groupBox3->Controls->Add(this->button6);
			   this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->groupBox3->Location = System::Drawing::Point(12, 755);
			   this->groupBox3->Name = L"groupBox3";
			   this->groupBox3->Size = System::Drawing::Size(228, 118);
			   this->groupBox3->TabIndex = 57;
			   this->groupBox3->TabStop = false;
			   this->groupBox3->Text = L"Menu";
			   // 
			   // Gestion
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::SystemColors::Control;
			   this->ClientSize = System::Drawing::Size(1915, 937);
			   this->Controls->Add(this->groupBox3);
			   this->Controls->Add(this->groupBox2);
			   this->Controls->Add(this->richTextBox2);
			   this->Controls->Add(this->dataGridView1);
			   this->Controls->Add(this->groupBox1);
			   this->Name = L"Gestion";
			   this->Text = L"Gestion";
			   this->groupBox1->ResumeLayout(false);
			   this->groupBox1->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			   this->groupBox2->ResumeLayout(false);
			   this->groupBox2->PerformLayout();
			   this->groupBox3->ResumeLayout(false);
			   this->ResumeLayout(false);

		   }
#pragma endregion
		   private:
			   void CancelFacture(void) {
				   this->textBox1->Text = "";
				   this->textBox2->Text = "";
				   this->textBox3->Text = "";
				   this->textBox4->Text = "";
				   this->textBox7->Text = "";
				   this->textBox5->Text = "";
				   this->comboBox1->Text = "";
				   this->textBox6->Text = "";
				   this->comboBox2->Text = "";
				   this->numericUpDown2->Value = 0;
				   this->numericUpDown3->Value = 0;
				   this->numericUpDown5->Value = 0;
				   this->richTextBox1->Text = "";
				   this->richTextBox2->Text = "";
				   this->comboBox3->Text = "";
			   }
	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if((!String::IsNullOrWhiteSpace(textBox1->Text)) && (!String::IsNullOrWhiteSpace(textBox2->Text)) && (!String::IsNullOrWhiteSpace(textBox3->Text)) && (!String::IsNullOrWhiteSpace(textBox4->Text)) && (!String::IsNullOrWhiteSpace(comboBox1->Text))) {
			CL_Gestion nouvFact(textBox1->Text, textBox6->Text, textBox2->Text, textBox3->Text, textBox4->Text,textBox7->Text, textBox5->Text, dateTimePicker1->Value.ToString("dd/MM/yyyy"), comboBox1->Text, comboBox2->Text, (int)numericUpDown2->Value, numericUpDown3->Text->Replace(",", "."),  numericUpDown5->Text->Replace(",", "."), richTextBox1->Text, comboBox3->Text);//valeur de gestion en paramètre
			nouvFact.CreerFacture(link);
			SqlDataAdapter^ da = gcnew SqlDataAdapter("SELECT * FROM Facture", link);//selection de la table de la BDD
			DataSet^ ds = gcnew DataSet();
			da->Fill(ds, "Facture");
			dataGridView1->DataSource = ds->Tables["Facture"]->DefaultView;//affichage gridview 
			delete ds;//destruction constructeur
			delete da;
			richTextBox2->Text = "L'ajout de la Facture a fonctionné";
			this->textBox1->Text = "";
			this->textBox2->Text = "";
			this->textBox3->Text = "";
			this->textBox4->Text = "";
			this->textBox7->Text = "";
			this->textBox7->Text = "";
			this->comboBox1->Text = "";
			this->textBox6->Text = "";
			this->comboBox2->Text = "";
			this->numericUpDown2->Value = 0;
			this->numericUpDown3->Value = 0;
			this->numericUpDown5->Value = 0;
			this->richTextBox1->Text = "";
			this->comboBox3->Text = "";
			
	}
	else {
		richTextBox2->Text = "L'ajout de la Facture n'a pas marché, veuillez remplir tous les champs";
	
	}
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

		DataGridViewRow^ row = dataGridView1->SelectedRows[0];//configuration du datagridview et de son affichage
		if (groupBox1->Enabled == true) {
			textBox1->Text = row->Cells["Nom"]->Value->ToString();
			textBox6->Text = row->Cells["Prenom"]->Value->ToString();
			textBox2->Text = row->Cells["Adresse"]->Value->ToString();
			textBox3->Text = row->Cells["CodePostal"]->Value->ToString();
			textBox4->Text = row->Cells["Ville"]->Value->ToString();
			textBox7->Text = row->Cells["Telephone"]->Value->ToString();
			textBox5->Text = row->Cells["Email"]->Value->ToString();
		//	ID_Client = row->Cells["ID_Client"]->Value->ToString();
			button9->Enabled = true;
			button11->Enabled = true;
		
		}
		else if (groupBox2->Enabled) {
			
			comboBox2->Text = row->Cells["Marque"]->Value->ToString();
			numericUpDown2->Value = Convert::ToDecimal(row->Cells["Quantite"]->Value);
			numericUpDown3->Value = Convert::ToDecimal(row->Cells["Prixunitaire"]->Value);
			numericUpDown5->Value = Convert::ToDecimal(row->Cells["TotalTTC"]->Value);
			dateTimePicker1->Value = DateTime::ParseExact(row->Cells["DateCommande"]->Value->ToString()->Substring(0, 10), "dd/MM/yyyy", Globalization::CultureInfo::InvariantCulture);
			ID_Tampon = row->Cells["ID"]->Value->ToString();
			richTextBox1->Text = row->Cells["Commentaire"]->Value->ToString();
			comboBox3->Text = row->Cells["Etat"]->Value->ToString();
			groupBox1->Enabled = true;
			groupBox2->Enabled = true;
		}
	}
	private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();//fermeture
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Êtes vous sûr ?", "Validation", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
		if ((!String::IsNullOrWhiteSpace(textBox1->Text)) && (!String::IsNullOrWhiteSpace(textBox2->Text)) && (!String::IsNullOrWhiteSpace(textBox3->Text)) && (!String::IsNullOrWhiteSpace(textBox4->Text)) && (!String::IsNullOrWhiteSpace(comboBox1->Text))) {
			CL_Gestion nouvFact(textBox1->Text, textBox6->Text, textBox2->Text, textBox3->Text, textBox4->Text, textBox7->Text, textBox5->Text, dateTimePicker1->Value.ToString("dd/MM/yyyy"), comboBox1->Text, comboBox2->Text, (int)numericUpDown2->Value, numericUpDown3->Text->Replace(",", "."),  numericUpDown5->Text->Replace(",", "."), richTextBox1->Text,comboBox3->Text);
			nouvFact.ModifierFacture(link, ID_Tampon);
			SqlDataAdapter^ da = gcnew SqlDataAdapter("SELECT * FROM Facture", link);
			DataSet^ ds = gcnew DataSet();
			da->Fill(ds, "Facture");
			dataGridView1->DataSource = ds->Tables["Facture"]->DefaultView;
			delete ds;
			delete da;
			richTextBox2->Text = "La modification de la Facture a fonctionné";
			this->textBox1->Text = "";
			this->textBox2->Text = "";
			this->textBox3->Text = "";
			this->textBox4->Text = "";
			this->textBox7->Text = "";
			this->textBox5->Text = "";
			this->comboBox1->Text = "";
			this->textBox6->Text = "";
			this->comboBox2->Text = "";
			this->numericUpDown2->Value = 0;
			this->numericUpDown3->Value = 0;
			this->numericUpDown5->Value = 0;
			this->richTextBox1->Text = "";
			this->comboBox3->Text = "";
		}
		else {
			richTextBox2->Text = "La modification de la Facture n'a pas fonctionné";
			
		}
		}
		else{

		}
	
	
	}

private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	CL_Gestion nouvFact(textBox1->Text, textBox6->Text, textBox2->Text, textBox3->Text, textBox4->Text, textBox7->Text, textBox5->Text, dateTimePicker1->Value.ToString("dd/MM/yyyy"), comboBox1->Text, comboBox2->Text, (int)numericUpDown2->Value, numericUpDown3->Text->Replace(",", "."), numericUpDown5->Text->Replace(",", "."), richTextBox1->Text,comboBox3->Text);
	String^ Request = nouvFact.AfficherFacture();						 //methode afficherPersonnel renvoie la requete sous forme de String
	SqlDataAdapter^ da = gcnew SqlDataAdapter(Request, link);
	DataSet^ ds = gcnew DataSet();
	da->Fill(ds, "Facture");
	dataGridView1->DataSource = ds->Tables["Facture"]->DefaultView;
	richTextBox2->Text = "La recherche a été éffectuée";
	delete ds;
	delete da;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	CL_Gestion nouveauPers(textBox1->Text, textBox2->Text, textBox3->Text, textBox4->Text, textBox7->Text, textBox5->Text, dateTimePicker1->Value.ToString("dd/MM/yyyy"), comboBox1->Text, textBox6->Text, comboBox2->Text, (int)numericUpDown2->Value, numericUpDown3->Text->Replace(",", "."), numericUpDown5->Text->Replace(",", "."), richTextBox1->Text, comboBox3->Text);
	if (MessageBox::Show("Êtes vous sûr ?", "Validation", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
	nouveauPers.SupprimerFacture(link, ID_Tampon);
	SqlDataAdapter^ da = gcnew SqlDataAdapter("SELECT * FROM Facture", link);
	DataSet^ ds = gcnew DataSet();
	da->Fill(ds, "Facture");
	dataGridView1->DataSource = ds->Tables["Facture"]->DefaultView;
	delete ds;
	delete da;
	}
	else {
		
	}
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
	displayDGV(Relance());//fonction pour afficher la requête SQL
}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	CancelFacture();//fonction cancel pour vider les textbox
	groupBox1->Enabled = true;
	groupBox2->Enabled = true;
	displayDGV(retour());
	
	
}


private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	displayDGV(Encours());
}
private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	da = gcnew SqlDataAdapter("SELECT * FROM Client WHERE Nom LIKE '" + textBox1->Text + "%' AND Prenom LIKE '" + textBox2->Text + "%';", link);
	ds = gcnew DataSet();
	da->Fill(ds, "Client");
	dataGridView1->DataSource = ds->Tables["Client"]->DefaultView;
	delete da;
	delete ds;
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	groupBox1->Enabled = false;
	groupBox2->Enabled = true;
	da = gcnew SqlDataAdapter("SELECT * FROM Facture WHERE Nom LIKE '" + textBox1->Text +"'", link);
	ds = gcnew DataSet();
	da->Fill(ds, "Facture");
	dataGridView1->DataSource = ds->Tables["Facture"]->DefaultView;
	delete da;
	delete ds;
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text = "";
	this->textBox2->Text = "";
	this->textBox3->Text = "";
	this->textBox4->Text = "";
	this->textBox5->Text = "";
	this->textBox6->Text = "";
	this->textBox7->Text = "";
}
};
}
