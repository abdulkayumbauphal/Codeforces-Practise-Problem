#include <bits/stdc++.h>
using namespace std;

/* ---------- FAST IO ---------- */
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

/* ---------- LOOP ---------- */
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,a,b) for(int i=a;i<=b;i++)
#define rrep(i,n) for(int i=n-1;i>=0;i--)

/* ---------- SHORTCUTS ---------- */
#define pb push_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

/* ---------- TYPES ---------- */
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

/* ---------- CONSTANTS ---------- */
const ll INF = 1e18;
const int MOD = 1e9 + 7;

/* ---------- MATH ---------- */
ll gcd(ll a, ll b){ return __gcd(a,b); }
ll lcm(ll a, ll b){ return (a/gcd(a,b))*b; }

bool isPrime(ll n){
    if(n<=1) return false;
    for(ll i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}

/* ---------- DEBUG ---------- */
#define debug(x) cout << #x << " = " << x << endl;

/* ---------- SOLVE ---------- */
void solve(){
    int n;
    cin >> n;
    vector<ll>a(n);
    rep(i,n) cin >> a[i];
    bool correct =true;
    rep(i,n-1){
        if((a[i]+a[i+1])%2==0) {
            correct=false;
            break;
        }
    }
    if(correct) cout<<"YES\n";
    else cout<<"NO\n";
}

/* ---------- MAIN ---------- */
int main(){
    fastio;
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}