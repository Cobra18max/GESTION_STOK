#include <iostream>
#include <list>

#include "Commande.h"
#include "Produit.h"
#include "Composant.h"
#include "Composant1.h"
#include "Composant2.h"
#include "Composant3.h"
#include "Composant4.h"
#include "Composant5.h"
#include "Entrepot.h"
#include "Fournisseur.h"
#include "Inventaire.h"
#include "ProduitA.h"
#include "ProduitB.h"
#include "ProduitC.h"
#include "ProduitD.h"
#include "ProduitE.h"
#include "BonCommande.h"


void afficherInformation();

void afficherInformation()
{
    cout << endl << endl;
    cout << endl << "-------------------------------" << endl
        << " NB constructeurs : " <<
        Compteur::getNbConstructeurs() << endl
        << " NB constructeurs copie : " <<
        Compteur::getNbConstructeursCopie() << endl
        << " NB destructeurs : " << Compteur::getNbDestructeurs()
        << endl;
    cin.get();
}

void testBonCommande();
int main()
{
    testBonCommande();
    //commerce();
    afficherInformation();
    return 0;
}
void testBonCommande()
{
    int quantites[] = { 1,2,3,4,5 };
    Commande* maCommande = new Commande(1000, quantites);
    BonCommande* bonCommande = new BonCommande(128, maCommande);
    bonCommande->ajouterProduits(5, 0);
    bonCommande->ajouterProduits(4, 1);
    bonCommande->ajouterProduits(3, 2);
    bonCommande->ajouterProduits(2, 3);
    bonCommande->ajouterProduits(1, 4);
    cout << *bonCommande << endl;
    BonCommande bonCommandeCC(*bonCommande);
    cout << bonCommandeCC << endl;
    delete bonCommande;
    delete maCommande;
}