// To calculate the largest continuous subarray sum of the given array in O(n), Kadane Algorithm is used..

#include<bits/stdc++.h>
using namespace std;

int kadane(vector<int> &arr)
{
  int n= arr.size();
  int sum=0;
  int maxi=INT_MIN;
  for(auto it:arr)
  {
    sum+=it;
    maxi=max(sum,maxi);
    if(sum<0)
      sum=0;
  }
  return maxi;
}


int main()
{
  vector<int> arr;
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    arr.push_back(x);
  }
 
  int ans=kadane(arr);
  cout<<ans<<endl;
  return 0;
}
