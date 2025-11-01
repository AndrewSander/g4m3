#include <bits/stdc++.h>
using namespace std;

bool isPitagorico(int x, int y, int z){
    int maior= max(x,max(y,z));
    int soma= pow(x,2) + pow(y,2) + pow(z,2) - pow(maior,2);
    int total= pow(maior,2);

    return (soma == total);
}

int main(){
    int n; cin >> n;
    bool ok=true;
    for (int i=1; i<=n; i++){
        for (int j=i; j<=n; j++){
            for (int k=j; k<=n; k++){
                if (isPitagorico(i,j,k)){
                    cout << i << " " << j << " " << k << "\n";
                    ok=false;
                }
            }
        }
    }
    if (ok) cout << "nenhuma tripla" << "\n";
}