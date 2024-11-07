#pragma once
#include <string>
#include<iostream>
#include "Produit.h"
#include"ProduitA.h"
#include"ProduitB.h"
#include"ProduitC.h"
#include"ProduitD.h"
#include"ProduitE.h"
#include<list>
using namespace std;

class Inventaire
{
private:
	list<Produit*> produits[5];
	void ajouterProduit(Produit* produit, int idProduit);
	static Compteur compteur;

public:
	Inventaire();
	~Inventaire();
	Inventaire(const Inventaire& inventaire);
	void ajouterProduit(ProduitA* produit);
	void ajouterProduit(ProduitB* produit);
	void ajouterProduit(ProduitC* produit);
	void ajouterProduit(ProduitD* produit);
	void ajouterProduit(ProduitE* produit);
	Produit* recupererProduit(int idProduit);
	virtual Inventaire* clone() const;


};

