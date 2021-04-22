#pragma once
#include "CL_Gestion.h"

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;

CL_Gestion::CL_Gestion(String^ N, String^ Adr, String^ CP, String^ Vi, String^ DC, String^ Dsg, int Qt, float PU, float THT, float TTTC) {
	Nom = N;
	Adresse = Adr;
	CodePostal = CP;
	Ville = Vi;
	DateCommande = DC;
	Designation = Dsg;
	Quantite = Qt;
	PrixUnitaire = PU;
	TotalHT = THT;
	TotalTTC = TTTC;
}

//String^ CL_Gestion::AfficherFacture() {
	//String^ Request = "SELECT * FROM Facture WHERE Nom LIKE '" + Nom + "%' AND Adresse LIKE '" + Adresse + "%' AND CodePostal LIKE '" + CodePostal + "%' AND Ville LIKE '" + Ville + "%' AND DateCommande LIKE '" + DateCommande + "%' AND Designation LIKE '" + Designation + "%' AND Quantite LIKE '" + Quantite + "%' AND PrixUnitaire LIKE '" + PrixUnitaire + "%' AND TotalHT LIKE '" + TotalHT + "%' AND TotalTTC LIKE '" + TotalTTC + "%'; ";
	//return Request;
//}
String^ CL_Gestion::AfficherFacture() {
	String^ Request = "SELECT * FROM Facture WHERE NOM LIKE '" + Nom + "%' AND Adresse LIKE '" + Adresse + "%' AND CodePostal LIKE '" + CodePostal + "%' AND Ville LIKE '" + Ville + "%' ";
	return Request;
}
void CL_Gestion::CreerFacture(SqlConnection^ Connect) {
		SqlCommand^ command = gcnew SqlCommand("INSERT INTO Facture (Nom, Adresse, CodePostal, Ville, DateCommande, Designation, Quantite, PrixUnitaire, TotalHT, TotalTTC) VALUES ('" + Nom + "', '" + Adresse + "','" + CodePostal + "', '" + Ville + "', '" + DateCommande + "', '" + Designation + "', '" + Quantite + "', '" + PrixUnitaire + "', '" + TotalHT + "', '" + TotalTTC +"')", Connect);
		command->ExecuteNonQuery();

}

void CL_Gestion::ModifierFacture(SqlConnection^ Connect, String^ IDBuffer) {
		SqlCommand^ command = gcnew SqlCommand("UPDATE Facture SET Nom = '" + Nom + "', Adresse = '" + Adresse + "', CodePostal = '" + CodePostal + "', Ville = '" + Ville + "',DateCommande = '" + DateCommande + "',Designation = '" + Designation + "',Quantite = '" + Quantite + "',PrixUnitaire = '" + PrixUnitaire + "',TotalHT = '" + TotalHT + "',TotalTTC = '" + TotalTTC + "' WHERE ID = '" + IDBuffer + "'", Connect);
		command->ExecuteNonQuery();
	
}
void CL_Gestion::SupprimerFacture(SqlConnection^ Connect, String^ IDBuffer) {
	SqlCommand^ command = gcnew SqlCommand("DELETE FROM Facture WHERE ID = '" + IDBuffer + "'", Connect);
	command->ExecuteNonQuery();
}

CL_Gestion::~CL_Gestion() {
}