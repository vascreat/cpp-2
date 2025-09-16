#include <iostream>
using namespace std;
// lexercice 9bis
int main(){
    int arr[] = {1,2,3,4,5}; 
    int reponse;

    for (int i; i<sizeof(arr)/sizeof(arr[0]);i++){
        int y = (sizeof(arr)/sizeof(arr[0])-1)-i;
        int temp = arr[i];
        arr[i] = arr[y];
        arr[y] = temp;
        

    }

    cout << "Le nombre inverser : ";
    for (int i; i<sizeof(arr)/sizeof(arr[0]);i++){
        
        cout << arr[i];

        
    }
    cout <<"" <<endl;


}