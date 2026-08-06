#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout << "Enter a no : "; 
    cin >> n;
    
    int revNo = 0;
    int dup = n;

    while (n > 0) {
        int last_digit = n % 10;
        revNo  = (revNo * 10) + last_digit;
        n = n / 10;
    }
    
    if (dup == revNo) cout <<"its a palindrome no" ;
    else cout << "not a palindrome" ;
    
    return 0;
}