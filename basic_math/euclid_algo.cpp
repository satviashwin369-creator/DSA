#include <bits/stdc++.h>
using namespace std;

void findGCD (int a, int b) {

    int gcd = 1;

    while (a > 0 && b > 0) { // TC = O(log(min(a,b)))

        if (a > b) a = a % b;
        else b = b % a;

    }

    if (a == 0) cout << "gcd is : " <<  b;
    else cout <<"gcd is : " << a;
    
}

int main(){

    int a;
    cout << "Enter a no : "; 
    cin >> a;

    int b;
    cout << "Enter a no : "; 
    cin >> b;

    findGCD(a, b);

    return 0;
}