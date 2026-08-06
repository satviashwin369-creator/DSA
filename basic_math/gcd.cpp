#include <bits/stdc++.h>
using namespace std;

void findGCD (int n1, int n2) {

    int gcd = 1;

    for (int i = 1; i <= min(n1, n2); i++) {  // brute force , TC = // TC = O((min(a,b))
        if (n1 % i == 0 && n2 % i == 0)  
        gcd = i; 
    }
    cout << "gcd is : " << gcd;
    
}

int main(){

    int n1;
    cout << "Enter a no : "; 
    cin >> n1;

    int n2;
    cout << "Enter a no : "; 
    cin >> n2;

    findGCD(n1, n2);

    return 0;
}