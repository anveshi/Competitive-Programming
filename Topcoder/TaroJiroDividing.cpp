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
#define LL long long int
#define pb push_back
#define mp make_pair

using namespace std;


class TaroJiroDividing {
public:
	int getNumber(int A, int B) {
	map <int,int> x;
	x.clear();
	while(1){
		x[A]=1;
		if(A%2==0)
		A/=2;
		else break;
	}
	int cnt=0;
	while(1){
		if(x[B])cnt++;
		if(B%2==0)
		B/=2;
		else break;
	}
	return cnt;
	}
};


// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, int p0, int p1, bool hasAnswer, int p2) {
	cout << "Test " << testNum << ": [" << p0 << "," << p1;
	cout << "]" << endl;
	TaroJiroDividing *obj;
	int answer;
	obj = new TaroJiroDividing();
	clock_t startTime = clock();
	answer = obj->getNumber(p0, p1);
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
	
	int p0;
	int p1;
	int p2;
	
	{
	// ----- test 0 -----
	p0 = 8;
	p1 = 4;
	p2 = 3;
	all_right = KawigiEdit_RunTest(0, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	p0 = 4;
	p1 = 7;
	p2 = 0;
	all_right = KawigiEdit_RunTest(1, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	p0 = 12;
	p1 = 12;
	p2 = 3;
	all_right = KawigiEdit_RunTest(2, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	p0 = 24;
	p1 = 96;
	p2 = 4;
	all_right = KawigiEdit_RunTest(3, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	p0 = 1000000000;
	p1 = 999999999;
	p2 = 0;
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
// The dividing game is played as follows:
// You start by taking a clean sheet of paper and writing down some positive integer.
// Then you repeat the following process:
// Let X be the last integer you wrote.
// If X is odd, the game ends.
// Otherwise, divide X by 2 and write down the result.
// 
// 
// 
// 
// For example, if you start the game by writing 12 you will then write 12/2 = 6, followed by 6/2 = 3, and as 3 is odd, the game ends there.
// Your paper now contains the numbers 12, 6, and 3.
// 
// 
// 
// 
// Cat Taro has just played the game starting with the integer A.
// Jiro has also played the game but he started with the integer B.
// You are given the ints A and B.
// Return the number of integers that were written both by Taro and by Jiro.
// 
// 
// DEFINITION
// Class:TaroJiroDividing
// Method:getNumber
// Parameters:int, int
// Returns:int
// Method signature:int getNumber(int A, int B)
// 
// 
// CONSTRAINTS
// -A and B will be between 1 and 1,000,000,000, inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// 8
// 4
// 
// Returns: 3
// 
// Taro will write the integers {8,4,2,1}. Jiro will write {4,2,1}. The three integers written by both of them are 4, 2, and 1.
// 
// 1)
// 4
// 7
// 
// Returns: 0
// 
// 
// 
// 2)
// 12
// 12
// 
// Returns: 3
// 
// 
// 
// 3)
// 24
// 96
// 
// Returns: 4
// 
// 
// 
// 4)
// 1000000000
// 999999999
// 
// Returns: 0
// 
// 
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
