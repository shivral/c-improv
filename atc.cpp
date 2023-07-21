#include<bits/stdc++.h>
using namespace std;
#define int long long
#define double long double
#define all(x) begin(x), end(x)
typedef pair<int,int> pii;
int32_t mod = 1e9+7;
int mn;
bool dfs(int n, vector<int>& dp, vector<int>& s){
	//cout << n << endl;
	if(n<mn){return false;}
	if(dp[n]!=-1){return dp[n];}
	for(int i=0;i<s.size();i++){
		if(n-s[i]>=0 && !dfs(n-s[i],dp,s)){return true;}
	}
	return false;
}


void manacled(){
	int n,m;
	cin >> n >> m;
	vector<int> a(n);
  mn=INT_MAX;
	for(int &i:a){cin >> i;mn=min(mn,i);}
	vector<int> dp(m+1,-1);
	if(dfs(m,dp,a)){cout << "First" << endl;}
	else{cout << "Second" << endl;}
	return;
}
 
int32_t main(){
    ios::sync_with_stdio(false), cin.tie(NULL);
    int t;
    t = 1;
    //cin >> t;
    while (t--)  manacled();
}
