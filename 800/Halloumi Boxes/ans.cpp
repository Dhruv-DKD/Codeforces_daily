#include<bits/stdc++.h>
using namespace std;

void halloumiBoxes(int n, int k, vector<int> arr){
  vector<int> sortArr = arr;
  sort(sortArr.begin(), sortArr.end());
  if(k == 1){
    if(sortArr == arr) cout << "YES" << endl;
    else cout << "NO" << endl;
  }else{
    cout << "YES" << endl;
  }
}

int main(){
  int t;
  cin >> t;

  for(int i=0; i<t; i++){
    int n , k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int j=0; j<n; j++){
      cin >> arr[j];
    }
    halloumiBoxes(n,k,arr);
  }
}