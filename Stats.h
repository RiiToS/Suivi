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
	/// Description résumée de Stats
	/// </summary>
	public ref class Stats : public System::Windows::Forms::Form
	{
	public:
		Stats(SqlConnection^ connection)
		{
			link = connection;
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Stats()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ Button1;


	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button3;

	protected:

	protected:

	private:
		SqlConnection^ link;
		SqlDataAdapter^ da;
		DataSet^ ds;
	private: System::Windows::Forms::ComboBox^ comboBox3;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::GroupBox^ groupBox4;

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->Button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// Button1
			// 
			this->Button1->Location = System::Drawing::Point(1109, 57);
			this->Button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Button1->Name = L"Button1";
			this->Button1->Size = System::Drawing::Size(153, 54);
			this->Button1->TabIndex = 0;
			this->Button1->Text = L"Déconnexion";
			this->Button1->UseVisualStyleBackColor = true;
			this->Button1->Click += gcnew System::EventHandler(this, &Stats::Button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ActiveBorder;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(325, 57);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(219, 299);
			this->dataGridView1->TabIndex = 3;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->button8);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->comboBox3);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Location = System::Drawing::Point(16, 57);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox1->Size = System::Drawing::Size(280, 299);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Stats";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(8, 161);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 16);
			this->label3->TabIndex = 66;
			this->label3->Text = L"Mois";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(8, 250);
			this->button7->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(155, 28);
			this->button7->TabIndex = 65;
			this->button7->Text = L"Nombre Client";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"01", L"02", L"03", L"04", L"05", L"06", L"07",
					L"08", L"09", L"10", L"11", L"12"
			});
			this->comboBox2->Location = System::Drawing::Point(8, 181);
			this->comboBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(239, 24);
			this->comboBox2->TabIndex = 64;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(8, 214);
			this->button8->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(155, 28);
			this->button8->TabIndex = 63;
			this->button8->Text = L"Nombre Vente";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Stats::button8_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(8, 31);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 16);
			this->label1->TabIndex = 62;
			this->label1->Text = L"Année";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(8, 118);
			this->button4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(155, 28);
			this->button4->TabIndex = 55;
			this->button4->Text = L"Nombre Client";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Stats::button4_Click);
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"2019", L"2020", L"2021", L"2022" });
			this->comboBox3->Location = System::Drawing::Point(8, 49);
			this->comboBox3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(239, 24);
			this->comboBox3->TabIndex = 54;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(8, 81);
			this->button3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(155, 28);
			this->button3->TabIndex = 0;
			this->button3->Text = L"Nombre Vente";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Stats::button3_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->comboBox1);
			this->groupBox2->Controls->Add(this->button6);
			this->groupBox2->Location = System::Drawing::Point(8, 44);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox2->Size = System::Drawing::Size(253, 171);
			this->groupBox2->TabIndex = 63;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Vente";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(9, 118);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(155, 28);
			this->button2->TabIndex = 63;
			this->button2->Text = L"Ajouter";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Stats::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(8, 31);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 16);
			this->label2->TabIndex = 62;
			this->label2->Text = L"Année";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"2019", L"2020", L"2021", L"2022" });
			this->comboBox1->Location = System::Drawing::Point(8, 49);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(239, 24);
			this->comboBox1->TabIndex = 54;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(8, 81);
			this->button6->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(155, 28);
			this->button6->TabIndex = 0;
			this->button6->Text = L"Vente";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Stats::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(9, 81);
			this->button5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(155, 28);
			this->button5->TabIndex = 55;
			this->button5->Text = L"Client";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Stats::button5_Click);
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(306, 386);
			this->chart1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"2020";
			series1->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Date;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Legend = L"Legend1";
			series2->Name = L"2021";
			series3->ChartArea = L"ChartArea1";
			series3->Legend = L"Legend1";
			series3->Name = L"Client";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Series->Add(series3);
			this->chart1->Size = System::Drawing::Size(956, 490);
			this->chart1->TabIndex = 64;
			this->chart1->Text = L"chart1";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button9);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->comboBox4);
			this->groupBox3->Controls->Add(this->button5);
			this->groupBox3->Location = System::Drawing::Point(12, 223);
			this->groupBox3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox3->Size = System::Drawing::Size(253, 171);
			this->groupBox3->TabIndex = 64;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Client";
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(9, 118);
			this->button9->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(155, 28);
			this->button9->TabIndex = 63;
			this->button9->Text = L"Ajouter";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Stats::button9_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(8, 31);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 16);
			this->label4->TabIndex = 62;
			this->label4->Text = L"Année";
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"2019", L"2020", L"2021", L"2022" });
			this->comboBox4->Location = System::Drawing::Point(8, 49);
			this->comboBox4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(239, 24);
			this->comboBox4->TabIndex = 54;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(12, 401);
			this->button10->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(153, 54);
			this->button10->TabIndex = 65;
			this->button10->Text = L"Rénitialiser";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Stats::button10_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->groupBox2);
			this->groupBox4->Controls->Add(this->button10);
			this->groupBox4->Controls->Add(this->groupBox3);
			this->groupBox4->Location = System::Drawing::Point(16, 386);
			this->groupBox4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox4->Size = System::Drawing::Size(283, 490);
			this->groupBox4->TabIndex = 64;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Vente";
			// 
			// Stats
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1328, 931);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->Button1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"Stats";
			this->Text = L"Stats";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->ResumeLayout(false);

		}
		void displayDGV(String^ query) {
			da = gcnew SqlDataAdapter(query, link);
			ds = gcnew DataSet();
			da->Fill(ds, "Display");
			dataGridView1->DataSource = ds->Tables["Display"]->DefaultView;
			delete da;
			delete ds;
		}
