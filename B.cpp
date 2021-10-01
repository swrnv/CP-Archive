#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;





int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1,n,a,b;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        //cin >> n >> a >> b;
        int ar[n];
        int sum=0;
        for (int i = 0; i < n; ++i)
        {
           // cin >> ar[i];
            sum+=(i+1)*ar[i];
        }
        int v[22];
        v[0]=0;
        v[1]=1;

        for (int i = 2; i < 22; ++i)
        {
            v[i]=v[i-1]+v[i-2];
        }

        for (int i = 0; i < 22; ++i)
        {
            cout << v[i] << "\n";
        }


        // for(auto it:v)
        //     cout << it  << " ";


        
         cout << "Case #" << t  << ": " << sum-1 << endl;
       
    }
}