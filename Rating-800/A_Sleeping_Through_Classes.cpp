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
    int n,k;
    cin >> n>>k;
    int sleep=0;
    string s;cin>>s;
    
   for(int i=0;i<n;i++){
       if(s[i]=='1') {
        for(int j=i+1;j<n;j++){
            if(s[j]=='1'){
                if(j-i-1-k>=0) sleep+=j-i-1-k;
                // cout<<sleep<<'\n';
                i=j;
                i--;
                break;
            }
           else if(j==n-1){
            if(n-i-1-k>=0) {
                sleep+=n-i-1-k;
            }
            i=j;
                break;
           }
        }
       }
       else {
           sleep++;
       } 
    }
    cout<<sleep<<'\n';
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