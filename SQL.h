#pragma once

using namespace System;

namespace Suivi {
	String^ Relance() {
		//String^ Requete = "SELECT DateCommande FROM Facture WHERE DateCommande = NOW() - 11";
		String^ Requete = "SELECT * FROM Facture WHERE MONTH(DateCommande) - MONTH(getdate()) = 1 "; //REqu�te SQL pour trier les dates d'il y a 1 ans 
			return Requete;
	}
	String^ Encours() {
		//String^ Requete = "SELECT DateCommande FROM Facture WHERE DateCommande = NOW() - 11";
		String^ Requete = "SELECT * FROM Facture WHERE Etat = 'En cours' "; //REqu�te SQL pour trier les dates d'il y a 1 ans 
		return Requete;
	}
	String^ retour() {
		//String^ Requete = "SELECT DateCommande FROM Facture WHERE DateCommande = NOW() - 11";
		String^ Requete = "SELECT * FROM Facture  "; //REqu�te SQL pour trier les dates d'il y a 1 ans 
		return Requete;
	}
	String^ retourC() {
		//String^ Requete = "SELECT DateCommande FROM Facture WHERE DateCommande = NOW() - 11";
		String^ Requete = "SELECT * FROM Client  "; //REqu�te SQL pour trier les dates d'il y a 1 ans 
		return Requete;
	}
	String^ NbClient() {
		String^ Requete = "SELECT SUM(I) From Client WHERE YEAR(Date1erCommande) = '2019'";
		return Requete;
	}
}
