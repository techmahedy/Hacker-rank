#include <bits/stdc++.h>
using namespace std;

long aVeryBigSum(int n, vector <long> ar) {
    long sum = 0;
   for(int i=0; i<n; i++){
    sum = sum + ar[i];
   }
   return sum;
}

int main() {
    int n;
    cin >> n;
    vector<long> ar(n);
    for(int i = 0; i < n; i++){
       cin >> ar[i];
    }
    long result = aVeryBigSum(n, ar);
    cout << result << endl;
    return 0;
}
