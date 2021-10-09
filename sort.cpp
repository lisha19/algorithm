#include <bits/stdc++.h>

  
#define   ll         long long
#define   ull        unsigned long long
#define   lscn(x)    scanf("%lld",&x)
#define   lpri(x)    printf("%lld",&x)
#define   rep(i,x,n) for(ll i=x;i<n;i++)
#define   rev(i,n)   for(i=n-1;i>=0;i--)
#define   VC         vector<ll>
#define   MP         map<ll,ll>
#define   pb         push_back
#define   mp         make_pair
#define   gcd        __gcd
#define   tc(t)      cin>>t;while(t--)
#define   endl       "\n"
#define   lb         lower_bound
#define   ub         upper_bound
#define   ab(a)      a.begin(),a.end()
#define   fast       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define   srt(v)     sort(v.begin(),v.end())
#define   revsrt(v)  reverse(v.begin(),v.end())
#define   inp(a,n)   rep(i,0,n)cin>>a[i]
#define   arr(a,n)   ll n;cin>>n;ll a[n];inp(a,n);
#define   con5       100001 
using namespace std;
 
 void solve()
 {arr(a,n);ll b[n],c=0,i,con=1,x,temp;
  rep(i,0,n)
  b[i]=a[i];
  sort(b,b+n);
  rep(i,0,n)
  {
      if(a[i]!=b[i])
      c++;
  }
  if(c!=0)
  {
      x=0;
      while(con==1){
      if(x%2==0)
      {
          for(i=0;i<n-1;i+=2)
          {
              if(a[i]>a[i+1])
              {temp=a[i+1];
                 a[i+1]=a[i];
                 a[i]=temp;
              }
          }
      }
      else{
          for(i=1;i<n-1;i+=2)
          {
              if(a[i]>a[i+1])
              {temp=a[i+1];
                 a[i+1]=a[i];
                 a[i]=temp;
              }
          }
      }
      x++;
      rep(i,1,n)
      {
          if(a[i]<a[i-1])
          con=2;
      }
      if(con==2)
      con=1;
      else 
      {con=0;
      cout<<x<<endl;
      return;
      }
  }
 }
 else
 cout<<0<<endl;

  }

 

int main()
 {
     ll t,kk;
     kk=1;
     if(kk==1){
     tc(t)
     {
         solve();
     }}
     else solve();
 }
