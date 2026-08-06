#include <iostream>
using namespace std;

int main() {

    int n;
    cout << " Enter size of array : " ;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int hash[13] = {0};   //   precompute
    
    for (int i = 0; i < n; i++) {
        hash[arr[i]] += 1;
    }

    int q;
    cout << "Enter no of queries : ";
    cin >> q;

    while (q--) {

        int num;
        cin >> num;
        cout << hash[num] << endl;  //  fetching

    }

}