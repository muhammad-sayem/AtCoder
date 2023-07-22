#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, d, i; cin >> n >> d;
    int a[105] = {0};
    int num = n;

    while(n--){
        string str; cin >> str;

        for(i=0; i<d; i++){
            if(str[i] == 'o'){
                a[i]++;
            }
        }
    }

    int cnt = 0;
    int maxx = 0;

    for(i=0; i<d; i++){
        if(a[i] == num){
            cnt++;
            maxx = max(cnt, maxx);
        }
        else cnt = 0;
    }
    cout << maxx << endl;
    
    return 0;
}