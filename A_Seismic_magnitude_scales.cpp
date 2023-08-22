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

    ll a, b, i;
    cin >> a >> b;

    if(a == b) cout << 1 << endl;
    
    else if(a>b){
        ll val = a-b;
        ll mult = 1;
        for(i=1; i<=val; i++){
            mult *= 32;
        }
        cout << mult << endl;
    } 

    return 0;
}