#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

int countdig(int n)
{
	int count=0;
	while(n)
	{
		++count;
		n=n\10;
	}
	return count;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc,n;
    cin >> tc;
    while(tc--) {
    	cin >> n;
    	vector<int> v{n,0};
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> v[i];
    	}
    	vector<int> digits{n,0};
    	for (int i = 0; i < n; ++i)
    	{
    		diigts(i)=countdig(v[i]);
    	}
    	// for (int i = n-1; i >=0 ; --i)
    	// {
    	// 	int max=v[0];
    	// 	for (int j=0 ; j<=i ; ++j)
    	// 	{
    	// 		if(v[j]>max)
    	// 		{
    	// 			max=v[j];
    	// 		}
    	// 	}
    	// 	diff=max-v[i];
    	for (int i = 0; i < n; ++i)
    	{
    		if(v[i]>)
    	}

    	}
    }
