#include <iostream>
using namespace std;

int main(){
    int reponse;
    char lettre;
    cout <<"Entrez le caractere: "<< endl;
    cin >> lettre;
    reponse = int(lettre);

    cout <<"Valeur ASCII de '"<<lettre<<"' est : " << reponse << endl;


    return reponse;
}