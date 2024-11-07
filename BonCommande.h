#pragma once
#include<string>
#include"Produit.h"
#include"Composant.h"

using namespace std;

class BonCommande
{
public:
    BonCommande(idBonCommande, Commande* commande);
    BonCommande(const Entrepot& bonCommande);
    void ajouterProduits(int quantite, int id);
    int getQuantite(int id);
    int getIdBonCommande()
        ~BonCommande();
    void initialiser();

private:
    int idBonCommande;
    Commande* commande;
};

ostream& operator<<(ostream& os, const BonCommande& bonCommande);