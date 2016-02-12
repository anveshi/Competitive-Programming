#include <bits/stdc++.h>
using namespace std;
int main(){
  for(int i=0;i<20;i++){
    cout << "\"";
    for(int j=0;j<20;j++){
      cout << (rand()%2);
    }
    cout << "\"\n";
  }
  return 0;
}