#include <iostream>
using namespace std;
#include "Forme.h" 
#include <cmath>

class Rectangle : public Forme{
    private:
        float base;
        float hauteur;
    public:
        // Rectangle(float l, float L) : longueur(l), largeur(L) {}
        
        Rectangle(float l, float L){
            this->base = l;
            this->hauteur = L;
        }
        
        float aire() {
             return (base * hauteur)/2; 
        }

        float perimetre() {
             return sqrt(base * base + hauteur * hauteur); 
            }

        ~Rectangle() {
            cout << "Destruction du rectangle" << endl;
        }

        float calculerPerimetre() override {
            return perimetre();
        }

        float calculerAire() override {
            return aire();
        }

         void afficher() override {
            cout << "Nom: " << nom << ", Couleur: " << couleur << ", Base: " << base << ", Hauteur: " << hauteur;
         }


    };