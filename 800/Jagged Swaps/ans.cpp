#include<bits/stdc++.h>
using namespace std;

void jaggedSwaps(vector<int> arr, int n){
  if(arr[0] == 1) cout << "YES" << endl;
  else cout << "NO" << endl;
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

    jaggedSwaps(arr,n);
  }
}