#include<bits/stdc++.h>
using namespace std;
map<pair<int, int>, double> memo;

double jugnu(int W, int B) {
	if (W <= 0) return 0;
	if (B <= 0) return 1;
	pair<int, int> args = make_pair(W, B);
	if (memo.find(args) != memo.end()) {
		return memo[args];
	}
	double ret = W * 1.0 / (W + B), cont_prob = B * 1.0 / (W + B);
	B--;
	cont_prob *= B * 1.0 / (W + B);
	B--;
	if (cont_prob > 1e-13) {
		double black = jugnu(W, B - 1) * (B * 1.0 / (W + B));
		double white = jugnu(W - 1, B) * (W * 1.0 / (W + B));
		ret += cont_prob * (black + white);
	}
	memo[args] = ret;
	return ret;
}

int main()
{
	int w,b;
	cin >> w >> b;
	printf("%0.10f\n",jugnu(w,b));
		return 0;
}