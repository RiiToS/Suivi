#pragma once
using namespace System;

namespace Suivi {
	String^ Relance() {
		//String^ Requete = "SELECT DateCommande FROM Facture WHERE DateCommande = NOW() - 11";
		String^ Requete = "SELECT * FROM Facture WHERE MONTH(DateCommande) - MONTH(getdate()) = 1 "; //REqu�te SQL pour trier les dates d'il y a 1 ans 
			return Requete;
	}

}
