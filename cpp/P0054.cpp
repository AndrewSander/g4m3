#include <bits/stdc++.h>
using namespace std;

int main(){

    int tam; cin >> tam;
    vector<int> lista(tam);

    for (int &x : lista) cin >>x;

    int perm_max = 0;

    for (int i=0; i<tam; i++){
        for (int j=i+1; j < tam; j++){
            int prov_max= lista[j] - lista[i];
            perm_max=  max(perm_max,prov_max);
        }
    }

    cout << perm_max << "\n";

    return 0;
}