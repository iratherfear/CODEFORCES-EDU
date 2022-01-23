//iRatherFear
#include<iostream>
#include<algorithm>
using namespace std;

const int N = 100010;
int arr[N];
int n;

int greaterThanX(int x){
	int left = -1, right = n;
	
	while(left + 1 < right){
		int mid = left + (right - left)/ 2;
		if(arr[mid] > x){
			right = mid;
		} else{
			left = mid;
		}
	}
	
	return right;
}

int smallerThanX(int x){
	int left = -1, right = n;
	
	while(left + 1 < right){
		int mid = left + (right - left)/ 2;
		if(arr[mid] < x){
			left = mid;
		} else{
			right = mid;
		}
	}
	
	return left;
}

int main(){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	
	sort(arr, arr + n);
	
	int q; cin >> q;
	for(int i = 0; i < q; i++){
		int l, r; cin >> l >> r;
		int left = smallerThanX(l), right = greaterThanX(r);

		int ans = right - left - 1;
		cout << ans << " ";
	}
}
