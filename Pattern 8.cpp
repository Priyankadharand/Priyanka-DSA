#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"";
    cin >> n;
    
    
    for(int i=1; i<=n; ++i){
        for(int j=1; j<=i; ++j){
            cout<<"*";
        }
        cout<<endl;
    }
	// your code goes here
    return 0;
}
