#include <iostream>
using namespace std;

int main(){

    int choixTemp = 0;
    float temperature = 0;
    float reponse = 0;

    cout <<"=== Convertisseur de temperature ==="<< endl;
    cout <<"=== choisir : ==="<< endl;
    cout <<"=== 1. Celsius vers Fahrenheit ==="<< endl;
    cout <<"=== 2. Fahrenheit vers Celsius ==="<< endl;
    cout <<"=== Convertisseur de temperature ==="<< endl;
    cout <<" voitre choix : "<< endl;
    cin >> choixTemp;
    cout <<"=== Entrez la temperature: ==="<< endl;
    cin >> temperature;

    if(choixTemp == 2 ){
        reponse = (temperature - 32) / 1.8;
        cout << temperature <<" Fahrenheit en Celsius est : " << reponse << endl;
        
    } else {
        reponse = temperature * 1.8 + 32;
        cout << temperature <<" Celsius en Fahrenheit est : " << reponse << endl;
    }

    return reponse;
}