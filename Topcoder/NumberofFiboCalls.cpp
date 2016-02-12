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


class NumberofFiboCalls {
public:
	vector <int> fiboCallsMade(int n) {
		vector < pair<LL,LL> > v(44,make_pair(1,0));
		v[1].second = 1;v[1].first = 0;
		for(int i=2;i<=40;i++){
			v[i].first = v[i-1].first + v[i-2].first;
			v[i].second = v[i-1].second + v[i-2].second;
		}
		vector <int> x;x.pb(v[n].first);x.pb(v[n].second);
		return x;	
		//Done
	}
};


// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, int p0, bool hasAnswer, vector <int> p1) {
	cout << "Test " << testNum << ": [" << p0;
	cout << "]" << endl;
	NumberofFiboCalls *obj;
	vector <int> answer;
	obj = new NumberofFiboCalls();
	clock_t startTime = clock();
	answer = obj->fiboCallsMade(p0);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << "{";
		for (int i = 0; int(p1.size()) > i; ++i) {
			if (i > 0) {
				cout << ",";
			}
			cout << p1[i];
		}
		cout << "}" << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << "{";
	for (int i = 0; int(answer.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << answer[i];
	}
	cout << "}" << endl;
	if (hasAnswer) {
		if (answer.size() != p1.size()) {
			res = false;
		} else {
			for (int i = 0; int(answer.size()) > i; ++i) {
				if (answer[i] != p1[i]) {
					res = false;
				}
			}
		}
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
	vector <int> p1;
	
	{
	// ----- test 0 -----
	p0 = 0;
	int t1[] = {1,0};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	p0 = 3;
	int t1[] = {1,2};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	p0 = 6;
	int t1[] = {5,8};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	p0 = 22;
	int t1[] = {10946,17711};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	all_right = KawigiEdit_RunTest(3, p0, true, p1) && all_right;
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
// Look at the following pseudo-code, which computes the n-th Fibonacci number:
// 
// int fibonacci(int n)
// 	begin
// 	if n equals 0
// 		begin
// 		print(0)
// 		return 0
// 		end
// 	if n equals 1
// 		begin
// 		print(1)
// 		return 1
// 		end
// 	return fibonacci(n - 1) + fibonacci(n - 2)
// 	end
// 
// 
// For example, if one calls fibonacci(3), then the following will happen:
// 
// fibonacci(3) calls fibonacci(2) and fibonacci(1) (the first call).
// fibonacci(2) calls fibonacci(1) (the second call) and fibonacci(0).
// The second call of fibonacci(1) prints 1 and returns 1.
// fibonacci(0) prints 0 and returns 0.
// fibonacci(2) gets the results of fibonacci(1) and fibonacci(0) and returns 1.
// The first call of fibonacci(1) prints 1 and returns 1.
// fibonacci(3) gets the results of fibonacci(2) and fibonacci(1) and returns 2.
// 
// In total, '1' will be printed twice and '0' will be printed once.
// 
// 
// We want to know how many times '0' and '1' will be printed for a given n. You are to return a vector <int> which contains exactly two elements. The first and second elements of the return value must be equal to the number of times '0' and '1', respectively, will be printed during a fibonacci(n) call.
// 
// 
// DEFINITION
// Class:NumberofFiboCalls
// Method:fiboCallsMade
// Parameters:int
// Returns:vector <int>
// Method signature:vector <int> fiboCallsMade(int n)
// 
// 
// CONSTRAINTS
// -n will be between 0 and 40, inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// 0
// 
// Returns: {1, 0 }
// 
// If I call the Fibonacci function with n = 0, it just calls the 1st base case. Hence, the result is {1,0}.
// 
// 1)
// 3
// 
// Returns: {1, 2 }
// 
// The test case given in the problem statement.
// 
// 2)
// 6
// 
// Returns: {5, 8 }
// 
// 3)
// 22
// 
// Returns: {10946, 17711 }
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
