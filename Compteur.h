#pragma once
#include<string>
using namespace std;

class Compteur {
private:
    static int Constructeur;
    static int ConstructeurCopie;
    static int Destructeur;

public:
    static void ajouterConstructeur();
    static void ajouterConstructeurCopie();
    static void ajouterDestructeur();
    static int getNbConstructeurs();
    static int getNbConstructeursCopie();
    static int getNbDestructeurs();
    Compteur() = default;
    virtual ~Compteur() = default;
};