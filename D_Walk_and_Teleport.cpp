#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             "YES"
#define      no              "NO"
#define      ll              long long
#define      pb              push_back
#define      pii             pair <int,int>
#define      pll             pair <long long,long long>
#define      rev(a)          reverse(a, a+n);
#define      sort(a)         sort(a, a+n);
#define      Srev(s)         reverse(s.begin(), s.end());
#define      sz(s)           s.size()
#define      gcd(a,b)        __gcd(a,b)
#define      lcm(a,b)        (a*b)/gcd(a,b)
#define      fastIO          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fastIO;

    ll n, x, y, i;
    cin >> n >> x >> y; 
    ll a[n+5];

    for(i=0; i<n; i++){
        cin >> a[i];
    }

    ll minn = 1e18, val, sum = 0;

    for(i=0; i<n-1; i++){
        val = abs(a[i]-a[i+1]);
        minn = min(val*x, y);
        sum += minn;
        minn = 1e18;
    }

    cout << sum << endl;


    return 0;
}
