#include <bits/stdc++.h>
using namespace std;
string str;
string findMax(int m,int s){
	if(m<=0)return str;
	else if(s>9*m||s<0)return "-1";
	else if(s>=9){
		str+="9";s-=9;
	}
	else if(s>0)
		str+=(char)(48+s),s=0;
	else 
		str+="0";
	return findMax(m-1,s);
}
string findMin(string s){
	if(s=="-1")return s;
	else{
		reverse(s.begin(),s.end());
		if(s[0]!='0')return s;
		else{
			s[0]='1';
			for(int i=1;i<s.length();i++){
				if(s[i]!='0'){
					s[i]=s[i]-1;
					return s;
				}
			}
		}
	}

}
int main(){
	int m,s;
	cin >> m  >> s;
	str =  "";
	string Minimum,Maximum;
	if(s!=0){
		Maximum = findMax(m,s);
		Minimum = findMin(Maximum);
	}
	if(m==1 && s==0)Maximum=Minimum="0";
	else if(m>1 && s==0)Maximum=Minimum="-1";
	cout<<Minimum<<" "<<Maximum<<endl;
	return 0;
}