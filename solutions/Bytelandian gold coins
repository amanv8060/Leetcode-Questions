#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using vc = vector<char>;
using vvc = vector<vc>;
using vs = vector<string>;
const ll mod = 1e9 + 7,inf = 1e18;
#define pb push_back
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void setIO()
{
    fast;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}

map<ll,ll>dp;//memo table

ll solve(ll n)//returns dp[n]
{
    if (n <= 2)return dp[n] = n;//base case

    if (dp.count(n))return dp[n];
    
    return dp[n] = max(n,solve(n/2) + solve(n/3) + solve(n/4));//recursive case
}

int main()
{
    setIO();
    
    ll n;

    while (cin>>n)
        cout<<solve(n)<<'\n';
    return 0;
}
