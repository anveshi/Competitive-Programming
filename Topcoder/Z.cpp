#include <bits/stdc++.h>
using namespace std;
class AB{
  public:
    string createString(int N,int K){
        int x;int y;
        string Ans="";
        for(x=0;x<=K;x++){
          for(y=0;y<=K;y++){
              if(x*y==K && x+y<=N){
                  for(int i=0;i<x;i++)Ans+="A";
                    for(int i=0;i<y;i++)Ans+="B";
                    while(Ans.length()!=N)Ans+="A";
                    return Ans;
                }
            }
        }
        return Ans;
    }
};
int main(){
  int x,y;
  AB Z;
  while(cin>> x>> y){
    cout << Z.createString(x,y) << endl;
  }
}