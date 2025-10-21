#include <iostream>
using namespace std;
#include "Forme.h" 

class Rectangle : public Forme{
    private:
        float longueur;
        float largeur;
    public:
        // Rectangle(float l, float L) : longueur(l), largeur(L) {   }


        // Rectangle(const std::string& n, const std::string& c, float lon, float lar): Forme("", ""), longueur(0), largeur(0){

        // }
        
        Rectangle(const std::string& n, const std::string& c, float lon, float lar): Forme(n, c), longueur(lon), largeur(lar){
        }
        
        
        float calculerPerimetre() const {
            return 2 * (longueur + largeur);
        }

        float calculerAire() const {
            return longueur * largeur;
        }

        void afficher() const {
            cout << "Nom: " << nom << ", Couleur: " << couleur << ", longueur: " << longueur << ", largeur: " << largeur;
         }

    };