#pragma once
#include<iostream>
#include"Composant.h"
#include"Compteur.h"

class Composant3 :
	public Composant

{

public:

	Composant3(const Composant3& composant3) : Composant(composant3) {
		Compteur::ajouterConstructeurCopie();
	}
	Composant3(int prix) :Composant("COMPOSANT #3", 12, 100, prix) {
		Compteur::ajouterConstructeur();

	}
	~Composant3() {
		Compteur::ajouterDestructeur();
	}
};
