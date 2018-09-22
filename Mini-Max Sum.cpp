   #include<bits/stdc++.h>
    using namespace std;
    int main(){
     long long int max_sum=0,max_value,min_value;
     int i;
     vector <long long int> arr(5);
     for(i=0; i<5; i++){
        cin>>arr[i];
     }

      for(i=0; i<5; i++){
        max_sum = max_sum+arr[i];
     }
     vector <long long int> v;
     for(i=0; i<5; i++){
         v.push_back(max_sum-arr[i]);
     }

     for(i=0; i<5; i++){
        if(v[0] < v[i])
            v[0] = v[i];
     }
         max_value = v[0];
      for(i=0; i<5; i++){
        if(v[0] > v[i])
            v[0] = v[i];
     }
         min_value = v[0];
    cout<<min_value<<" "<<max_value;
     return 0;
    }

