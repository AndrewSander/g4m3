#include <bits/stdc++.h>
using namespace std;

int main(){

    int soma=0;
    string ip;
    cin >> ip;

    stringstream ss(ip);
    string block;

    while (getline(ss,block,'.')){
        soma+= stoi(block);
    }

    if (soma%8==0){
        cout << "BLOCK";
    }
    else{
        cout << "PASS";
    }

    return 0;
}