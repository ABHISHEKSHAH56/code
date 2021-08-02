#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define M1 1000000007
#define M2 998244353
#define ll long long
#define ld long double
#define pll pair<ll,ll>
#define REP(i,a,b) for(ll i=a;i<b;i++)
#define REPI(i,a,b) for(ll i=b-1;i>=a;i--)
#define F first
#define S second
#define PB push_back
#define DB pop_back
#define MP make_pair
#define MT make_tuple
#define G(a,b) get<a>(b)
#define V(a) vector<a>
static mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

template<typename T>
#define o_set(T) tree<T, null_type,less<T>, rb_tree_tag,tree_order_statistics_node_update>
//member functions :
//1. order_of_key(k) : number of elements strictly lesser than k
//2. find_by_order(k) : k-th element in the set

//knive algorithm
// bool isprime(int n)
// {
// 	for (int i = 2; i < n-1; ++i)
// 	{
// 		if(n%i==0) return false;

// 	}
// 	return true ;
// 	//O(n)
// }

/*square root method*******/

// bool isprime(int n)
// {
// 	for (int i = 2; i*i <n; ++i)
// 	{
// 		if(n%i==0) return false;

// 	}
// 	return true ;
// 	//O(n)
// }

//o(n^1/2)


//sieve of eratosthenes
//O(nlog(log(n))) by using pre process O(1)

// bool isprime(int n)
// {
// 	bool prime[n+1]={true};
// 		prime[1]=false;


// 	for (int i = 2; i < n; ++i)
// 	{
// 		if(prime[i]) 
// 		{
// 			for (int j = 2*i; j <n ; j+=i)
// 			{
// 				prime[j]=false;
// 			}
// 		}


// 	}
	
// }

//fermat's test
//1--select a from range [2,n-1]
//2 check gcd(a,n)=1 ,else composite
//3 check a^n-1 %n=1, else composite 
//but its fail some time 

//miller robbin also fail some time have prob 
//miller robin determinstic fantastic algo 
//--O(log(N^2)log (n))




bool isprime(ll n)
{
    if(n<2)
        return false;
    for(ll x:{2,3,5,7,11,13,17,19,23,29,31,37})
    {
        if(n==x)
            return true;
        bool flag=true;
        ll r=1;
        ll t=1;
        while(r<=((n-1)>>__builtin_ctzll(n-1)))
        {
            if(r&((n-1)>>__builtin_ctzll(n-1)))
                t=((__int128)t*x)%n;
            x=((__int128)x*x)%n;
            r<<=1;
        }
        if(t==1||t==n-1)
            flag=false;
        for(r=0;r<__builtin_ctzll(n-1);r++)
        {
            t=((__int128)t*t)%n;
            if(t==n-1)
                flag=false;
        }
        if(flag)
            return false;
    }
    return true;
}



























int main()
{
	int n;
	cin>>n;
	cout<<isprime(n)<<endl;
}