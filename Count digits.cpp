
#include <iostream>
using namespace std;

int countDigits(int n) {
    int count = 0;
    while (n > 0) {
        n /= 10; // Remove the last digit
        count++;
    }
    return count;
}

int main() {
    int n;
    cout << "";
    cin >> n;
    
    cout << "" << countDigits(n) << endl;
    return 0;
}