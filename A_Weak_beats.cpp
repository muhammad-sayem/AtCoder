#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             cout << "YES" << endl
#define      no              cout << "NO" << endl
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

    string s;
    cin >> s;

    bool flag = true;

    for(int i=0; i<s.size(); i++){
        if(i%2 != 0 && s[i] == '1'){
            flag = false;
            break;
        }
    }

    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}