#ifndef PRODUITA_H
#define PRODUITA_H

#include <string>
#include "Compteur.h"
#include "Produit.h"


class ProduitA : public Produit {
public:
    ProduitA() : Produit("ProduitA") {
        Compteur::ajouterConstructeur();
    }
    ProduitA(const ProduitA& produitA) : Produit(produitA) {
        Compteur::ajouterConstructeurCopie();
    }
    ~ProduitA() {
        Compteur::ajouterDestructeur();
    }
    string getDescription() const override {
        return "Description d'un produit A";
    }
};

#endif