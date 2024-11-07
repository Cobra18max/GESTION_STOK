#pragma once
#include "Composant.h"
#include <string>
#include<iostream>
#include<list>

using namespace std;

class Produit :
	public Composant
{
private:
	string nom;
	list<Composant*> composants;
	int calculPoids() const;
	int calculPrix()  const;
	static Compteur compteur;

public:

	void ajouterComposant(Composant* composant);
	Produit(string nom);
	Produit(const  Produit& p);
	virtual ~Produit();
	string getNom() const;
	virtual string getDescription() const;
	int evaluerQualite() const;
	friend ostream& operator<<(ostream& out, const Produit& produit);
	Produit* clone() const override {
		return new Produit(*this);  // Returns a copy of the derived type
	}

};

