#pragma once

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;

ref class CL_Gestion
{
private:
	static String^ Nom;
	static String^ Adresse;
	static String^ CodePostal;
	static String^ Ville;
	static String^ DateCommande;
	static String^ Designation;
	static int Quantite;
	static float PrixUnitaire;
	static float TotalHT;
	static float TotalTTC;
public:
	CL_Gestion(String^ N, String^ Adr, String^ CP, String^ Vi, String^ DC, String^ Dsg, int Qt, float PU, float THT, float TTTC);
	String^ AfficherFacture();
	void CreerFacture(SqlConnection^ Connect);
	void ModifierFacture(SqlConnection^ Connect, String^ IDBuffer);
	void SupprimerFacture(SqlConnection^ Connect, String^ IDBuffer);
	~CL_Gestion();
};