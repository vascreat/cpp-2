#include <iostream>
using namespace std;

int main(){

    int nombre = 0;
    int revnombre = 0;
    int n = 0;
    cout << "Entrer le nombre: " <<endl;
    cin >> nombre;

    n = nombre;
    cout <<n<< endl;
    while (n>0){

        int r = n%10;

        revnombre = (revnombre * 10) + r;
        n = n/10;

    }
    if(nombre == revnombre){
        cout << "Le nombre "<<nombre<<" est un palindrome " << revnombre <<endl;

    } else {
        cout << "Le nombre " << nombre << " n'est pas un palindrome " << revnombre <<endl;
        
    }

    return 0;

}