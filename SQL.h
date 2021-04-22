#pragma once
using namespace System;
namespace Suivi {
	String^ Relance() {
		//String^ Requete = "SELECT DateCommande FROM Facture WHERE DateCommande = NOW() - 11";
		String^ Requete = "SELECT * FROM Facture WHERE DateCommande  ";
			return Requete;
	}

}
