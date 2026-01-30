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
#define vecprint(v) for(auto x : v) cout << x << " ";

void solve(){
   ll n;cin>>n;
   vecin(v,n);

   for(int i=0;i<n;i++){
    if(v[i]<n-i){
        ll j;
        for(j=i+1;j<n;j++){
        if(v[j]==n-i){
            break;
         }
        }
        while(i<j){
                swap(v[i++],v[j--]);
            }
            break;
        }
   }
   for(int i=0;i<n;i++){
    if(i!=n-1) cout<<v[i]<<" ";
    else cout<<v[i]<<'\n';
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