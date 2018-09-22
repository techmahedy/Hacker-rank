#include <bits/stdc++.h>

using namespace std;

vector < int > solve(vector < int > grade){
    vector <int> multiply;
    vector <int> grace;
    int sum = 35;
    for(int i=0; i<13; i=i++){
        sum = sum+5;
        multiply.push_back(sum);
    }
    int i = 0;
    start:
    while(i<grade.size()){
      for(int j=0; j<multiply.size(); j++){
          if(multiply[j] > grade[i])
            grace.push_back (multiply[j]);
           i++;
          goto start;
       }
    }
    for(int i=0; i<grace.size(); i++){
        cout<<grace[i]<<" ";
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> grade(n);

    for(int i = 0; i < n; i++){
       cin >> grade[i];
    }
    vector < int > result = solve(grade);

    return 0;
}
