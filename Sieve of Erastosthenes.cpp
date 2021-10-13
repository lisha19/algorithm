
// Program to count all the Prime numbers between 1 to n using Seive of Erastosthenes in O(Nlog(log(N)))..

#include<bits/stdc++.h>
using namespace std;

    int countPrimes(int n) {
        
        vector<bool>v(n+1,true);
        v[0]=false;
        v[1]=false;
        
        for(int i=0;i<sqrt(n);i++)
        {
            if(v[i])
            {
                
                for(int j=i*i;j<n;j+=i)
                {
                    v[j]=false;
                }
            }
        }
        
        int cnt=0;
        if(n<2)
            return 0;
        
        for(int i=2;i<n;i++)
        {
            if(v[i])
                cnt++;
        }
        
        return cnt;
    }
    
    int main()
    {
    int n;
    cin>>n;
    int ans=countPrimes(n);
    cout<<ans<<endl;
    
    return 0;
    }


