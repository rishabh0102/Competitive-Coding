#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n, x, y;
	int lex = 0;
	cin >> n >> x >>y;
	int arr[n];
	for(int i = 0; i<n;i++){
	    cin >> arr[i];
	    if(arr[i] <=x){
	        lex++;
	    }
	}
	if(x > y){
	    cout << n << endl;
	}
	else {
	    cout << lex/2 + lex%2 << endl;
	}
	return 0;
}