#include<stdio.h>
int main() {

	int size, i;
	scanf("%d", &size);

	int sumU=0, sumD=0;
	int weHavePair = 0;
	int domino[101][2];

	for(i=0;i<size;i++) {
		scanf("%d%d", &domino[i][0], &domino[i][1]);
		if((domino[i][0] + domino[i][1])%2==1) weHavePair = 1;
		sumU+=domino[i][0];
		sumD+=domino[i][1];
	}

	if(sumU%2==0 && sumD%2==0) printf("0\n");
	else if(sumU%2==1 && sumD%2==1 && weHavePair) printf("1\n");
	else printf("-1\n");

	return 0;
}