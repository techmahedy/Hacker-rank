#include<bits/stdc++.h>
using namespace std;
vector <int> solve(int a0, int a1, int a2, int b0, int b1, int b2)
{

        int alice = ((a0 > b0)?1:0) + ((a1>b1)?1:0) + ((a2>b2)?1:0);
        int bob = ((a0 < b0)?1:0) + ((a1<b1)?1:0) + ((a2<b2)?1:0);

        vector <int> v;
        v.push_back(alice);
        v.push_back(bob);

       return v;
}
int main(){

    int a0,a1,a2;
    cin>>a0>>a1>>a2;
    int b0,b1,b2;
    cin>>b0>>b1>>b2;
    vector <int> result = solve(a0,a1,a2,b0,b1,b2);
    cout<<result[0]<<" "<<result[1];

 return 0;
}

