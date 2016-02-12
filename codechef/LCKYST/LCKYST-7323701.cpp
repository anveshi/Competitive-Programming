#include <bits/stdc++.h>
#define O(x) cout << x << endl
using namespace std;
int a[123456];
int Nos(int a,int b){
	if(a%b!=0)
		return 0;
	else 
		return Nos(a/b,b)+1;
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		int p2 = Nos(a[i],2);
		int p5 = Nos(a[i],5);
    if(p2<p5){
      a[i]<<=(p5-p2);
      if((p5-p2)&1)
        a[i]<<=1;
    }
		O(a[i]);
	}
	return 0;
}