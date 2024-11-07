#include "Composant.h"
#include <iostream>
#include "Compteur.h"

using namespace std;

Compteur Composant::compteur;


Composant::Composant() {

};


Composant::Composant(const Composant& composant)
	:nom(composant.nom), poids(composant.poids), qualite(composant.qualite), prix(composant.prix) {
	Compteur::ajouterConstructeurCopie();

};



Composant::~Composant() {
	Compteur::ajouterDestructeur();
};



Composant::Composant(string nom, int poids, int qualite, int prix)
	:nom(nom), poids(poids), qualite(qualite), prix(prix) {

	Compteur::ajouterConstructeur();

};

Composant::Composant(string nom, int poids)
	: nom(nom), poids(poids), qualite(0), prix(0) {
	Compteur::ajouterConstructeur();

}

Composant* Composant::clone() const {

	return new Composant(*this);

}

string Composant::getNom() {

	return nom;
}

int Composant::getPoids() {

	if (poids >= 0) {
		this->poids = poids;
	}
	else {
		this->poids = 0;
	}
	return poids;
}

int Composant::getQualite() {
	if (qualite > 0 && qualite >= 100) {
		this->qualite = qualite;

	}
	else {
		this->qualite = 0;

	}
	return qualite;

}


int Composant::getPrix() {
	if (prix > 0) {
		return prix;
	}
	else {
		return 0;
	}
}


Composant::Composant(std::string nom, int poids, int prix)
	: nom(nom), poids(poids), qualite(0), prix(prix) {
	Compteur::ajouterConstructeur();
}
