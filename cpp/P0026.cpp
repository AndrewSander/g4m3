#include <bits/stdc++.h>
#include <string>  
using namespace std;

int main()
{
    int l,c;
    cin >> l >> c;
    char matriz[l][c];
    char matriz2[c][l];
    cin.ignore();

    for (int i=0; i < l; i++){
        string linha;
        getline(cin,linha);
        for (int j=0; j < c; j++){
            matriz[i][j]= linha[j];
        }
    }

    for (int i=0; i < l; i++){
        for (int j=0; j < c; j++){
            matriz2[j][i] = matriz[i][j];
        }
    }

    for (int i=0; i < c; i++){
        for (int j=0; j < l; j++){
            cout << matriz2[i][j];
        }
        cout << "\n";
    }
    return 0;
}