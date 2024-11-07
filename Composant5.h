#pragma once
#include<iostream>
#include"Composant.h"
#include"Compteur.h"

class Composant5 :
	public Composant

{

public:
	Composant5(int variation, int qualite, int prix) :Composant("COMPOSANT #5", 10 + variation, qualite, prix) {
		Compteur::ajouterConstructeur();

	}
	Composant5(const Composant5& composant5) : Composant(composant5) {
		Compteur::ajouterConstructeurCopie();
	}
	~Composant5() {
		Compteur::ajouterDestructeur();
	}
};
