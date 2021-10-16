#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;


void SieveOfEratosthenes(ll n,ll v[])
{
    ll count=0;
    // Create a boolean array
    // "prime[0..n]" and initialize
    // all entries it as true.
    // A value in prime[i] will
    // finally be false if i is
    // Not a prime, else true.
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (ll p = 2; p * p <= n; p++)
    {
        // If prime[p] is not changed,
        // then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples
            // of p greater than or
            // equal to the square of it
            // numbers which are multiple
            // of p and are less than p^2
            // are already been marked.
            for (ll i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
 
    // Print all prime numbers
    for (ll p = 2; p <= n; p++)
        if (prime[p])
            v[count++]=p;
}


int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    ll z;
    
    cin >> tc;

    for (int t = 1; t <= tc; t++) 
    {
        cin >> z;
        ll v[z];
        SieveOfEratosthenes (z,v);

        for (ll i = 0; i <=z; ++i)
        {
            cout << v[i];
        }
        ll max=0;
        for ( ll i = 1; i <=z; ++i)
        {
            if((v[i]*v[i-1]>z))
                break;

            if((v[i]*v[i-1]>=max)&&(v[i]*v[i-1]<=z))
                max=v[i]*v[i-1];
        }
         cout <<"Case #"<< t <<": "<< max << "\n";
     }
 }