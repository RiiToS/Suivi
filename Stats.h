#pragma once

namespace Suivi {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Stats
	/// </summary>
	public ref class Stats : public System::Windows::Forms::Form
	{
	public:
		Stats(void)
		{
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
	private: MindFusion::Charting::WinForms::LineChart^ lineChart1;
	private: System::Windows::Forms::Button^ button2;
	private: MindFusion::Charting::WinForms::BarChart3D^ barChart3D1;


















	protected:

	protected:

	private:
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
			this->Button1 = (gcnew System::Windows::Forms::Button());
			this->lineChart1 = (gcnew MindFusion::Charting::WinForms::LineChart());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->barChart3D1 = (gcnew MindFusion::Charting::WinForms::BarChart3D());
			this->SuspendLayout();
			// 
			// Button1
			// 
			this->Button1->Location = System::Drawing::Point(1704, 12);
			this->Button1->Name = L"Button1";
			this->Button1->Size = System::Drawing::Size(115, 44);
			this->Button1->TabIndex = 0;
			this->Button1->Text = L"Déconnexion";
			this->Button1->UseVisualStyleBackColor = true;
			this->Button1->Click += gcnew System::EventHandler(this, &Stats::Button1_Click);
			// 
			// lineChart1
			// 
			this->lineChart1->LegendTitle = L"Legend";
			this->lineChart1->Location = System::Drawing::Point(43, 209);
			this->lineChart1->Name = L"lineChart1";
			this->lineChart1->Padding = System::Windows::Forms::Padding(5);
			this->lineChart1->ShowLegend = true;
			this->lineChart1->Size = System::Drawing::Size(817, 434);
			this->lineChart1->SubtitleFontName = nullptr;
			// this->lineChart1->SubtitleFontSize = nullptr;
			// this->lineChart1->SubtitleFontStyle = nullptr;
			this->lineChart1->TabIndex = 1;
			this->lineChart1->Text = L"lineChart1";
			this->lineChart1->Theme->UniformSeriesFill = (gcnew MindFusion::Drawing::SolidBrush(L"#FF90EE90"));
			this->lineChart1->Theme->UniformSeriesStroke = (gcnew MindFusion::Drawing::SolidBrush(L"#FF000000"));
			this->lineChart1->Theme->UniformSeriesStrokeThickness = 2;
			this->lineChart1->TitleFontName = nullptr;
			// 	this->lineChart1->TitleFontSize = nullptr;
			// 	this->lineChart1->TitleFontStyle = nullptr;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1583, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(115, 44);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Rénitialiser";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// barChart3D1
			// 
			this->barChart3D1->LegendTitle = L"Legend";
			this->barChart3D1->Location = System::Drawing::Point(967, 209);
			this->barChart3D1->Name = L"barChart3D1";
			this->barChart3D1->Padding = System::Windows::Forms::Padding(5);
			this->barChart3D1->ShowLegend = true;
			this->barChart3D1->Size = System::Drawing::Size(785, 434);
			this->barChart3D1->SubtitleFontName = nullptr;
			// this->barChart3D1->SubtitleFontSize = nullptr;
			// this->barChart3D1->SubtitleFontStyle = nullptr;
			this->barChart3D1->TabIndex = 3;
			this->barChart3D1->Text = L"barChart3D1";
			this->barChart3D1->Theme->UniformSeriesFill = (gcnew MindFusion::Drawing::SolidBrush(L"#FF90EE90"));
			this->barChart3D1->Theme->UniformSeriesStroke = (gcnew MindFusion::Drawing::SolidBrush(L"#FF000000"));
			this->barChart3D1->Theme->UniformSeriesStrokeThickness = 2;
			this->barChart3D1->TitleFontName = nullptr;
			// this->barChart3D1->TitleFontSize = nullptr;
			// this->barChart3D1->TitleFontStyle = nullptr;
			// 
			// Stats
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1831, 835);
			this->Controls->Add(this->barChart3D1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->lineChart1);
			this->Controls->Add(this->Button1);
			this->Name = L"Stats";
			this->Text = L"Stats";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void lineChart1_DataItemClicked(System::Object^ sender, MindFusion::Charting::HitResult^ e) {
}
private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();//fermeture
}
};
}
