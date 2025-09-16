#include <iostream>
using namespace std;


int main(){
    int a=0;
    int b=0;
    int c=0;

    cout << "Le nombre le plus grand" << endl;
    cout << "Entrez 3 nombres:" << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    cout << "a="<<a<< " b="<<b<< " c="<<c << endl;

    if (a > b && a > c){
        cout << "Le nombre le plus grand est :" << a << endl;
    } else if(c > a &&c > b){
        cout << "Le nombre le plus grand est :" << c << endl;
    } else{
        cout << "Le nombre le plus grand est :" << b << endl;
    }

}
