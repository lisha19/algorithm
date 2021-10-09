#include <bits/stdc++.h>
using namespace std;
int main(){
        
   map<int,int>m;
   //count the frequency of each no of the array
   int n;
   cout<<"No of element in the array ";
   cin>>n;
   int arr[n];
      for(int i=0;i<n;i++){ 
       cin>>arr[i];
       m[arr[i]]++;
      }
      for(auto x:m){
          cout<<x.first<<" present "<<x.second<<" times";
          cout<<"\n";
      }
    return 0;
}
