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
    int n;
    cin >> n;
    vector<ll>v(n);
    
    if(n%2==0){
        int stnumberodd=(n/2)+1;
        int stnumbereven=(n/2);
    for(int i=0;i<n;i++){
        if((i+1)%2!=0){
            v[i]=stnumberodd;
            stnumberodd++;
            }
        else{
            v[i]=stnumbereven;
            stnumbereven--;
        }
        }  
    }
    else{
        int stnumberodd=(n/2)+1;
        int stnumbereven=stnumberodd+1;
        for(int i=0;i<n;i++){
        if((i+1)%2!=0){
            v[i]=stnumberodd;
            stnumberodd--;
            }
        else{
            v[i]=stnumbereven;
            stnumbereven++;
        }
        }  
    } 
    rep(i,n){
        cout<<v[i]<<' ';
    }
    nl;
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