#include <bits/stdc++.h>
using namespace std;

void checkPrime (int n) {

    int count = 0;

    for (int i = 1; i <= n; i++) {  // brute force , TC = O(n)
        if (n % i == 0)
            count++;
    }

    if (count == 2) {
        cout << "no is prime";
        }
    else {
        cout << "not prime";
        }
    
}

int main(){

    int n;
    cout << "Enter a no : "; 
    cin >> n;

    checkPrime(n);

    return 0;
}