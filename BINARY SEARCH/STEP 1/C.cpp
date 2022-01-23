//iRatherFear
#include<iostream>
using namespace std;

const int N = 100010;
int arr[N];
int n;

int closesestRight(int x){
	int l = -1, r = n;
	
	while(l + 1 < r){
		int mid = l + (r - l)/ 2;
		if(arr[mid] >= x){
			r = mid;
		} else{
			l = mid;
		}
	}
	
	return r + 1;
}

int main(){
	int q; cin >> n >> q;
	
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	
	for(int i = 0; i < q; i++){
		int x; cin >> x;
		int val = closesestRight(x);
		cout << val << endl;
	}
}
