#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  vector< vector<int> > v(n,vector<int>(n));

  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        cin>>v[i][j];
    }
  }
  int sum1=0, sum2=0;
  for(int i=0; i<n; i++){
     sum1 = sum1 + v[i][i];
  }

  int r=n-1,c=0;
  while(r>=0 && c<n){
        sum2  = sum2+v[r][c];
    r--;
    c++;
  }
  cout<<abs(sum1-sum2);
 return 0;
}