#pragma endregion

private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();//fermeture
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	SqlDataAdapter^ da = gcnew SqlDataAdapter("SELECT COUNT(*) FROM Facture WHERE YEAR(DateCommande) = '" + comboBox3->Text + "';", link);
	DataSet^ ds = gcnew DataSet();
	da->Fill(ds, "Facture");
	dataGridView1->DataSource = ds->Tables["Facture"]->DefaultView;
	
	delete ds;
	delete da;
}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	SqlDataAdapter^ da = gcnew SqlDataAdapter("SELECT COUNT(DISTINCT Nom) FROM Facture WHERE YEAR(DateCommande) = '" + comboBox3->Text + "';", link);
	DataSet^ ds = gcnew DataSet();
	da->Fill(ds, "Facture");
	dataGridView1->DataSource = ds->Tables["Facture"]->DefaultView;

	delete ds;
	delete da;
}
private: System::Void areaChart1_DataItemClicked(System::Object^ sender, MindFusion::Charting::HitResult^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->chart1->Series["2020"]->Points->AddXY("Janvier", 15);
	this->chart1->Series["2020"]->Points->AddXY("Février", 14);
	this->chart1->Series["2020"]->Points->AddXY("Mars", 30);
	this->chart1->Series["2020"]->Points->AddXY("Avril", 15);
	this->chart1->Series["2020"]->Points->AddXY("Mai", 6);
	this->chart1->Series["2020"]->Points->AddXY("Juin", 10);
	this->chart1->Series["2020"]->Points->AddXY("Juillet", 14);
	this->chart1->Series["2020"]->Points->AddXY("Août", 17);
	this->chart1->Series["2020"]->Points->AddXY("Septembre", 25);
	this->chart1->Series["2020"]->Points->AddXY("Octobre", 32);
	this->chart1->Series["2020"]->Points->AddXY("Novembre", 11);
	this->chart1->Series["2020"]->Points->AddXY("Décembre", 50);
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	SqlDataAdapter^ da = gcnew SqlDataAdapter("SELECT COUNT(*) FROM Facture WHERE MONTH(DateCommande) = '" + comboBox2->Text +"';", link);
	DataSet^ ds = gcnew DataSet();
	da->Fill(ds, "Facture");
	dataGridView1->DataSource = ds->Tables["Facture"]->DefaultView;

	delete ds;
	delete da;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->chart1->Series["2021"]->Points->AddXY("Janvier", 39);
	this->chart1->Series["2021"]->Points->AddXY("Février", 12);
	this->chart1->Series["2021"]->Points->AddXY("Mars", 0);
	this->chart1->Series["2021"]->Points->AddXY("Avril", 26);
	this->chart1->Series["2021"]->Points->AddXY("Mai", 6);
	this->chart1->Series["2021"]->Points->AddXY("Juin", 10);
	
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->chart1->Series["Client"]->Points->AddXY("2021", 58);

}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	this->chart1->Series["Client"]->Points->AddXY("2020", 158);
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	chart1->Series[0]->Points->Clear();
	chart1->Series[1]->Points->Clear();
	chart1->Series[2]->Points->Clear();



}
};
}
