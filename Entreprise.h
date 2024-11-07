#pragma once
#include"Fournisseur.h"
#include"Entrepot.h"
#include"Inventaire.h"
#include"Produit.h"
#include"ProduitA.h"
#include"ProduitB.h"
#include"ProduitC.h"
#include"ProduitD.h"
#include"ProduitE.h"
#include"Commande.h"
//#include"Reception.h"
//#include"RapportAssuranceQualite.h"

class Entreprise
{
private:
	Fournisseur fournisseur;
	int numeroBonCommande;
	Entrepot entrepot;
	Inventaire inventaire;
	ProduitA* produireProduitA();
	ProduitB* produireProduitB();
	ProduitC* produireProduitC();
	ProduitD* produireProduitD();
	ProduitE* produireProduitE();
	void commanderComposantsFournisseur(int idComposant, int quantiteNecessaire);
	int genererNoCommande();

public:
	BonCommande* traiterCommande(Commande& commande);
	Reception* recupererCommande(BonCommande* bonCommande);
	void validerSatisfaction(RapportAssuranceQualite& aq, Client& client);

};

