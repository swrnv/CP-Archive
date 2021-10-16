#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve(int t) {

    ll d,n,k;
    cin >> d >> n >> k;
    ll h[n];
    ll s[n];
    ll e[n];
    ll sum=0;
    ll ans=0;
    for (int i = 0; i < n; ++i)
    {
        cin >> h[i] >> s[i]  >> e[i];
    }
   //cout << h[0] << endl;
    vector<ll> v(d,0);
    for (int i = 1; i <=d; ++i)
    {
        sum=0;

        v.clear();

int cnt=0;
       for(int j=0;j<n;++j)
       {
            if(i>=s[j]&&i<=e[j])
           { ++cnt; v.push_back(h[j]);}
       }
    sort(v.rbegin(),v.rend());
    //    for(auto it:v)
    //     cout  << it << " ";
    // cout << "\n";

    for(int j=0;j<(k<cnt?k:cnt);++j)
        sum+=v[j];
    //cout << sum << "\n";
    //cout << sum << "\n"; 
    ans=max(sum,ans);

    }

    cout <<"Case #"<< t <<": "<< ans << "\n";

   }
      

      


    




   


int main() {
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc;
    cin >> tc;
    for (int t = 1; t <= tc; t++) 
    {
        solve(t);
    }
    auto end = std::chrono::high_resolution_clock::now();
        cout << setprecision(4) << fixed;
        //cout << "Execution time: " << std::chrono::duration_cast<std::chrono::duration<double>>(end - begin).count() << " seconds" << endl;
}