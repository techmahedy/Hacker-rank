#include<bits/stdc++.h>
using namespace std;

int birthdayCakeCandles(int n, vector <int> ar) {
     int counter=0,max_value,a[n];
     a[0] = {0};
     for(int i=0; i<n; i++){
        if(a[0] < ar[i])
            a[0] = ar[i];
     }
     max_value = a[0];
     for(int i=0; i<n; i++){
        if(ar[i] == max_value)
            counter++;
     }
     return counter;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = birthdayCakeCandles(n, ar);
    cout<<result<<endl;
    return 0;
}
