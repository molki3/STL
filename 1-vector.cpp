#include <bits/stdc++.h>

using namespace std;

// Un vector en una mejora al arreglo, puede tener tamano definido o dinamico, la diferencia es que no es eficiente al momennto de meter
// a la mitad o por delante, para eso estan las listas

int main()
{
    // DECLARACIONN
    vector <int> arr;       //normal
    vector <int> arr1(5);   //con tamano   
    vector <int> arr2(5, 0);//tamano y valor inicial

    // LLENADO DINAMICO
    arr.push_back(4);

    // LLENADO DEFINIDO
    for(int i=0; i<arr1.size(); i++){
        cin>>arr1[i];
    }

}