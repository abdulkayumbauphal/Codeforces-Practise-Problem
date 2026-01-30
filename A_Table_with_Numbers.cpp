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

/* ---------- PRINT SHORTCUT ---------- */
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl cout << "\n"
#define sp cout << " "

/* ---------- TYPES ---------- */
typedef long long ll;

/* ---------- VECTOR SHORTCUT ---------- */
#define vecin(v,n) vector<ll> v(n); rep(i,n) cin >> v[i];
#define vecprint(v) for(auto x : v) cout << x << " "; cout << "\n";

void solve(){
    int n,h,l;
    cin >> n>>h>>l;
    vecin(v, n);

    if(h<l) swap(h,l);
    sort(all(v));
    for(int i=n-1;i>=0;i--){
        if(v[i]>h) v.pop_back();
    }
     n=v.size();
    if(n & 1){
        v.pop_back();
    }
    ll ans=0;
    rep(i,v.size()/2){
        if(v[i]<=l) ans++;
    }
    cout<<ans<<'\n';
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