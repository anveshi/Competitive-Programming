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


class ChristmasTreeDecorationDiv2 {
public:
	int solve(vector <int> col, vector <int> x, vector <int> y) {
		int ans=0;
		for(int i=0;i<x.size();i++){
			if(col[x[i]-1]!=col[y[i]-1])
				ans++;
		}
		return ans;
	}
};


// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, vector <int> p0, vector <int> p1, vector <int> p2, bool hasAnswer, int p3) {
	cout << "Test " << testNum << ": [" << "{";
	for (int i = 0; int(p0.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p0[i];
	}
	cout << "}" << "," << "{";
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
	cout << "}";
	cout << "]" << endl;
	ChristmasTreeDecorationDiv2 *obj;
	int answer;
	obj = new ChristmasTreeDecorationDiv2();
	clock_t startTime = clock();
	answer = obj->solve(p0, p1, p2);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << p3 << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << answer << endl;
	if (hasAnswer) {
		res = answer == p3;
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
	vector <int> p1;
	vector <int> p2;
	int p3;
	
	{
	// ----- test 0 -----
	int t0[] = {1,2,3,3};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {1,2,3};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	int t2[] = {2,3,4};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	p3 = 2;
	all_right = KawigiEdit_RunTest(0, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	int t0[] = {1,3,5};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {1,3};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	int t2[] = {2,2};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	p3 = 2;
	all_right = KawigiEdit_RunTest(1, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	int t0[] = {1,1,3,3};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {1,3,2};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	int t2[] = {2,1,4};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	p3 = 2;
	all_right = KawigiEdit_RunTest(2, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	int t0[] = {5,5,5,5};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {1,2,3};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	int t2[] = {2,3,4};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	p3 = 0;
	all_right = KawigiEdit_RunTest(3, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	int t0[] = {9,1,1};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {3,2};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	int t2[] = {2,1};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	p3 = 1;
	all_right = KawigiEdit_RunTest(4, p0, p1, p2, true, p3) && all_right;
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
// Christmas is just around the corner, and Alice just decorated her Christmas tree.
// There are N stars and N-1 ribbons on the tree.
// Each ribbon connects two of the stars in such a way that all stars and ribbons hold together.
// (In other words, the stars and ribbons are the vertices and edges of a tree.)
// 
// 
// 
// The stars are numbered 1 through N.
// Additionally, each star has some color.
// You are given the colors of stars as a vector <int> col with N elements.
// For each i, col[i] is the color of star i+1.
// (Different integers represent different colors.)
// 
// 
// 
// You are also given a description of the ribbons: two vector <int>s x and y with N-1 elements each.
// For each i, there is a ribbon that connects the stars with numbers x[i] and y[i].
// 
// 
// 
// According to Alice, a ribbon that connects two stars with different colors is beautiful, while a ribbon that connects two same-colored stars is not.
// Compute and return the number of beautiful ribbons in Alice's tree.
// 
// 
// DEFINITION
// Class:ChristmasTreeDecorationDiv2
// Method:solve
// Parameters:vector <int>, vector <int>, vector <int>
// Returns:int
// Method signature:int solve(vector <int> col, vector <int> x, vector <int> y)
// 
// 
// CONSTRAINTS
// -N will be between 2 and 50, inclusive.
// -The number of elements in col will be exactly N.
// -The number of elements in x will be exactly N - 1.
// -The number of elements in y will be the same as the number of elements in x.
// -All elements of x and y will be between 1 and N, inclusive.
// -For each i, the numbers x[i] and y[i] will be different.
// -The graph formed by the N-1 ribbons will be connected.
// 
// 
// EXAMPLES
// 
// 0)
// {1,2,3,3}
// {1,2,3}
// {2,3,4}
// 
// Returns: 2
// 
// There are two beautiful ribbons: the one that connects stars 1 and 2, and the one that connects stars 2 and 3.
// The other ribbon is not beautiful because stars 3 and 4 have the same color.
// 
// 1)
// {1,3,5}
// {1,3}
// {2,2}
// 
// Returns: 2
// 
// 
// 
// 2)
// {1,1,3,3}
// {1,3,2}
// {2,1,4}
// 
// Returns: 2
// 
// 
// 
// 3)
// {5,5,5,5}
// {1,2,3}
// {2,3,4}
// 
// Returns: 0
// 
// 
// 
// 4)
// {9,1,1}
// {3,2}
// {2,1}
// 
// Returns: 1
// 
// 
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
