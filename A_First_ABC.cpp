#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i; cin >> n;
    cin.ignore();
    string str; cin >> str;
 
    int A = 0, B = 0, C = 0, pos;
 
    for(i=0; i<n; i++){
        if(str[i] == 'A') A++;
        else if(str[i] == 'B') B++;
        else if(str[i] == 'C') C++;
 
        if(A >= 1 && B >= 1 && C >= 1) {
            pos = i+1;
            break;
        }
    }
 
    cout << pos << endl;
    
    return 0;
}