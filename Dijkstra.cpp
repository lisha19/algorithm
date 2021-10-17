// CREATED BY    DEVIL'S_NE5T   AKA    HARSH GUPTA

// NOT A PRO CODER XD
// JUST SOMEONE WHO IS INTERESED IN THE WORLD OF CODING
// JUST SO I MENTION THAT ALTHOUGH I LIKE CODING BUT DEBUGGING MAKES ME FEEL SICK


#include <bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll              long long
#define ull             unsigned long long
//COMMON DATA STRUCTURES
//----------------------
#define vll             vector<ll>
#define pll             pair<ll,ll>
#define vpairll         vector<pair<ll,ll>>
#define mpll            map<ll,ll>
#define mpcl            map<char,ll>
#define setll           set<ll>
//COMMON OPERATIONS 
//-----------------
#define setbits         __builtin_popcountll //count number of 1 in binary
#define leadzero        __builtin_clz //count leading zeroes in binary
#define tailzero        __builtin_ctz //coutn tail zero
#define pb              push_back
#define pfrt            push_front
#define lb              lower_bound
#define ub              upper_bound
#define F               first
#define S               second
#define endl            "\n"
#define all(v)          v.begin(),v.end()
#define revall(v)       v.end(),v.begin()
#define MEM(a, b)       memset(a, (b), sizeof(a))    
#define loop(i,a,b)     for(ll i=a;i<b;i++)
#define rev(i,a,b)      for(ll i=b-1;i>=a;i--)
#define foreach(it,l)   for(auto it=l.begin();it!=l.end();it++)
#define reveach(it,l)   auto it = l.end();it--;for(it;it!=l.begin();it--)

// ________________________________________________________________________________________________________________
//PBDS
// #include <ext/pb_ds/assoc_container.hpp> 
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update>
//     ordered_set;

//find_by_order() return the iterator to the element at xth(0-based) position
//order_of_key() returns number of elements in set which are strictly less than x

#define PI           3.1415926535897932384626433832795
const ll M      =    1e9+7;
const ll i1     =    200005;

//________________________________________________________________________________________________________________

//COMMON FUNCTIONS USED 
//---------------------


ll gcd(ll a,ll b){
    if(b==0) return a;
    return gcd(b,a%b);
}

ll lcm(ll a,ll b){
    return ((a*b)/gcd(a,b));
}

ll modexp(ll a,ll b){
    int res = 1;
    while (b){
        if (b%2==1)res= (res*a)%M; 
        b>>=1;
        a=(a*a)%M;
    }
    return res%M;
}

// ll fact[i1];
// void factorial(){
//     fact[0] = 1;
//     loop(i,1,i1){
//         fact[i] = fact[i-1]*i;
//         fact[i]%=M;
//     }
// }

// ll ncr(ll n, ll r){
//     ll x = fact[n]*(modexp(fact[r],M-2)%M*modexp(fact[n-r],M-2)%M)%M;
//     return x%M;
// }

// ll prime[i1]={};
// vll prm;
// void seive(){
//     prime[0]=prime[1]=1;
//     for(ll i=2;i*i<=i1;i++){
//         if(prime[i]==0){
//             for(ll j=i*i;j<=i1;j+=i){
//                 prime[j]=1;
//             }
//         }
//     }
//     for(ll i=1;i<=i1;i++){
//         if(prime[i]==0)prm.pb(i);
//     }
// }

// ________________________________________________________________________________________________________________

//CODE HERE........

bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){
    return (a.second < b.second);
}

void harsh_op(ll test_case){

    ll n,m; cin>>n>>m;

    ll temp = m;

    vpairll adj[n+1];

    while(temp--){
        ll a,b,c; cin>>a>>b>>c;
        adj[a].pb({b,c});
        adj[b].pb({a,c});
    }

    priority_queue <pll,vpairll,greater<pll>> q;
    // set<pair<ll,ll>> q;
    ll dis[n+1];
    
    // loop(i,0,n+1)cout<<dis[i]<<" "; cout<<endl;
    // memset(dis,LLONG_MAX,sizeof(dis)/sizeof(dis[0]));

    loop(i,0,n+1)dis[i] = LLONG_MAX;

    dis[1] = 0;
    q.push({0,1});

    ll st[n+1]={0};
    st[1] = -1;
    while(!q.empty()){
        pll k = q.top();
        q.pop();
        ll currdis = k.F;
        ll node = k.S;
    // loop(i,0,n+1)cout<<dis[i]<<" "; cout<<endl;
        // if(adj[node].size()!=0)
        for(auto it:adj[node]){
            ll child = it.F;
            ll len = it.S;
            if(dis[child] > currdis + len){
                dis[child] = currdis + len;
                st[child] = node;
                q.push({dis[child],child});  
            }  
        }
    }

    // loop(i,0,n+1)cout<<dis[i]<<" ";

    // cout<<dis[n]<<endl;

    if(dis[n]==LLONG_MAX){
        cout<<"-1"<<endl;
        return;
    }
    ll x = n;
    vll ans;
    ans.pb(n);
    while(x!=1){
        x = st[x];
        ans.pb(x);
    }
    
    rev(i,0,ans.size())cout<<ans[i]<<" "; cout<<endl;

}


int main(){
    fast;
    // seive();
    // factorial();
    

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    ll ttcc = 1;
    // cin>>ttcc;
    ll test_case=0;
    while(ttcc--){
        harsh_op(test_case);
        test_case++;
    }

}
