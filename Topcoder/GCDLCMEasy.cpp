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


class GCDLCMEasy {
public:
	string possible(int n, vector <int> A, vector <int> B, vector <int> G, vector <int> L) {
		
	}
};


// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, int p0, vector <int> p1, vector <int> p2, vector <int> p3, vector <int> p4, bool hasAnswer, string p5) {
	cout << "Test " << testNum << ": [" << p0 << "," << "{";
	for (int i = 0; int(p1.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p1[i];
	}
	cout << "}" << "," << "{";
	for (int i = 0; int(p2.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p2[i];
	}
	cout << "}" << "," << "{";
	for (int i = 0; int(p3.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p3[i];
	}
	cout << "}" << "," << "{";
	for (int i = 0; int(p4.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p4[i];
	}
	cout << "}";
	cout << "]" << endl;
	GCDLCMEasy *obj;
	string answer;
	obj = new GCDLCMEasy();
	clock_t startTime = clock();
	answer = obj->possible(p0, p1, p2, p3, p4);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << "\"" << p5 << "\"" << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << "\"" << answer << "\"" << endl;
	if (hasAnswer) {
		res = answer == p5;
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
	vector <int> p2;
	vector <int> p3;
	vector <int> p4;
	string p5;
	
	{
	// ----- test 0 -----
	p0 = 4;
	int t1[] = {0,1,2,3};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	int t2[] = {1,2,3,0};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	int t3[] = {6,6,6,6};
			p3.assign(t3, t3 + sizeof(t3) / sizeof(t3[0]));
	int t4[] = {12,12,12,12};
			p4.assign(t4, t4 + sizeof(t4) / sizeof(t4[0]));
	p5 = "Solution exists";
	all_right = KawigiEdit_RunTest(0, p0, p1, p2, p3, p4, true, p5) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	p0 = 5;
	int t1[] = {0,1,2,3,4};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	int t2[] = {1,2,3,4,0};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	int t3[] = {6,6,6,6,6};
			p3.assign(t3, t3 + sizeof(t3) / sizeof(t3[0]));
	int t4[] = {12,12,12,12,12};
			p4.assign(t4, t4 + sizeof(t4) / sizeof(t4[0]));
	p5 = "Solution does not exist";
	all_right = KawigiEdit_RunTest(1, p0, p1, p2, p3, p4, true, p5) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	p0 = 2;
	int t1[] = {0,0};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	int t2[] = {1,1};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	int t3[] = {123,123};
			p3.assign(t3, t3 + sizeof(t3) / sizeof(t3[0]));
	int t4[] = {456,789};
			p4.assign(t4, t4 + sizeof(t4) / sizeof(t4[0]));
	p5 = "Solution does not exist";
	all_right = KawigiEdit_RunTest(2, p0, p1, p2, p3, p4, true, p5) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	p0 = 2;
	int t1[] = {0};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	int t2[] = {1};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	int t3[] = {1234};
			p3.assign(t3, t3 + sizeof(t3) / sizeof(t3[0]));
	int t4[] = {5678};
			p4.assign(t4, t4 + sizeof(t4) / sizeof(t4[0]));
	p5 = "Solution does not exist";
	all_right = KawigiEdit_RunTest(3, p0, p1, p2, p3, p4, true, p5) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	p0 = 6;
	int t1[] = {0,0,0,0,0,1,1,1,1,2,2,2,3,3,4};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	int t2[] = {1,2,3,4,5,2,3,4,5,3,4,5,4,5,5};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	int t3[] = {2,2,3,3,1,2,5,1,5,1,7,7,3,5,7};
			p3.assign(t3, t3 + sizeof(t3) / sizeof(t3[0]));
	int t4[] = {30,42,30,42,210,70,30,210,70,210,42,70,105,105,105};
			p4.assign(t4, t4 + sizeof(t4) / sizeof(t4[0]));
	p5 = "Solution exists";
	all_right = KawigiEdit_RunTest(4, p0, p1, p2, p3, p4, true, p5) && all_right;
	// ------------------
	}
	
	{
	// ----- test 5 -----
	p0 = 500;
	int t1[] = {0};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	int t2[] = {1};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	int t3[] = {10000};
			p3.assign(t3, t3 + sizeof(t3) / sizeof(t3[0]));
	int t4[] = {10000};
			p4.assign(t4, t4 + sizeof(t4) / sizeof(t4[0]));
	p5 = "Solution exists";
	all_right = KawigiEdit_RunTest(5, p0, p1, p2, p3, p4, true, p5) && all_right;
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
// Your task is to find n positive integers.
// We will label them x[0] through x[n-1].
// 
// 
// 
// We will give you some information about these integers.
// Namely, for some pairs of integers we will tell you both their greatest common divisor (GCD) and their least common multiple (LCM).
// 
// 
// 
// You are given the int n and four vector <int>s: A, B, G, and L.
// These vector <int>s will all have the same number of elements.
// Their meaning is as follows:
// For each valid i, the integers x[ A[i] ] and x[ B[i] ] must have the greatest common divisor G[i] and the least common multiple L[i].
// 
// 
// 
// Return "Solution exists" (quotes for clarity) if there is at least one way to choose x[0] through x[n-1] so that all requirements are satisfied.
// Otherwise, return "Solution does not exist".
// 
// DEFINITION
// Class:GCDLCMEasy
// Method:possible
// Parameters:int, vector <int>, vector <int>, vector <int>, vector <int>
// Returns:string
// Method signature:string possible(int n, vector <int> A, vector <int> B, vector <int> G, vector <int> L)
// 
// 
// NOTES
// -The greatest common divisor (GCD) of two positive integers x and y is the largest positive integer z such that z divides x and at the same time z divides y.
// -The least common multiple (LCM) of two positive integers x and y is the smallest positive integer z such that x divides z and at the same time y divides z.
// -For example, the GCD of 10 and 15 is 5, and the LCM of 10 and 15 is 30.
// 
// 
// CONSTRAINTS
// -n will be between 1 and 500, inclusive.
// -A will contain between 1 and 500 elements, inclusive.
// -A and B will contain the same number of elements.
// -A and G will contain the same number of elements.
// -A and L will contain the same number of elements.
// -Each element in A will be between 0 and n-1, inclusive.
// -Each element in B will be between 0 and n-1, inclusive.
// -For each i, A[i] and B[i] will be different.
// -Each element in G will be between 1 and 10,000, inclusive.
// -Each element in L will be between 1 and 10,000, inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// 4
// {0,1,2,3}
// {1,2,3,0}
// {6,6,6,6}
// {12,12,12,12}
// 
// Returns: "Solution exists"
// 
// We have 4 unknown integers: x[0], x[1], x[2], and x[3].
// The given A, B, G, and L encode the following information:
// 
// The GCD of x[0] and x[1] must be 6 and their LCM must be 12.
// The GCD of x[1] and x[2] must be 6 and their LCM must be 12.
// The GCD of x[2] and x[3] must be 6 and their LCM must be 12.
// The GCD of x[3] and x[0] must be 6 and their LCM must be 12.
// 
// There are two valid solutions.
// In one of them, x[0] = x[2] = 6 and x[1] = x[3] = 12.
// 
// 1)
// 5
// {0,1,2,3,4}
// {1,2,3,4,0}
// {6,6,6,6,6}
// {12,12,12,12,12}
// 
// Returns: "Solution does not exist"
// 
// 
// 
// 2)
// 2
// {0,0}
// {1,1}
// {123,123}
// {456,789}
// 
// Returns: "Solution does not exist"
// 
// The LCM of x[0] and x[1] cannot be 456 and 789 at the same time.
// 
// 3)
// 2
// {0}
// {1}
// {1234}
// {5678}
// 
// Returns: "Solution does not exist"
// 
// The LCM of x[0] and x[1] must always be a multiple of their GCD.
// 
// 4)
// 6
// {0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 3, 3, 4}
// {1, 2, 3, 4, 5, 2, 3, 4, 5, 3, 4, 5, 4, 5, 5}
// {2, 2, 3, 3, 1, 2, 5, 1, 5, 1, 7, 7, 3, 5, 7}
// {30, 42, 30, 42, 210, 70, 30, 210, 70, 210, 42, 70, 105, 105, 105}
// 
// 
// Returns: "Solution exists"
// 
// There is one solution: {6, 10, 14, 15, 21, 35}.
// 
// 5)
// 500
// {0}
// {1}
// {10000}
// {10000}
// 
// Returns: "Solution exists"
// 
// 
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
