#include <iostream>
#include "libfonctions.h"

using namespace std;





int main(){
    int x=5;
    hello();

    int result = square(x);
    cout <<"le carrer de 5 est : " << result << endl;

    change(x);

    cout << "Apres le changement : " << x << endl;

    return 0;
}

