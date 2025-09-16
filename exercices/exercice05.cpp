#include <iostream>
using namespace std;

int main() {

    // int arr1[] = {5, 8, 3}; 
    // int arr2[] = {5, 8, 11, 2};
    
    int arr1[] = {1, 4, 8}; 
    int arr2[] = {1, 4, 8}; 
    
    bool isegal = false;

    cout <<sizeof(arr1)/sizeof(arr1[0])<< endl;
    
    if(sizeof(arr1)/sizeof(arr1[0]) == sizeof(arr2)/sizeof(arr2[0])){
        
        for(int i = 0; i < sizeof(arr1)/sizeof(arr1[0]); i++){
            if(arr1[i] == arr2[i]){
                isegal = true;
            } else {
                isegal = false;
            }
        }

    } else {

        cout <<"Les tableau ne sont pas egale."<< endl;
    }

    if(isegal == true){
        cout <<"Les tableau sont egale."<< endl;
    }
    return 0;
}
