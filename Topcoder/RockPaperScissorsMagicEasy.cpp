#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string.h>
#define LL long long int
#define pb push_back
#define mp make_pair
const LL mod = 1000000007;
using namespace std;
LL dp[2002][2002];
LL c(LL n,LL r){
	if(r<0 || r>n)return 0;
	if(n==r || n==0)return 1;
	if(dp[n][r]!=-1)return dp[n][r];
	else return dp[n][r]=(c(n-1,r-1) + c(n-1,r))%mod;
}
LL p(LL x){
	LL ret =1;
	while(x>0){
	ret*=2;
	ret%=mod;
	x--;
	}
	return ret;
}
class RockPaperScissorsMagicEasy {
public:
	int count(vector <int> card, int score) {
		memset(dp,-1,sizeof(dp));
		LL n,r,a2,a1;
		n = card.size();r = score;
		a1=c(n,r);	
		a2=p(n-r);
		//cout<<a1<< " " <<a2<< endl;
		return (a1*a2)%mod;
	}
};


// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, vector <int> p0, int p1, bool hasAnswer, int p2) {
	cout << "Test " << testNum << ": [" << "{";
	for (int i = 0; int(p0.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p0[i];
	}
	cout << "}" << "," << p1;
	cout << "]" << endl;
	RockPaperScissorsMagicEasy *obj;
	int answer;
	obj = new RockPaperScissorsMagicEasy();
	clock_t startTime = clock();
	answer = obj->count(p0, p1);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << p2 << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << answer << endl;
	if (hasAnswer) {
		res = answer == p2;
	}
	if (!res) {
		cout << "DOESN'T MATCH!!!!" << endl;
	} else if (double(endTime - startTime) / CLOCKS_PER_SEC >= 2) {
		cout << "FAIL the timeout" << endl;
		res = false;
	} else if (hasAnswer) {
		cout << "Match :-)" << endl;
	} else {
		cout << "OK, but is it right?" << endl;
	}
	cout << "" << endl;
	return res;
}
int main() {
	bool all_right;
	all_right = true;
	
	vector <int> p0;
	int p1;
	int p2;
	
	{
	// ----- test 0 -----
	int t0[] = {0,1,2};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 2;
	p2 = 6;
	all_right = KawigiEdit_RunTest(0, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	int t0[] = {1,2};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 0;
	p2 = 4;
	all_right = KawigiEdit_RunTest(1, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	int t0[] = {2,2,1,0,0};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 10;
	p2 = 0;
	all_right = KawigiEdit_RunTest(2, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	int t0[] = {0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 7;
	p2 = 286226628;
	all_right = KawigiEdit_RunTest(3, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	int t0[] = {0,1,2,0,1,2,2,1,0};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 8;
	p2 = 18;
	all_right = KawigiEdit_RunTest(4, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	if (all_right) {
		cout << "You're a stud (at least on the example cases)!" << endl;
	} else {
		cout << "Some of the test cases had errors." << endl;
	}
	return 0;
}
// PROBLEM STATEMENT
// 
// Alice and Bob are going to play a variant of the traditional rock-paper-scissors game.
// Their game is played using cards.
// Each card shows one of the three pictures: a rock, a paper, or scissors.
// There is a sufficient supply of cards of each type.
// Bob has already chosen a sequence of cards and he has arranged them into a row, face down.
// It is now Alice's turn to do the same.
// Once she does that, they will use the two sequences of cards to play the game:
// For each i, Alice's i-th card and Bob's i-th card will be revealed and compared using the standard rules of rock-paper-scissors.
// Whenever Alice's card wins, Alice gets a point.
// Alice gets no points for a loss or a tie.
// 
// 
// 
// Alice has marked Bob's cards, so now she can tell which card has which symbol on it.
// You are given this information as a vector <int> card.
// Each element of card is between 0 and 2, inclusive: 0 is a rock, 1 is a paper, and 2 are scissors.
// 
// 
// 
// You are also given an int score.
// Alice has just announced that she will get a total of score points.
// 
// 
// 
// Let X be the number of sequences in which Alice can play her cards if she wants to achieve exactly score points.
// Return the value (X modulo 1,000,000,007).
// 
// 
// DEFINITION
// Class:RockPaperScissorsMagicEasy
// Method:count
// Parameters:vector <int>, int
// Returns:int
// Method signature:int count(vector <int> card, int score)
// 
// 
// CONSTRAINTS
// -The number of elements in card will be between 1 and 2,000, inclusive.
// -All elements of card will be between 0 and 2, inclusive.
// -score will be between 0 and 2,000, inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// {0,1,2}
// 2
// 
// Returns: 6
// 
// 
// Bob has played his cards in the order rock-paper-scissors.
// Alice wants to score 2 points.
// Hence, she must win twice, and lose to Bob or tie him once.
// 
// 
// 
// One possible way in which she can play her cards is paper-scissors-scissors:
// her paper beats Bob's rock (1 point), scissors beat paper (1 point), and scissors tie with scissors (0 points).
// 
// 
// 
// There are five other ways how Alice can score 2 points: paper-scissors-paper, paper-paper-rock, paper-rock-rock, rock-scissors-rock, and scissors-scissors-rock.
// 
// 
// 1)
// {1,2}
// 0
// 
// Returns: 4
// 
// 
// 
// 2)
// {2,2,1,0,0}
// 10
// 
// Returns: 0
// 
// 
// 
// 3)
// {0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2}
// 7
// 
// Returns: 286226628
// 
// 
// 
// 4)
// {0,1,2,0,1,2,2,1,0}
// 8
// 
// Returns: 18
// 
// 
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!