#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll MOD = 1e9 + 7;
const int MAX_N=1e6;


void solve() {
	int n;
	cin >>  n;
	int ar[n];
	int ar2[n];
	map<int,int> m;
	for (int i = 0; i < n; ++i)
	{
		cin >> ar[i];
		m[ar[i]]=i;
	}
	for (int i = 0; i < n; ++i)
	{
		cin >> ar2[i];
		m[ar2[i]]=i;
	}
	//cout  << m[2] << "SAsf" << endl;
    int ans=MAX_N,max=-1;
    int cnt=0;
	for (int i = 0; i < n; ++i)
	{
		if(ar2[i]>max){
			for (int j=ar2[i]; j!=max && j>1 ;j-=2 )
			{
				//cout << j-1 << "\n";
				int pos=m[j-1]+i;
				ans=min(ans,pos);
			}
			max=ar2[i];}
	}
	//cout <<"----------------------"  << "\n";
	cout << ans << "\n";
// 	int pos=-1;
// 	int pos2=-1;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		if(ar[i])
// 	}
// 	for (int i = 0; i < n; ++i)
// 	{
// 		if(ar[i]<ar2[0])
// 		{
// 			pos2=i;break;
// 		}
// 	}
// cout << min(pos,pos2) << "\n";


}

int main() {
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc=1;
    cin >> tc;
    while(tc--) solve();
    auto end = std::chrono::high_resolution_clock::now();
        cout << setprecision(4) << fixed;
        //cout << "Execution time: " << std::chrono::duration_cast<std::chrono::duration<double>>(end - begin).count() << " seconds" << endl;
}


// 1
// 5
// 7 3 5 9 1
// 2 4 6 10 8
// 3   // ans should be 2 while output is 3!
