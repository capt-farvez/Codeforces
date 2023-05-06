//  Bismillahir Rahmanir Raheem //
#include <bits/stdc++.h>
#include <iomanip>
#include <cmath>
#define readFirst() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define ll long long int
#define vll vector<long long int>
#define mll map<long long int, long long int>
#define pb push_back
#define pp pop_back
#define gcd(x, y) __gcd(x, y)
#define pi M_PI
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define Yes cout << "Yes\n"
#define No cout << "No\n"
#define lp(n) for(ll i=0; i<n; i++)
using namespace std;

bool is_prime(ll n)
{
    if (n < 2)
        return false;
    for (ll i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
ll digits_sum(ll n)
{
    ll sum = 0;
    while (n)
    {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}
bool cmp(pair<int, int> const &r1, pair<int, int> const &r2) {
    if (r1.first > r2.first) return false;
    else if (r1.first < r2.first) return true;
    return r1.second < r2.second;
}

void solve(){ 
    ll n;
    cin>>n;
    ll a[n];
    lp(n) cin>>a[i];
    ll mx = 0, cnt = 0;

    lp(n){
            if (a[i] == 0) {
                cnt++;
                mx = max(mx, cnt);
            } else {
                cnt = 0;
            }
        }

        cout << mx << endl;

    // ll mx=0, cnt=0, cntt=0;
    // lp(n) {
    //     if(a[i]==0){
    //         cntt=1;
    //     }
    // }
    // lp(n-1){
    //     if(a[i]==a[i+1] && a[i]==0){
    //     cnt++;
    //     }
    //     else{
    //         if(cnt>mx){
    //             mx=cnt;
    //             cnt=0;
    //         }
    // }

    // } 
    // if(cntt){   
    // cout<<mx+1<<endl;
    // }
    // else{
    //     cout<<cntt<<endl;
    // }
    
    // lp(n) {
    //     if(a[i]==0){
    //         cntt=1;
    //     }
    // }
    // ll flg=0;
    // lp(n){
    //     if(a[i]==0 & a[i+1]==0 ){
    //         cnt++;
    //         flg=1;
    //     }
    //     else{
    //         mx=max(cnt+1, mx);
    //         cnt=0;
    //     }
    // }
    // if(cntt){     
    // cout<<max(mx,cntt)<<endl;
    // }
    // else{
    //     cout<<cntt<<endl;
    // }
}

int main()
{
    readFirst();
    ll tCases = 1;
    cin >> tCases;
    while (tCases--)
    {
        solve();
    }
    return 0;
}