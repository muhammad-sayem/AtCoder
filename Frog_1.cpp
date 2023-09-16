// Iterative DP //

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    int a[n+5];
    int dp[n+5];

    for(i=1; i<=n; i++){
        cin >> a[i];
    }

    dp[1] = 0;
    dp[2] = abs(a[1]-a[2]);

    for(i=3; i<=n; i++){
        int val1 = dp[i-2] + abs(a[i-2] - a[i]);
        int val2 = dp[i-1] + abs(a[i-1] - a[i]);
        dp[i] = min(val1, val2);
    }

    cout << dp[n] << endl;
    
    return 0;
}

// ------------------------------------------------------------------------ //

// Recursive DP //

/*
#include<bits/stdc++.h>
#define  ll  long long
using namespace std;

const int N = 1e5+5;
int dp[N];

int solve(int a[], int n){
    // Base Case //
    if(n==1) {
        return 0;
    }

    if(dp[n] != -1){
        return dp[n];
    }

    else if(n==2){
        dp[n] = abs(a[2] - a[1]);
        return dp[n];
    }

    else{
        int choice1 = solve(a, n-1) + abs(a[n] - a[n-1]);
        int choice2 = solve(a, n-2) + abs(a[n] - a[n-2]);
        dp[n] = min(choice1, choice2);
        return dp[n];
    }
}

int main()
{
    int n, i;
    cin >> n;

    int a[n+5];

    for(i=1; i<=n; i++){
        cin >> a[i];
        dp[i] = -1;
    }

    cout << solve(a, n) << endl;

    return 0;
}
*/