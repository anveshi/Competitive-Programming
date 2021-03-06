#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
typedef long long LL;

using namespace std;


class ShopPositions {
public:
	int maxProfit(int n, int m, vector <int> c) {
		
	}
};


// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, int p0, int p1, vector <int> p2, bool hasAnswer, int p3) {
	cout << "Test " << testNum << ": [" << p0 << "," << p1 << "," << "{";
	for (int i = 0; int(p2.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p2[i];
	}
	cout << "}";
	cout << "]" << endl;
	ShopPositions *obj;
	int answer;
	obj = new ShopPositions();
	clock_t startTime = clock();
	answer = obj->maxProfit(p0, p1, p2);
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
	
	int p0;
	int p1;
	vector <int> p2;
	int p3;
	
	{
	// ----- test 0 -----
	p0 = 1;
	p1 = 5;
	int t2[] = {100,90,80,70,60,50,40,30,20,10,1,1,1,1,1};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	p3 = 300;
	all_right = KawigiEdit_RunTest(0, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	p0 = 1;
	p1 = 5;
	int t2[] = {1000,5,4,2,1,1,1,1,1,1,1,1,1,1,1};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	p3 = 1000;
	all_right = KawigiEdit_RunTest(1, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	p0 = 3;
	p1 = 1;
	int t2[] = {7,6,1,10,4,1,7,6,3};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	p3 = 14;
	all_right = KawigiEdit_RunTest(2, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	p0 = 2;
	p1 = 2;
	int t2[] = {12,11,10,9,8,7,6,5,4,3,2,1};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	p3 = 24;
	all_right = KawigiEdit_RunTest(3, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	p0 = 3;
	p1 = 3;
	int t2[] = {30,28,25,15,14,10,5,4,2,50,40,30,28,17,13,8,6,3,45,26,14,14,13,13,2,1,1};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	p3 = 127;
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
// Carol is starting a new taco shop business.
// She is going to open some taco shops in a block of buildings.
// The blocks consists of n adjacent buildings in a row.
// Each building has exactly m floors.
// The buildings are numbered 0 through n-1 in order.
// 
// 
// 
// Carol can open between 0 and m taco shops in each building (as there can be at most one taco shop per floor in each building).
// For each taco shop, the profit P[x][y] will depend on two factors:
// 
// the number x of the building that contains this taco shop
// the total count y of taco shops in that particular building and in buildings adjacent to that building (including this particular taco store)
// 
// 
// 
// 
// You are given the ints n and m.
// You are also given the profits as defined above, encoded into a vector <int> c.
// For each x between 0 and n-1, and for each y between 1 and 3m, the profit P[x][y] is given in c[x*3*m+y-1].
// 
// 
// 
// It is guaranteed that the profits don't increase as y increases. That is, for each valid x and y, P[x][y] will be greater than or equal to P[x][y+1].
// Note that the profit is for a single store.
// For example, if there are three taco stores in building 7 and no other stores in buildings 6 and 8, each of these three taco stores will bring the profit P[7][3].
// 
// 
// 
// Determine and return the maximum total profit that Carol can gain from opening the taco shops.
// 
// 
// DEFINITION
// Class:ShopPositions
// Method:maxProfit
// Parameters:int, int, vector <int>
// Returns:int
// Method signature:int maxProfit(int n, int m, vector <int> c)
// 
// 
// CONSTRAINTS
// -n will be between 1 and 30, inclusive.
// -m will be between 1 and 30, inclusive.
// -c will have exactly n*3*m elements.
// -Each element of c will be between 1 and 1,000, inclusive.
// -For each x between 0 and n-1, the sequence c[3*m*x], c[3*m*x + 1], ..., c[3*m*(x+1) - 1] will be sorted in nonincreasing order
// 
// 
// EXAMPLES
// 
// 0)
// 1
// 5
// {100, 90, 80, 70, 60, 50, 40, 30, 20, 10, 1, 1, 1, 1, 1}
// 
// Returns: 300
// 
// 
// Carol has 1 building with 5 floors.
// 
// 
// 
// Building one shop will get her a profit of 100, while building two shops will get a profit of 90*2.
// The optimal strategy in this case is to build 5 taco shops, for a profit of 60*5=300.
// 
// 
// 
// 
// 1)
// 1
// 5
// {1000, 5, 4, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
// 
// Returns: 1000
// 
// 
// 
// 2)
// 3
// 1
// {
//   7,6,1,
//   10,4,1,
//   7,6,3
// }
// 
// Returns: 14
// 
// The optimal strategy here is to open one taco store in building 0 and one taco store in building 2.
// 
// 3)
// 2
// 2
// {
//  12,11,10,9,8,7,
//  6,5,4,3,2,1
// }
// 
// Returns: 24
// 
// 
// 
// 4)
// 3
// 3
// {
//   30,28,25,15,14,10,5,4,2,
//   50,40,30,28,17,13,8,6,3,
//   45,26,14,14,13,13,2,1,1
// }
// 
// Returns: 127
// 
// 
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
