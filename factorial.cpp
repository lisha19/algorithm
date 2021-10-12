#include <iostream>
using namespace std;
#define ll long long int

int main() {
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);                    
    cout.tie(NULL);
    
    int t;cin>>t;
    while(t--)
    {
       int n;cin>>n;
       int a[200];
        a[0]=1;
        int d=1;
        for(int i=1;i<=n;i++)
        {
            int temp=0;
            for(int j=0;j<d;j++)
            {
                int x=(a[j]*i)+temp;
                a[j]=x%10;
                temp=x/10;
            }
            while(temp>0)
            {
                a[d++]=temp%10;
                temp=temp/10;
            }
        }
        
        for(int i=d-1;i>=0;i--)
        {
            cout<<a[i];
        }
        cout<<endl;
    }
}
