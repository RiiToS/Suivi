
using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;

ref class CL_Client
{
private:
	static String^ Nom;
	static String^ Prenom;
	static String^ Adresse;
	static String^ CodePostal;
	static String^ Ville;
	static String^ Telephone;
	static String^ Email;
	static String^ Date1erAchat;
	static String^ Commentaire;
public:
	CL_Client(String^ N, String^ P, String^ Adr, String^ CP, String^ Vi, String^ TEL, String^ MAIL, String^ DC, String^ COM);
	String^ AfficherClient();
	String^ AfficherFactureClient();
	void CreerClient(SqlConnection^ Connect);
	void ModifierClient(SqlConnection^ Connect, String^ IDBuffer);
	void SupprimerClient(SqlConnection^ Connect, String^ IDBuffer);
	~CL_Client();
};
