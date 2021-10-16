
#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;



int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1,n;
    string s;
    cin >> tc;
    int c=0;
    int max=1;
    for (int t = 1; t <= tc; t++) 
    {
    	cin >> n >> s;
    	cout <<"Case #"<< t <<": "<< 1 << " ";
    	for (int i = 1; i < s.length(); ++i)
    	{
    		c=1;
    	
    		
    		
    		// 	if(c>max)
    		// 		max=c;
    		int j=i;	
    			while(j>0)
    			{
                    
    			if(s.at(j)>s.at(j-1))
    				++c;
                else break;
                --j;
    			
    		
    		
    		}
    		cout << c << " ";

    		
    	}
    	cout << "\n";

    	//cout <<"Case #"<< t <<": "<< op << "\n";


     }
        

        
 }
