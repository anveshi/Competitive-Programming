#include<bits/stdc++.h>
using namespace std;
ifstream fin ("input.txt");
ofstream fout ("output.txt"); //fin fout

int main()
{
	int n,m,i;
	fin >> n >> m;
	if(n>=m)
	{
		for(i=0;i<m;i++)fout << "BG";
		for(i=0;i<n-m;i++)fout << "B";
		fout << endl;

	}
	else{
		for(i=0;i<n;i++)fout << "GB" ;
		for(i=0;i<m-n;i++)fout << "G";
		fout << endl;
	}
}