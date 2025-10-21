#include <iostream>
using namespace std;
#include "Forme.h" 

class Cercle : public Forme{
    private:
        float rayon;
    public:
        // Cercle(float r) : longueur(l), largeur(L) {}
        Cercle(float r) {
            this->rayon = r;
        }

        float aire() {
             return 3.14159 * rayon * rayon; 
            }

        float perimetre() {
             return 2 * 3.14159 * rayon;}

        ~Cercle() {
            cout << "Destruction du rectangle" << endl;
        }

         float calculerPerimetre() override {
            return perimetre();
        }

        float calculerAire() override {
            return aire();
        }

        void afficher() override {
            cout << "Nom: " << nom << ", Couleur: " << couleur << ", Rayon: " << rayon;
         }
        
    };