#include <iostream>
using namespace std;

int main(){

    int arr[] = {10,11,7,8,2,9};
    int trouver = 0;

    cout << "Entrez le nombre a trouver : " << endl;
    cin >> trouver;
    // for (int i=0; i<sizeof(arr)/sizeof(arr[0]);i++){
        // for (int j=i+1; j<sizeof(arr)/sizeof(arr[0]);j++){
            // if(arr[i]>arr[j]){
                // int temp = arr[i];
                // arr[i] = arr[j];
                // arr[j] = temp;
            // }
        // }
    // }

    for(int val : arr){
        cout << val << " ";
        if(val == trouver){
            cout << "\nLe nombre " << trouver << " a ete trouve dans le tableau." << endl;

        }
    }
    if(trouver == 0){
        cout << "Le nombre " << trouver << " n'a pas ete trouve dans le tableau." << endl;
    }

    return 0;
}
