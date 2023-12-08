#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
typedef vector<int > vi;
typedef vector<vector<int>> vvi;
typedef vector<long long> vll;
typedef pair<int,int> pii;
typedef pair<long long,long long > pll;
typedef vector<pair<ll,ll>> vpll;
#define fr(i,n,a) for(int i=a; i<n; i++)
#define ufr(i,n,a) for(long long i=n-1; i>=a; i--)
#define vin(v) int n; cin>>n;vector<int>v; for(int i=0;i<n;i++){int x; cin>>x; v.push_back(x);}  
#define ain(a) int n; cin>>n; ll a[]; for(int i=0;i<n;i++){cin>>a[i];}
#define vout(v) for(auto &e:v){cout<<e<<" ";} cout<<endl;
#define mout(mp) for(auto &e:mp){cout<<e.first<<" "<<e.second;} cout<<endl;
#define mvout(mp) for(auto &e:mp){for(long long i =0 ; i<(e.second).size();i++){cout<<(e.second)[i];}} cout<<endl;
#define Sort(a) sort(a.begin(),a.end())
#define Sorta(a,n) sort(a,a+n)
#define pb push_back 
#define F first
#define S second 
const ll M = 1000000000+7;
 
 
 

ll test =0;

int rann(int lb ,int ub){
	//srand((unsigned) time(NULL));

		// Retrieve a random number between 100 and 200
		// Offset = 100
		// Range = 101
	srand(time(0)); 
    int random = (rand() % (ub - lb + 1)) + lb;

		// Print the random number
	//int random = (rand() % (ub - lb + 1)) + lb;
	return random;
}

 
void ranloop(int r , int lb , int ub){
	//srand(time(0)); 
	fr(i,r,0){
		cout<<(rand() % (ub - lb + 1)) + lb<<" ";
	}
	cout<<"\n";
}
void ranpair(int r ,int lb ,int ub){
	srand(time(0)); 
	fr(i,r,0){
		cout<<(rand() % (ub - lb + 1)) + lb<<" "<<(rand() % (ub - lb + 1)) + lb<<"\n";
	}
	cout<<"\n";

}
void ranchar(int r){
	int ub =122;
	int lb =97;
	//65-->90-->>uppercase;
	//97-->122-->>lowercase;
	//48-->57-->integer;


	fr(i,r,0){
		cout<<char((rand() % (ub - lb + 1)) + lb);
	}
	cout<<"\n";
}

    
 
void solve(){
	cout<<rann(100,200)<<"\n";
	fr(i,3,0){
		//srand(time(0)); 
		ranloop(100,100,200);

	}
	
	ranpair(100,100 ,200);
	//ranchar(6);


	


}
int main(){
	//srand((unsigned) time(NULL));
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--){
        test++;
        solve();
    }
 
}  