#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const ll mod = 1e9+7;

bool chk[1010101];
ll dp[1010101];

ll fibo(int n) {
    if(n <= 1) return n;
    if(chk[n]) return dp[n];
    chk[n] = true;
    return dp[n] = (fibo(n-1) + fibo(n-2)) % mod;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin>>n;
    cout<<fibo(n);
    
}