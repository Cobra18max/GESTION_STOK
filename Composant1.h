#pragma once
#include "Composant.h"
#include "Compteur.h"


class Composant1 : public Composant {
private:
    static Compteur compteur;

public:
    Composant1(int qualite, int prix) : Composant("COMPOSANT #1", 10, qualite, 45) {
        compteur.ajouterConstructeur();
    }
    Composant1(const Composant1& composant1) : Composant(composant1) {
        compteur.ajouterConstructeurCopie();
    }
    ~Composant1() {
        compteur.ajouterDestructeur();
    }
};