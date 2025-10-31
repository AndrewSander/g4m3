#include <bits/stdc++.h>
using namespace std;

int main(){

    int n1,n2; cin >> n1; cin >> n2;
    int cont=1;

    for (int i=0; i<26; i++){
        if (cont==n1 or cont==n2){
            cont++;
            cout << cont << "\n";
        }
        else{
            cout << cont << "\n";
        }
        cont++;
    }

    return 0;
}