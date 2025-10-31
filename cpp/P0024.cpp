#include <bits/stdc++.h>
using namespace std;

int main(){

    int sum=0;
    vector <int> lista;

    for (int i=0; i<5; i++){
        int x;
        cin >> x;

        lista.push_back(x);
    }

    int menor=lista[1];

    for (int x:lista){
        if (x < menor){
            menor=x;
        }
    }


    for (int i=0; i<5; i++){
        if (lista[i] > menor){
            int sub = lista[i] - menor;
            lista[i] = lista[i] - sub;
            sum+=sub;
        }
    }

    cout << sum;

    return 0;
}