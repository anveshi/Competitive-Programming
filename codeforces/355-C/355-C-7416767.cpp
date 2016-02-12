#include <bits/stdc++.h>

using namespace std;

int main() {

	int n, l, r, ql, qr, answer;
	scanf("%d%d%d%d%d", &n, &l, &r, &ql, &qr);

	int array[n+1]; // from 1 to n

	for(int i=1;i<n+1;i++)
		scanf("%d", array+i);

	int prefixsum[n+2], suffixsum[n+2], sum = 0;
	prefixsum[0]=0;
	suffixsum[n+1]=0;
	
	for(int i=1;i<=n;i++) {
		prefixsum[i]=prefixsum[i-1]+array[i];
		sum = sum + array[i];
	}
	
	for(int i=n;i>0;i--) {
		if(i==n) suffixsum[n]=array[n];
		else suffixsum[i]=suffixsum[i+1]+array[i];
	}

	for(int i=0;i<=n;i++) {
		int thisAnswer = 0;
		thisAnswer = (prefixsum[i]*l)+(suffixsum[i+1]*r);
		int penalty = 0;
		int leftCount = i;
		int rightCount = n-i;

		if(leftCount>rightCount) leftCount--;
		if(rightCount>leftCount) rightCount--;

		if(leftCount==rightCount) {
			penalty==0;
		} else if(leftCount > rightCount) {
			penalty = ql * (leftCount-rightCount);
		} else {
			penalty = qr * (rightCount - leftCount);
		}
		thisAnswer+=penalty;
		if(i==0) {
			answer = thisAnswer;
		} else {
			answer = min(thisAnswer, answer);
		}
	}

	printf("%d\n", answer);

	return 0;
}