#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int trouverVoyelle(char phraseList);
char *removeSpaces(char *str);

int main (){

    int nbConsonne= 0;
    int nbVoyelle = 0;
    string phrase;
    cout << "Entez la phrase : "<< endl;
    getline(cin, phrase);

    phrase = removeSpaces(&phrase[0]);
    transform(phrase.begin(), phrase.end(), phrase.begin(), ::tolower);

    string phraseList(phrase);
    // cout << "Voici :" << phraseList[5] << endl;


    for (int i = 0; i < phrase.size(); i++){
            
        if(phraseList[i] != 0){
            if(trouverVoyelle(phraseList[i]) == 1){
                nbVoyelle++;
            }else{
                nbConsonne++;
            }
        }




    }

    cout << "Le nombre de voyelles est : "<< nbVoyelle << " et voici le nombre de consonnes : " << nbConsonne <<endl;

    return 0;
}

int trouverVoyelle(char phraseList){
    char voyeList[] = {'a','e', 'i', 'o', 'u'};
    int reponse = 0;

        for (int i = 0; i < sizeof(voyeList)/sizeof(voyeList[0]); i++){
            
            if(phraseList == voyeList[i]){
                return 1;
            }
        
        }


    return reponse;
}

char *removeSpaces(char *str) 
{ 
    int i = 0, j = 0; 
    while (str[i]) 
    { 
        if (str[i] != ' ') 
        str[j++] = str[i]; 
        i++; 
    } 
    str[j] = '\0'; 
    return str; 
} 