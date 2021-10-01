#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

// int countdig(int n)
// {
// 	int count=0;
// 	while(n)
// 	{
// 		++count;
// 		n=n\10;
// 	}
// 	return count;
// }
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t,n;
    cin >> t;
    for(int j=1; j<=t;++j){
    	cin >> n;
    	int a[n];
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> a[i];
            //copy[i]=v[i];
    	}
        int count=0;
        int c=2;
       while(c){
       for (int i = 0; i < n-1; ++i)
       {
        if(i!=n-2){
           if(a[i]>=a[i+1])
           { ++count;
            a[i+1]=a[i+1]*10;}}
            else if(i==n-2)
            {
        
           if(a[i]>=a[i+1])
           { ++count;
            a[i+1]=a[i+1]*10+1;}

            }
       }--c;}
       cout << "Case #" << j << ": " << count << "\n";
       
   }
}
