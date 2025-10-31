#include <bits/stdc++.h>
using namespace std;

int main(){

    float num;
    cin >> num;

    int total = (int) (num * 2);
    int hora = (int) (total/60);
    int minuto = total - (60 * hora);

    cout << hora << "h" << minuto << "m";

    return 0;
}