#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve(int t) {
    string s;
    int n,k;

    int ar[n/2];
    int c=0;

    cin >> n >> k >> s ;
    if(n==1)
        ans=s[0]-97;
    else
    for (int i = 0; i < n/2; ++i)
    {
        ar[c++]=s[i]-96;

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



    
        

        

    
    









