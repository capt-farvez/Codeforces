/* Bismillahir Rahmanir Raheem */
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
#define lp(strt,en) for(ll i=strt; i<en; i++)
using namespace std;
const int INF = 1e9;

bool is_prime(ll n){
    if (n < 2)
        return false;
    for (ll i = 2; i <= sqrt(n); i++){
        if (n % i == 0)
            return false;
    }
    return true;
}
ll digits_sum(ll n){
    ll sum = 0;
    while (n){
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}
/*************************** START ***************************/

void solve(){
    ll n;
    cin >> n;
    vll v(n);
    lp(0,n){
        cin >> v[i];
    }
    ll flag = 0;
    lp(0,n-1) {
        if((v[i] % 2) != (v[i+1] % 2)){
            flag = 1;
        }
    }
    if(flag==0){
        YES;
    }
    else{
        sort(v.begin(), v.end());
        if (v[0] % 2 == 1){
            YES;
        } 
        else{
            NO;
        }
    }
}


int main(){   
    readFirst();
    ll tCases = 1;
    cin >> tCases;
    while (tCases--){
        solve();
    }
    return 0;
}