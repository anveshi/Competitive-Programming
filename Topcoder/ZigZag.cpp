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


class ZigZag {
public:
	int longestZigZag(vector <int> sequence) {
		
	}
};


// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, vector <int> p0, bool hasAnswer, int p1) {
	cout << "Test " << testNum << ": [" << "{";
	for (int i = 0; int(p0.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p0[i];
	}
	cout << "}";
	cout << "]" << endl;
	ZigZag *obj;
	int answer;
	obj = new ZigZag();
	clock_t startTime = clock();
	answer = obj->longestZigZag(p0);
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
	
	vector <int> p0;
	int p1;
	
	{
	// ----- test 0 -----
	int t0[] = {1,7,4,9,2,5};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 6;
	all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	int t0[] = {1,17,5,10,13,15,10,5,16,8};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 7;
	all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	int t0[] = {44};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 1;
	all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	int t0[] = {1,2,3,4,5,6,7,8,9};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 2;
	all_right = KawigiEdit_RunTest(3, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	int t0[] = {70,55,13,2,99,2,80,80,80,80,100,19,7,5,5,5,1000,32,32};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 8;
	all_right = KawigiEdit_RunTest(4, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 5 -----
	int t0[] = {374,40,854,203,203,156,362,279,812,955,600,947,978,46,100,953,670,862,568,188,67,669,810,704,52,861,49,640,370,908,477,245,413,109,659,401,483,308,609,120,249,22,176,279,23,22,617,462,459,244};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 36;
	all_right = KawigiEdit_RunTest(5, p0, true, p1) && all_right;
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
// A sequence of numbers is called a zig-zag sequence if the differences
// between successive numbers strictly alternate between positive and negative.  The
// first difference (if one exists) may be either positive or negative.  A sequence with
// fewer than two elements is trivially a zig-zag sequence.
// 
// 
// 
// For example, 1,7,4,9,2,5 is a zig-zag sequence because the differences
// (6,-3,5,-7,3) are alternately positive and negative.  In contrast, 1,4,7,2,5
// and 1,7,4,5,5 are not zig-zag sequences, the first because its first two differences are positive and
// the second because its last difference is zero.
// 
// 
// 
// Given a sequence of integers, sequence, return the length of the longest subsequence of sequence that is
// a zig-zag sequence.  A subsequence is obtained by deleting some number of
// elements (possibly zero) from the original sequence, leaving the remaining elements in their original order.
// 
// 
// 
// DEFINITION
// Class:ZigZag
// Method:longestZigZag
// Parameters:vector <int>
// Returns:int
// Method signature:int longestZigZag(vector <int> sequence)
// 
// 
// CONSTRAINTS
// -sequence contains between 1 and 50 elements, inclusive.
// -Each element of sequence is between 1 and 1000, inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// { 1, 7, 4, 9, 2, 5 }
// 
// Returns: 6
// 
// The entire sequence is a zig-zag sequence.
// 
// 1)
// { 1, 17, 5, 10, 13, 15, 10, 5, 16, 8 }
// 
// Returns: 7
// 
// There are several subsequences that achieve this length.  One is 1,17,10,13,10,16,8.
// 
// 2)
// { 44 }
// 
// Returns: 1
// 
// 3)
// { 1, 2, 3, 4, 5, 6, 7, 8, 9 }
// 
// Returns: 2
// 
// 4)
// { 70, 55, 13, 2, 99, 2, 80, 80, 80, 80, 100, 19, 7, 5, 5, 5, 1000, 32, 32 }
// 
// Returns: 8
// 
// 5)
// { 374, 40, 854, 203, 203, 156, 362, 279, 812, 955, 
// 600, 947, 978, 46, 100, 953, 670, 862, 568, 188, 
// 67, 669, 810, 704, 52, 861, 49, 640, 370, 908, 
// 477, 245, 413, 109, 659, 401, 483, 308, 609, 120, 
// 249, 22, 176, 279, 23, 22, 617, 462, 459, 244 }
// 
// 
// Returns: 36
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
