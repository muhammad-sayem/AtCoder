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

    ll n, i;
    cin >> n;
    ll a[7*n+5];
    ll sum = 0;

    for(i=1; i<=n*7; i++){
        cin >> a[i]; 
    }

    for(i=1; i<=7*n; i++){
        sum += a[i];
        if(i%7 == 0){
            cout << sum << " ";
            sum = 0;
        }
    }

    return 0;
}
