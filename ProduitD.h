#ifndef PRODUITD_H
#define PRODUITD_H

#include "Compteur.h"
#include "Produit.h"


class ProduitD : public Produit {
public:
    ProduitD() : Produit("ProduitD") {
        Compteur::ajouterConstructeur();
    }
    ProduitD(const ProduitD& produitD) : Produit(produitD) {
        Compteur::ajouterConstructeurCopie();
    }
    ~ProduitD() {
        Compteur::ajouterDestructeur();
    }
    string getDescription() const override {
        return "Description d'un produit D";
    }
};

#endif