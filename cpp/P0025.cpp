#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cortes=0,videos=0,max=0,d=0;

    cin >> videos;
    
    for(int x=0; x < videos; x++){
        cin >> d;
        max+=d;
        cortes+=(d -1);
    }

    cout << cortes << " " << max;
    return 0;
}