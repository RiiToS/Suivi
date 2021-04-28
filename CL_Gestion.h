#pragma once

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;

ref class CL_Gestion
{
private:
	static String^ Nom;
	static String^ Prenom;
	static String^ Adresse;
	static String^ CodePostal;
	static String^ Ville;
	static String^ DateCommande;
	static String^ Marque;
	static String^ Type;
	static int Quantite;
	static String^ PrixUnitaire;
	static String^ TotalTTC;
	static String^ Commentaire;
public:
	CL_Gestion(String^ N, String^ P, String^ Adr, String^ CP, String^ Vi, String^ DC, String^ Ty, String^ Mrq, int Qt, String^ PU,String^ TTTC, String^ Com);
	String^ AfficherFacture();
	void CreerFacture(SqlConnection^ Connect);
	void ModifierFacture(SqlConnection^ Connect, String^ IDBuffer);
	void SupprimerFacture(SqlConnection^ Connect, String^ IDBuffer);
	~CL_Gestion();
};