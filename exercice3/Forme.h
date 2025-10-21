#include <iostream>
#include <string>

class Forme{
    protected:
        std:: string nom;
        std:: string couleur;
    public:
        Forme();
        
        Forme(const std::string n,const std::string c);
        
        ~Forme();
        
        float calculerPerimetre();
        
        float calculerAire();
        
        void afficher();



};