#include <bits/stdc++.h>
 
using namespace std;
 
 
int main()
{
  int n;
  cin>>n;
  int a[n];
  int flag=0;
  for(int i=0;i<n;i++){
      cin>>a[i];
  }
  sort(a,a+n);
  for(int i=0;i<n-2;i++){
      if(a[i]+a[i+1]>a[i+2]){
          cout<<"YES"<<endl;
        flag=1;
			break;
      }
      
  }
  if(flag==0)
	{
        cout<<"NO"<<endl;
	}
    
 
 
 
    return 0;
}
