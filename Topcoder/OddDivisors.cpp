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


class OddDivisors {
public:
	unsigned long long findSum(LL N) {
		return F(N);
	}
	long long F(LL n){
		unsigned long long x;
		if(n<1)return n;
		if(n%2==0)
			return x=(n/2)*(n/2) + F(n/2);
		else return x=((n+1)/2)*((n+1)/2) + F((n-1)/2);
	}
};


// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, int p0, bool hasAnswer, long long p1) {
	cout << "Test " << testNum << ": [" << p0;
	cout << "]" << endl;
	OddDivisors *obj;
	long long answer;
	obj = new OddDivisors();
	clock_t startTime = clock();
	answer = obj->findSum(p0);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << p1 << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << answer << endl;
	if (hasAnswer) {
		res = answer == p1;
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
	long long p1;
	
	{
	// ----- test 0 -----
	p0 = 7;
	p1 = 21ll;
	all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	p0 = 1;
	p1 = 1ll;
	all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	p0 = 777;
	p1 = 201537ll;
	all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
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
// Let f(x) be the greatest odd divisor of x, where x is a positive integer.  You are given a positive integer N.  Return f(1)+f(2)+…+f(N).
// 
// 
// DEFINITION
// Class:OddDivisors
// Method:findSum
// Parameters:int
// Returns:long long
// Method signature:long long findSum(int N)
// 
// 
// CONSTRAINTS
// -N will be between 1 and 1000000000, inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// 7
// 
// Returns: 21
// 
// f(1)+f(2)+f(3)+f(4)+f(5)+f(6)+f(7)=1+1+3+1+5+3+7=21
// 
// 1)
// 1
// 
// Returns: 1
// 
// 2)
// 777
// 
// Returns: 201537
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
