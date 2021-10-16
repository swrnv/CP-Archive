#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;



void solve() {

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1,r,c,maxi,maxj,max;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
           cin >> r  >> c;
    	int a[r][c];
    	max=-1;
    	for (int i = 0; i < r; ++i)
    	for(int j=0;j< c;j++)
    		{
    			cin >> a[i][j];
    			if(c[i][j]>max)
    			{
    				maxi=i;
    				maxj=j;
    			}
    			if(c[i][j]<min)
    			{
    				mini=i;
    				minj=j;g
    			}
    		}



    	while(counter)
    	{
    		//if(i!=r&&j!=c)
    	    //{
    	    	if(a[maxi][maxj]-a[i-1][j]>1)
    		{
    			a[i-1][j]+=a[maxi][maxj]-a[i-1][j]-1;
    			ans+=a[maxi][maxj]-a[i-1][j]-1;

    		}
    		if(a[i-1][j-1])
    		{
    			a[i-1][j-1]+=a[maxi][maxj]-a[i-1][j-1]-1;
    			ans+=a[maxi][maxj]-a[i-1][j]-1;
    		}
    		if(a[i][j])
    		{
    			a[i][j]+=a[maxi][maxj]-a[i][j]-1;
    			ans+=a[maxi][maxj]-a[i-1][j]-1;
    		}
    		if(a[i][j-1])
    		{
    			a[i][j-1]+=a[maxi][maxj]-a[i][j-1]-1;
    			ans+=a[maxi][maxj]-a[i-1][j]-1;
    		}


    	    //}

    		

    	}

    }
}