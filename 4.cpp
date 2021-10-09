#include <bits/stdc++.h>
using namespace std;
int main(){
        //Print the unique no.
        //i.e the whose frequency is 1
        int n;
        cout<<"Enter the no.of element ";
        cin>>n;
        int arr[n];
        map<int,int> m;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            m[arr[i]]++;
        }
        cout<<"Unique numbers are ";
        for(auto x:m){
            if(x.second==1)
             cout<<x.first <<" ";
        }
        return 0;
}