// Problem: C. Very Easy Task
// Contest: Codeforces - ITMO Academy: pilot course - Binary Search - Step 2
// URL: https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

//iRatherFear
#pragma GCC optimize(3, "Ofast", "inline")
#include<bits/stdc++.h>
#include<iostream>
#include<set>
#include<cstring>
#include<cmath>
#include<vector>
#define endl '\n'
#define c1(x) cout << x << endl;
#define c2(x, y) cout << x << ' ' << y << endl;
#define c3(x, y, z) cout << x << ' ' << y << ' ' << z << endl;
#define kMod 1000000007
#define INF 1e9
#define loop(i, a, b) for(int i = a; i < b; i++)
#define frl(n) for(int i = 0; i < n; i++)
/*--------------------stl----------------------------------------------*/
#define int long long int
#define umap unordered_map
#define vec(x) vector<x> 
#define vi vector<int>
#define vb vector<bool>
#define vc vector<char>
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define vvb vector<vector<bool>> 
#define vpi vector<pair<int, int>> 
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define pi pair<int, int>
#define pb push_back
#define setbits(x) __builtin_popcountll(x)
#define sumv(v) accumulate(all(v), 0)
#define maxv(v) *max_element(all(v))
using namespace std;
#define rng(x) x.begin(), x.end()
#define pb push_back
#define F first
#define S second
#define SZ(x) ((int)(x).size()) 
template<typename T>
istream&operator>>(istream&is,vector<T>&v){for(auto&it:v)is>>it;return is;}
template<class L, class R> ostream& operator<<(ostream &os, pair<L,R> P) {
    return os << "(" << P.F << "," << P.S << ")"; }
template<class T> ostream& operator<<(ostream &os, vector<T> V) {
    os << "[ "; for(auto v : V) os << v << " "; return os << "]"; }
template<class T> ostream& operator<<(ostream &os, set<T> S){
    os << "{ "; for(auto s:S) os<<s<<" "; return os<<"}"; }
#ifndef ONLINE_JUDGE 
#define db(...) __f(#__VA_ARGS__, __VA_ARGS__)
#else
#define db(...)
#endif
template <typename Arg1>
void __f(const char* name, Arg1&& arg1) { cerr<<name<<" : "<<arg1<<'\n';}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args) {
    const char* comma = strchr(names + 1, ',');
    cerr.write(names,comma-names)<<" : "<<arg1<<" |";__f(comma+1, args...);}
// vector<int> v;inline bool read(int n) {a.resize(n);for(int i = 0; i < n; i++)cin >> a[i];return true;}
int bitsn(int n){int bit = 0;while(n){n /= 2;bit++;}return bit;}
void maxi(int &a, int b){a = max(a, b);}
void mini(int &a, int b){a = min(a, b);}
void modi(int &n){n = (n % kMod);}
int sumn(int n){int s = 0;while(n){s += n % 10;n /= 10;}return s;}
int powre(int num, int pwr){if(pwr == 0){return 1;}int x = powre(num, pwr / 2);x = (x * x)% kMod;return pwr & 1? (x * num) % kMod: x;}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int n, x, y;

bool isPos(int time){
	return (time / x) + (time / y) >= n;
}

void solve(){
	cin >> n >> x >> y;
	
	if(n == 1){
		c1(min(x, y))
		return;
	}
	
	int l = 0, r = 1;
	int req = min(x, y);
	n--;
	
	while(isPos(r) == false){
		r *= 2;
	}
	
	while(l + 1 < r){
		int mid = l + (r - l)/ 2;
		if(isPos(mid)){
			r = mid;
		} else{
			l = mid;
		}
	}
	    
	c1(req + r)
}//Solve End

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int tt = 1;
    // cin >> tt;
    while(tt--){
        solve();
    }
}
