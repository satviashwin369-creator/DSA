#include <bits/stdc++.h>
using namespace std;

int count (int n){

    int revNo = 0;
    while (n > 0) {
        int last_digit = n % 10;
        revNo  = (revNo * 10) + last_digit;
        n = n / 10;
    }
    return revNo;
}

int main(){

    int n;
    cout << "Enter a no : "; 
    cin >> n;
    cout << "Reverse of digits " << n << " = " << count(n);
    
    return 0;
}