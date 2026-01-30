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
ll solve(ll n,ll m,ll a){
    if(n>a && m>a) return ((n+a-1)/a)*((m+a-1)/a);
    else if(n>a && m<=a) return (n+a-1)/a;
    else if(n<=a && m>a) return (m+a-1)/a;
    else return 1;
    
}

/* ---------- MAIN ---------- */
int main(){
    fastio;
    ll n,m,a;
    cin >> n>>m>>a;
    cout<<solve(n,m,a)<<endl;
    return 0;
}