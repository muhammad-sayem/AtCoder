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

    long long n, s, d, flag = 0;
    cin >> n >> s >> d;

    while(n--){
        int a, b;
        cin >> a >> b;

        if(a<s && b>d) {
            flag = 1;
        }

    }

    if(flag == 1) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
