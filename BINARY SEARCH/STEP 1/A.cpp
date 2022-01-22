// iRatherFear
#include<iostream>
using namespace std;

const int N = 100010;
int arr[N];
int n;

bool findx(int x){
	
	int l = -1, r = n;
	while(l + 1 < r){
		int mid = l + (r - l)/ 2;
		if(arr[mid] >= x){
			r = mid;
		} else{
			l = mid;
		}
	}
	
	return arr[r] == x;
}

int main(){
	cin >> n;
	int query; cin >> query;
	
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	
	for(int i = 0; i < query; i++){
		int x; cin >> x;
		
		if(findx(x)){
			cout << "YES";
		} else{
			cout << "NO";
		}
		cout << endl;
	}
}
