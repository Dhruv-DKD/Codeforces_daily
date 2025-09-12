#include<bits/stdc++.h>
using namespace std;

int lineTrip(int n, int x, vector<int> arr){
  int ans = INT_MIN;
  int ptr = 0;
  for(int i=0; i<n; i++){
    ans = max(arr[i] - ptr , ans);
    ptr = arr[i];
  }
  ans = max(ans , 2*(x-arr[n-1]));
  return ans;
}

int main(){
  int t;
  cin >> t;

  for(int i=0; i<t; i++){
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for(int j=0; j<n; j++){
      cin >> arr[j];
    }
    int ans = lineTrip(n, x, arr);
    cout << ans << endl;
  }
}