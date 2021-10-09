#include <bits/stdc++.h>
 
#define   ll              long long
#define   ull             unsigned long long
#define   lscn(x)         scanf("%lld",&x)
#define   lpri(x)         printf("%lld",&x)
#define   rep(i,x,n)      for(ll i=x;i<n;i++)
#define   rev(i,n)        for(i=n-1;i>=0;i--)
#define   VC              vector<ll>
#define   MP              map<ll,ll>
#define   pb              push_back
#define   mp              make_pair
#define   gcd             __gcd
#define   testcase(t)     cin>>t;while(t--)
#define   endl            "\n"
#define   lb              lower_bound
#define   ub              upper_bound
#define   ab(a)           a.begin(),a.end()
#define   fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define   srt(v)          sort(v.begin(),v.end())
#define   revsrt(v)       reverse(v.begin(),v.end())
#define   inp(a,n)        rep(i,0,n)cin>>a[i]
#define   arr(a,n)        ll n;cin>>n;ll a[n];inp(a,n);
#define   con5            100001 
using namespace std;
 
//BinaryExponentiation
ll binexp(ll a,ll b)
{
    ll res=1;
    while(b>0)
    {
    if(b&1)
    res*=a;
    a*=a;
    b>>=1;
    }
    return res;
}
//GCD
ll gcd(ll a,ll b)
{
    while(b>0)
    {
        a%=b;
        swap(a,b);
    }
    return a;
}
 //:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://
 void solve()
{
    ll n,cnt=0;;
    cin>>n;
    string s;
    cin>>s;
    rep(i,0,s.length())
    {
        if(s[i]!='0'&&i!=n-1)
        {
            cnt+=s[i]-'0';
            cnt++;
        }
        else
        cnt+=s[i]-'0';
 
    }
    cout<<cnt<<endl;
        
 
 
 
    
}
 
int main()
{
    ll t;
     
      
     testcase(t)
     {
         solve();
     }
     
     
}
