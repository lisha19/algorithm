#include<bits/stdc++.h>
using namespace std;

void binarysearch()
{
    int a[] = { 1, 2, 13, 13, 13, 68, 79 };
    
    int n=7;
    int low=0;
    int high=n-1;
    int x=68; 
    int res=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(x==a[mid])
        {
            res=mid;
            break;
        }
        else if(x<a[mid])
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
        
    }
    cout<<res;
}

int main()
{
    binarysearch();
}
