
#include <iostream>
using namespace std;

void printPattern(int n) {
    for (int i = 1; i <= n; i++) {  // Loop from 1 to n
        for (int j = 1; j <= i; j++) {  // Print 'i' i times
            cout << i << " ";
        }
        cout << endl;  // Move to the next line
    }
}

int main() {
    int n;
    cout << "";
    cin >> n;
    
    printPattern(n);
    
    return 0;
}