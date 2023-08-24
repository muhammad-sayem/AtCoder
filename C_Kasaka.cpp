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
    int i, j, cnt = 0, cnt2 = 0;

    cin >> s1;

    s2 = s1;

    reverse(s2.begin(), s2.end());

    if(s2 == s1) cout << "Yes" << endl;

    else{
        string s3;
        for(i=s1.size()-1; i>=0; i--){
            if(s1[i] == 'a') {
                s1.pop_back();
                cnt++;
            }
            else break;
        }

        s3 = s1;
        reverse(s3.begin(), s3.end());

        if(s1 == s3) cout << "Yes" << endl;

        else{
            for(i=s3.size()-1; i>=0; i--){
                if(s3[i] == 'a'){
                    s3.pop_back();
                    cnt2++;
                }
                else break;
            }

            if(cnt2 <= cnt && cnt2 != 0) {
                string s4;
                s4 = s3;
                reverse(s4.begin(), s4.end());

                if(s3 == s4) cout << "Yes" << endl;
                else cout << "No" << endl;

            }
            else cout << "No" << endl;
        }
    }

    return 0;
}
