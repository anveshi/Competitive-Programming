#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
typedef long long LL;

using namespace std;


class SemiPerfectSquare {
public:
	string check(int N) {
		for(int i=1;i<1000;i++){
			for(int j=i+1;j<1000;j++){
				if(i*j*j == N)
					return "Yes";
			}
		}
		return "No";
	}
};


// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, int p0, bool hasAnswer, string p1) {
	cout << "Test " << testNum << ": [" << p0;
	cout << "]" << endl;
	SemiPerfectSquare *obj;
	string answer;
	obj = new SemiPerfectSquare();
	clock_t startTime = clock();
	answer = obj->check(p0);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << "\"" << p1 << "\"" << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << "\"" << answer << "\"" << endl;
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
	string p1;
	
	{
	// ----- test 0 -----
	p0 = 48;
	p1 = "Yes";
	all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	p0 = 1000;
	p1 = "No";
	all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	p0 = 25;
	p1 = "Yes";
	all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	p0 = 47;
	p1 = "No";
	all_right = KawigiEdit_RunTest(3, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	p0 = 847;
	p1 = "Yes";
	all_right = KawigiEdit_RunTest(4, p0, true, p1) && all_right;
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
// Magical Girl Iris loves perfect squares.
// A positive integer n is a perfect square if and only if there is a positive integer b >= 1 such that b*b = n.
// For example, 1 (=1*1), 16 (=4*4), and 169 (=13*13) are perfect squares, while 2, 54, and 48 are not.
// 
// Iris also likes semi-squares.
// A positive integer n is called a semi-square if and only if there are positive integers a >= 1 and b > 1 such that a < b and a*b*b = n.
// For example, 81 (=1*9*9) and 48 (=3*4*4) are semi-squares, while 24, 63, and 125 are not.
// (Note that we require that a < b.
// Even though 24 can be written as 6*2*2, that does not make it a semi-square.)
// 
// You are given a int N.
// Return "Yes" (quotes for clarity) if N is a semi-square number.
// Otherwise, return "No".
// 
// DEFINITION
// Class:SemiPerfectSquare
// Method:check
// Parameters:int
// Returns:string
// Method signature:string check(int N)
// 
// 
// NOTES
// -The return value is case-sensitive. Make sure that you return the exact strings "Yes" and "No".
// 
// 
// CONSTRAINTS
// -N will be between 2 and 1000, inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// 48
// 
// Returns: "Yes"
// 
// 48 can be expressed as 3 * 4 * 4. Therefore, 48 is a semi-square.
// 
// 1)
// 1000
// 
// Returns: "No"
// 
// 1000 can be represented as 10 * 10 * 10, but it doesn't match the definition of semi-perfect squares.
// 
// 2)
// 25
// 
// Returns: "Yes"
// 
// 
// 
// 3)
// 47
// 
// Returns: "No"
// 
// 
// 
// 4)
// 847
// 
// Returns: "Yes"
// 
// 
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
