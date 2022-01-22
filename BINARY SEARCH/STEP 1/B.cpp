#include<iostream>
using namespace std;

const int N = 100010;
int arr[N];
int n;

//
int closesestLeft(int x){
	int l = -1, r = n;
	
	while(l + 1 < r){
		int mid = l + (r - l)/ 2;
		if(arr[mid] <= x){
			l = mid;
		} else{
			r = mid;
		}
	}
	
	return l + 1;
}

int main(){
	int q; cin >> n >> q;
	
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	
	for(int i = 0; i < q; i++){
		int x; cin >> x;
		int val = closesestLeft(x);
		cout << val << endl;
	}
}
