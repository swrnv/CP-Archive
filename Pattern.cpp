#include <bits/stdc++.h>
using namespace std;


int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc;
    cin >> tc;
    int uphalf=0;
    int lowhalf;
    if(tc%2==0)
        lowhalf=tc-1;
    else
    	lowhalf=tc-2;
    for (int i = 1; i <= tc; ++i)
    {
    	for (int j = 1; j <=tc; ++j)
    	{
    		if(i<=(tc%2==0?tc/2:tc/2+1))
    			{
    				cout << tc*uphalf+j;
    				if(j!=tc)
    					cout << "*";
    			}
    			else
    			{
    				cout << tc*lowhalf+j;
    				if(j!=tc)
    					cout << "*";

    			}


    		
    	}
    	cout << "\n";
    	if(i<=(tc%2==0?tc/2:tc/2+1))
    	uphalf+=2;
        else
    	lowhalf-=2;
    	
    }
  
}