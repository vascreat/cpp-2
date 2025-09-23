#include <iostream>
using namespace std;

class Noeud {
	public:
	    int valeur;
	    Noeud* suivant;
	    
	    // Constructeur pour faciliter la création
	    Noeud(int val) : valeur(val), suivant(nullptr) {}
	    
	    // Destructeur (optionnel, mais bonne pratique)
	    ~Noeud() {}
};

void afficherListe(Noeud* tete);
void ajouterDebut(Noeud*& tete, int valeur);
void ajouterFIn(Noeud*& tete, int valeur);


int main() {
    // TODO: Créer 3 nœuds et les relier
    int valeur1 = 10, valeur2 = 20, valeur3 = 30;
    Noeud *n1, *n2, *n3;

    n1 = new Noeud(valeur1);
    n2 = new Noeud(valeur2);
    n3 = new Noeud(valeur3);

    n1->suivant = n2;
    n2->suivant = n3;
    n3->suivant = nullptr;
        
    ajouterDebut(n1, 5);
    afficherListe(n1);
    ajouterFIn(n1, 40);
    afficherListe(n1);

    return 0;
}

void ajouterFIn(Noeud*& tete, int valeur){
    Noeud* nouveauNoeud = new Noeud(valeur);
    Noeud* courant = tete;
    while(courant->suivant != nullptr){
        cout << "passed :" << courant->valeur << endl;
        courant = courant->suivant;
    }

    if(courant->suivant == nullptr){
        cout << "NULL found :" << courant->valeur << endl;
        courant->suivant = nouveauNoeud;
        cout << "added :" << nouveauNoeud->valeur << endl;
        }
}

void ajouterDebut(Noeud*& tete, int valeur) {
    Noeud* nouveauNoeud = new Noeud(valeur);
    nouveauNoeud->suivant = tete;
    tete = nouveauNoeud;
}


void afficherListe(Noeud* tete) {
    Noeud* courant = tete;
    while (courant != nullptr) {
        cout << courant->valeur << " -> ";
        courant = courant->suivant;
    }
    cout << "NULL" << endl;

}