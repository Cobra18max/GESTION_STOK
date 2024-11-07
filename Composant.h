#pragma once
#include"Compteur.h"
#include <string>
#include <iostream>

using namespace std;

class Composant
{
private:
	string nom;
	int poids;
	int qualite;
	int prix;
	static Compteur compteur;
protected:
Composant(string nom, int poids, int qualite, int prix);
public:

	Composant();
	Composant(string nom, int poids);
	Composant(string nom, int poids, int prix);
	Composant(const Composant& c);
	string getNom();
	int getPoids();
	int getQualite();
	int getPrix();
	virtual ~Composant();
	virtual Composant* clone() const;

};
