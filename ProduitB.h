#ifndef PRODUITB_H
#define PRODUITB_H

#include <string>
#include"Produit.h"
#include "Compteur.h"


class ProduitB : public Produit {
public:
    ProduitB() : Produit("ProduitB") {
        Compteur::ajouterConstructeur();
    }
    ProduitB(const ProduitB& produitB) : Produit(produitB) {
        Compteur::ajouterConstructeurCopie();
    }
    ~ProduitB() {
        Compteur::ajouterDestructeur();
    }
    string getDescription() const override {
        return "Description d'un produit B";
    }
};

#endif