#include<bits/stdc++.h>
using namespace std;

void gameWithIntegers(int a){
  if(a%3 == 0){
    cout << "Second" << endl;
  }else{
    cout << "First" << endl;
  }
}

int main(){
  int t;
  cin >> t;
  for(int i=0; i<t; i++){
    int a;
    cin >> a;

    gameWithIntegers(a);
  }
}