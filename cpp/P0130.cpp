#include <bits/stdc++.h>
using namespace std;

int main(){

    int num;
    cin >> num;

    vector <int> lista;

    for (int i=0; i < num; i++){
        int valor;
        cin >> valor;
        lista.push_back(valor);
    }

    int maior=lista[0];
    int menor=lista[0];
    int indice;
    bool controler=false;

    for (int i=0; i<num; i++){
        if (lista[i] >= maior){
            maior=lista[i];
            indice=i;
        }
    }

    if (lista[0] < maior){
        controler=true;
    }

    for (int i=0; i < indice; i++){
        if (lista[i] < menor){
            menor=lista[i];
            controler=true;
        }
    }

    if (controler){
        cout << maior - menor;
    }
    else {
        cout << 0;
    }

    return 0;
}