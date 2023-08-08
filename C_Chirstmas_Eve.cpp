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

    ll n, k, i;
    cin >> n >> k;
    ll a[n];

    for(i=0; i<n; i++){
        cin >> a[i];
    }

    sort(a, a+n);

    ll minn = 1e9;

    for(i=k-1; i<n; i++){
        minn = min(minn, a[i]-a[i-k+1]);
    }
    cout << minn << endl;

    return 0;
}