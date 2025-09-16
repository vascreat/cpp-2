#include <iostream>
#include "libfonctions.h"
using namespace std;

void hello(){
    cout <<"Bonjour" << endl;
}

int square (int x){
    return x *x;
}

void change(int &a){
    a=22;
    cout << "adresse de a : "<< &a << endl;
}