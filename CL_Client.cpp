#include "CL_Client.h"

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;

CL_Client::CL_Client(String^ N, String^ P, String^ Adr, String^ CP, String^ Vi, String^ TEL, String^ MAIL, String^ DC, String^ COM) {
	Nom = N;
	Prenom = P;
	Adresse = Adr;
	CodePostal = CP;
	Ville = Vi;
	Telephone = TEL;
	Email = MAIL;
	Date1erAchat = DC;
	Commentaire = COM;
}

//String^ CL_Gestion::AfficherFacture() {
	//String^ Request = "SELECT * FROM Facture WHERE Nom LIKE '" + Nom + "%' AND Adresse LIKE '" + Adresse + "%' AND CodePostal LIKE '" + CodePostal + "%' AND Ville LIKE '" + Ville + "%' AND DateCommande LIKE '" + DateCommande + "%' AND Designation LIKE '" + Designation + "%' AND Quantite LIKE '" + Quantite + "%' AND PrixUnitaire LIKE '" + PrixUnitaire + "%' AND TotalHT LIKE '" + TotalHT + "%' AND TotalTTC LIKE '" + TotalTTC + "%'; ";
	//return Request;
//}
String^ CL_Client::AfficherClient() {//fonction affichage
	String^ Request = "SELECT * FROM Client WHERE NOM LIKE '" + Nom + "%' AND Prenom LIKE '" + Prenom + "%' AND Adresse LIKE '" + Adresse + "%' AND CodePostal LIKE '" + CodePostal + "%' AND Ville LIKE '" + Ville + "%' ";
	return Request;
}
void CL_Client::CreerClient(SqlConnection^ Connect) {//fonction créer 
	SqlCommand^ command = gcnew SqlCommand("INSERT INTO Client (Nom,Prenom, Adresse, CodePostal, Ville,Telephone,Email, Date1erAchat, Commentaire) VALUES ('" + Nom + "', '" + Prenom + "','" + Adresse + "','" + CodePostal + "', '" + Ville + "', '" + Telephone + "', '" + Email + "','" + Date1erAchat + "','" + Commentaire + "')", Connect);
	command->ExecuteNonQuery();

}

void CL_Client::ModifierClient(SqlConnection^ Connect, String^ IDBuffer) {//fonction modifier
	SqlCommand^ command = gcnew SqlCommand("UPDATE Client SET Nom = '" + Nom + "' , Prenom = '" + Prenom + "', Adresse = '" + Adresse + "', CodePostal = '" + CodePostal + "', Ville = '" + Ville + "',Telephone = '" + Telephone + "',Email = '" + Email + "',Date1erAchat = '" + Date1erAchat + "',Commentaire = '" + Commentaire + "' WHERE ID_Client ='" + IDBuffer + "'", Connect);
	command->ExecuteNonQuery();

}
void CL_Client::SupprimerClient(SqlConnection^ Connect, String^ IDBuffer) {//fonction supprimer
	SqlCommand^ command = gcnew SqlCommand("DELETE FROM Client WHERE ID_Client = '" + IDBuffer + "'", Connect);
	command->ExecuteNonQuery();
}
String^ CL_Client::AfficherFactureClient() {//fonction affichage
	String^ Request = "SELECT * FROM Facture WHERE NOM LIKE '" + Nom + "%' AND Prenom LIKE '" + Prenom + "%' ";
	return Request;
}

CL_Client::~CL_Client() {
}