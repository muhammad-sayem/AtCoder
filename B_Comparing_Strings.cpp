#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, i;
    cin >> a >> b;

    int minn = min(a, b);
    int maxx = max(a, b);

    if(a != b){
        for(i=1; i<=maxx; i++){
          cout << minn;
        }
    }

    else{
        for(i=1; i<=a; i++){
          cout << a;
        }
    }
    
    return 0;
}