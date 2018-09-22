#include<bits/stdc++.h>
using namespace std;

int simpleArraySum(int a, vector <int> arr){
    int sum = 0;
     for(int i=0; i<a; i++){
        sum = sum + arr[i];
     }
     return sum;
}
int main(){
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int result = simpleArraySum(n, arr);
    cout<<result<<endl;
  return 0;
}
