#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	if(n%4 == 0 || n%4 == 3){
	    cout << "0" <<endl;
	}
	else {
	    cout << "1"<<endl;
	}
	return 0;
	
}