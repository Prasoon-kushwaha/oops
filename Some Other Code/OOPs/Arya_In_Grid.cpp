#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout <<"YES\n";
#define no cout <<"NO\n";
#define pb push_back
#define pii pair<int,int>
#define vi vector<int>
#define vll vector<long long>
#define all(x) x.begin(),x.end()
#define INF INT_MAX
#define MOD 1000000007
// Author Prasoon Kushwaha
// basic str function
// distance rot
int rot(char a, char b) {
    int k = 3; // set one if shift is 1
    int ans = (int)(b - a); 
    if (ans < 0) {ans = ans + 26;}
    while (ans%k!=0){  ans=ans+26;}
    return ans/3;}
char crot(char a,int k) //returns after element
{
    int val =a-'a';
    val+=k;
    val=val%25;
    return 'a'+val;
}
// prime genrator

vector<int> primes_(int n) {
    vector<bool> sieve(n+1, true);
    vector<int> primes;
    for (int p = 2; p <= sqrt(n); ++p) {
        if (sieve[p]) {
            for (int i = p*p; i <= n; i += p)  sieve[i] = false;}}
    for (int p = 2; p <= n; ++p) {if (sieve[p])primes.push_back(p);}
    return primes;
}



// MAIN CODE HERE

void solve()
{
 ll n,m,l,x,y;
 cin >> n>>m>>x>>y>>l;
 ll opx=x/l+(n-x)/l;
 ll opy=y/l+(m-y)/l;
 cout <<opx*opx-1<<endl;
}
int main()
{
   int t;
   cin>>t;
   while (t--)
   {
   solve();
   }
   
}