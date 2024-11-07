#pragma once
#include"Composant.h"

#include<list>
using namespace std;


class Entrepot
{
private:
	list<Composant*> composants[5];

public:
	Entrepot();
	Entrepot(const Entrepot&);
	~Entrepot();
	int getQuantiteComposants(int id);
	Composant* recupererComposant(int id);
	void ajouterComposant(Composant* composant, int id);
	void ajouterComposants(list<Composant*> listeComposants, int id);


};

