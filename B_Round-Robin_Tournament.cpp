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

bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.first == b.first) return a.second < b.second;
    else return a.first > b.first;
}

int main()
{
    fastIO;

    int n, i, j;
    cin >> n;
    cin.ignore();

    vector<pii> v;

    for(i=1; i<=n; i++){
        string s;
        cin >> s;
        int cnt = 0;

        for(j=0; j<s.size(); j++){
            if(s[j] == 'o') cnt++;
        }

        v.pb({cnt, i});
    }

    sort(v.begin(), v.end(), cmp);

    for(i=0; i<v.size(); i++){
        cout << v[i].second << " ";
    }

    return 0;
}