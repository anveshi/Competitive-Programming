#include<iostream>
#define O(a) cout<<a<< endl
int a2[]={2,4,8,6},a3[]={3,9,7,1},a7[]={7,9,3,1},a8[]={8,4,2,6};using namespace std;
int main(){long long t,a,b;cin>>t;while(t--){cin>>a>>b;a%=10;if(!b){O(1);continue;}if(a==0||a==1||a==5||a==6)O(a);else{if(a==4){b&1?O(4):O(6);}else if(a==9){b&1?O(9):O(1);
}else{if(a==2)O(a2[(b+3)%4]);else if(a==3)O(a3[(b+3)%4]);else if(a==7)O(a7[(b+3)%4]);else O(a8[(b+3)%4]);}}}return 0;}
