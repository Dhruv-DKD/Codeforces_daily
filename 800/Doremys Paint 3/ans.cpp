#include<bits/stdc++.h>
using namespace std;

void doremysPaint3(vector<int> arr, int n){
  if(n == 1 || n == 2){
    cout << "YES" << endl;
    return;
  }

  map<int,int> mpp;
  set<int> st(arr.begin() , arr.end());
  for(int i=0; i<n; i++){
    mpp[arr[i]]++;
  }

  if(mpp.size() == 1) {
    cout << "YES" << endl;
  }else if(mpp.size() == 2){
    vector<int> freq;
    for(auto it : mpp){
      freq.push_back(it.second);
    }

    int ans = abs(freq[0] - freq[1]);
    if(ans <= 1){
      cout << "YES" << endl;
    }else{
      cout << "NO" << endl;
    }
  }else{
    cout << "NO" << endl;
  }
  return;
}

int main(){
  int t;
  cin >> t;

  for(int i=0; i<t; i++){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int j=0; j<n; j++){
      cin >> arr[j];
    }

    doremysPaint3(arr,n);
  }
}