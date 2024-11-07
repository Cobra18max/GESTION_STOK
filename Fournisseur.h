#pragma once
#include"Composant.h"
#include"Composant1.h"
#include"Composant2.h"
#include"Composant3.h"
#include"Composant4.h"
#include"Composant5.h"

#include<list>
using namespace std;

class Fournisseur
{
private:
	int quantiteComposants[5];
	Composant1* produireComposant1();
	Composant2* produireComposant2();
	Composant3* produireComposant3();
	Composant4* produireComposant4();
	Composant5* produireComposant5();

public:
	Fournisseur();
	~Fournisseur();
	Fournisseur(const Fournisseur& f);
	list<Composant*> commanderComposant(int idComposant, int quantite);


};

