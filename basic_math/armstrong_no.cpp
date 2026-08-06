#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout << "Enter a no : "; 
    cin >> n;
    
    int sum = 0;
    int dup = n;

    while (n > 0) {
        int last_digit = n % 10;
        sum  = sum + (last_digit * last_digit * last_digit) ;
        n = n / 10;
    }
    
    if (dup == sum) cout << "true" ;
    else cout << "false" ;
    
    return 0;
}