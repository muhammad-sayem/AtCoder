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

    int n, i, j;
    cin >> n;

    string str[n+5];

    for(i=0; i<n; i++){
        cin >> str[i];
    }

    bool flag = false;

    for(i=0; i<n-1; i++){
        for(j=0; j<n; j++){
            if(i != j){
                string s1 = str[i] + str[j];
                string s2 = s1;
                reverse(s2.begin(), s2.end());
                if(s2 == s1){
                    flag = true;
                }
            }
        }
    }

    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
