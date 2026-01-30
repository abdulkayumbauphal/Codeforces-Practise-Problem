#include <bits/stdc++.h>
using namespace std;

/* ---------- FAST IO ---------- */
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

/* ---------- LOOP ---------- */
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,a,b) for(int i=a;i<=b;i++)

/* ---------- SHORTCUTS ---------- */
#define pb push_back
#define all(v) v.begin(), v.end()

/* ---------- TYPES ---------- */
typedef long long ll;

/* ---------- VECTOR SHORTCUT ---------- */
#define vecin(v,n) vector<ll> v(n); rep(i,n) cin >> v[i];
#define vecprint(v) for(auto x : v) cout << x << " "; cout << "\n";

void solve(){
    int n,s,x;
    cin >> n>>s>>x;
    ll sum=0;
    rep(i,n){
        ll a;cin>>a;
        sum+=a;
    }
    if(s==sum) cout<<"YES\n";
    else if(s<sum) cout<<"NO\n";
    else{
        int b=s-sum;
        if(b%x==0) cout<<"YES\n";
        else cout<<"NO\n";
    }
}

int main(){
    fastio;
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}