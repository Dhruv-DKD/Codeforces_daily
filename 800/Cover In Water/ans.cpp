#include<bits/stdc++.h>
using namespace std;

int coverInWater(int n, string s){
  int ans = 0;
  int total = 0;
  for(int i=0; i<n; i++){
    if(s[i] == '#') continue;

    int cnt = 0;
    while(s[i] == '.'){
      cnt++; 
      i++;
      if(cnt > 2){
        return 2;
      }
    }
    total += cnt;
  }
  return total;
}

int main(){
  int t;
  cin >> t;

  for(int i=0; i<t; i++){
    string s;
    int n;
    cin >> n >> s;

    int ans = coverInWater(n,s);
    cout << ans << endl;
  }
}