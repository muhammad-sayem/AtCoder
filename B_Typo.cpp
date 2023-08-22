#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             "YES"
#define      no              "NO"
#define      ll              long long
#define      pb              push_back
#define      pii             pair <int,int>
#define      pll             pair <long long,long long>
#define      rev(a)          reverse(a, a+n);
#define      Srev(s)         reverse(s.begin(), s.end());
#define      sz(s)           s.size()
#define      gcd(a,b)        __gcd(a,b)
#define      lcm(a,b)        (a*b)/gcd(a,b)
#define      fastIO          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fastIO;   

    string s1;
    string s2;

    cin >> s1;  
    cin >> s2;

    int i, j;

    if(s1 == s2) cout << "Yes" << endl;
    else{
        bool flag = false;
        
        for(i=0, j=0; i<s1.size(); i++, j++){
            if(s1[i] == s2[j+1] && s1[i+1] == s2[j]){
                swap(s1[i], s1[i+1]);
                if(s1 == s2){
                    flag = true;
                    break;
                }
            }
        }

        if(flag) cout << "Yes" << endl;
        else cout << "No" << endl;
    }  

    return 0;
}

