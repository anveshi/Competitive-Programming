#include<bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	char str[n][n+1];
	for(int i=0;i<n;i++) cin >> str[i];
	int m=n;
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			if(str[i][j]=='#') {
				bool isOkay = false;

				if(j+1<m && str[i][j+1]=='#' && j+2<m && str[i][j+2]=='#' \
				&& i-1>=0 && str[i-1][j+1]=='#' && i+1<m && str[i+1][j+1]=='#') {
					str[i][j]='.';
					str[i][j+1]='.';
					str[i][j+2]='.';
					str[i-1][j+1]='.';
					str[i+1][j+1]='.';
					isOkay = true;
				}

				if(j+1<m && str[i][j+1]=='#' && j-1>=0 && str[i][j-1]=='#' \
				&& i-1>=0 && str[i-1][j]=='#' && i+1<m && str[i+1][j]=='#') {
					str[i][j]='.';
					str[i][j+1]='.';
					str[i][j-1]='.';
					str[i-1][j]='.';
					str[i+1][j]='.';
					isOkay = true;
				}


				if(j-1>=0 && str[i][j-1]=='#' && j-2>=0 && str[i][j-2]=='#' \
				&& i-1>=0 && str[i-1][j-1]=='#' && i+1<m && str[i+1][j-1]=='#') {
					str[i][j-1]='.';
					str[i][j-2]='.';
					str[i][j]='.';
					str[i-1][j-1]='.';
					str[i+1][j-1]='.';
					isOkay = true;
				}

				if(j+1<m && i+1<m && str[i+1][j+1]=='#' && j-1>=0 && str[i+1][j-1]=='#' \
				&& str[i+1][j]=='#' && i+2<m && str[i+2][j]=='#') {
					str[i+1][j+1]='.';
					str[i+1][j-1]='.';
					str[i+1][j]='.';
					str[i][j]='.';
					str[i+2][j]='.';
					isOkay = true;
				}

				if(i-2>=0 && j-1>=0 && j+1<m && str[i-1][j]=='#' && str[i-2][j]=='#' \
				&& str[i-1][j-1]=='#' && str[i-1][j+1]=='#') {
					str[i-1][j]='.';
					str[i][j]='.';
					str[i-2][j]='.';
					str[i-1][j-1]='.';
					str[i-1][j+1]='.';
					isOkay = true;
				}

				if(isOkay==false) {
					cout << "NO" << endl;
					return 0;
				}
			}

		}
	}

	cout << "YES" << endl;
	return 0;
}