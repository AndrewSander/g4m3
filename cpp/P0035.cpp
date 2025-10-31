#include <bits/stdc++.h>
using namespace std;

int main()
{
    int inscritos;

    cin >> inscritos;

    if (inscritos < 5){
        cout << "Flopou!";
    }
    else if (inscritos >= 5 and inscritos < 31){
        cout << "Foi massa!";
    } 
    else{
        cout << "Foi top demais!";
    }

    return 0;
}