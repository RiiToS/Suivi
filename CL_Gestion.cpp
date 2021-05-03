#pragma once
#include "CL_Gestion.h"

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;

CL_Gestion::CL_Gestion(String^ N, String^ P, String^ Adr, String^ CP, String^ Vi, String^ DC, String^ Ty, String^ Mrq, int Qt, String^ PU,String^ TTTC, String^ Com) {
	Nom = N;
	Prenom = P;
	Adresse = Adr;
	CodePostal = CP;
	Ville = Vi;
	DateCommande = DC;
	Marque = Mrq;
	Type = Ty;
	Quantite = Qt;
	Commentaire = Com;
	PrixUnitaire = PU;

	TotalTTC = TTTC;
}

//String^ CL_Gestion::AfficherFacture() {
	//String^ Request = "SELECT * FROM Facture WHERE Nom LIKE '" + Nom + "%' AND Adresse LIKE '" + Adresse + "%' AND CodePostal LIKE '" + CodePostal + "%' AND Ville LIKE '" + Ville + "%' AND DateCommande LIKE '" + DateCommande + "%' AND Designation LIKE '" + Designation + "%' AND Quantite LIKE '" + Quantite + "%' AND PrixUnitaire LIKE '" + PrixUnitaire + "%' AND TotalHT LIKE '" + TotalHT + "%' AND TotalTTC LIKE '" + TotalTTC + "%'; ";
	//return Request;
//}
String^ CL_Gestion::AfficherFacture() {//fonction affichage
	String^ Request = "SELECT * FROM Facture WHERE NOM LIKE '" + Nom + "%' AND Prenom LIKE '" + Prenom + "%' AND Adresse LIKE '" + Adresse + "%' AND CodePostal LIKE '" + CodePostal + "%' AND Ville LIKE '" + Ville + "%' ";
	return Request;
}
void CL_Gestion::CreerFacture(SqlConnection^ Connect) {//fonction créer 
		SqlCommand^ command = gcnew SqlCommand("INSERT INTO Facture (Nom,Prenom, Adresse, CodePostal, Ville, DateCommande, Type, Marque, Quantite, PrixUnitaire, TotalTTC, Commentaire) VALUES ('" + Nom + "', '" + Prenom + "','" + Adresse + "','" + CodePostal + "', '" + Ville + "', '" + DateCommande + "', '" + Type + "', '"+ Marque + "', '"  + Quantite + "', '" + PrixUnitaire + "', '" + TotalTTC +"' , '" + Commentaire + "')", Connect);
		command->ExecuteNonQuery();

}

void CL_Gestion::ModifierFacture(SqlConnection^ Connect, String^ IDBuffer) {//fonction modifier
		SqlCommand^ command = gcnew SqlCommand("UPDATE Facture SET Nom = '" + Nom + "' , Prenom = '" + Prenom + "', Adresse = '" + Adresse + "', CodePostal = '" + CodePostal + "', Ville = '" + Ville + "',DateCommande = '" + DateCommande + "',Type = '" + Type +"',Marque = '" + Marque +  "',Quantite = '" + Quantite + "',PrixUnitaire = '" + PrixUnitaire + "',TotalTTC = '" + TotalTTC + "',Commentaire = '" + Commentaire + "' WHERE ID = '" + IDBuffer + "'", Connect);
		command->ExecuteNonQuery();
	
}
void CL_Gestion::SupprimerFacture(SqlConnection^ Connect, String^ IDBuffer) {//fonction supprimer
	SqlCommand^ command = gcnew SqlCommand("DELETE FROM Facture WHERE ID = '" + IDBuffer + "'", Connect);
	command->ExecuteNonQuery();
}

CL_Gestion::~CL_Gestion() {
}