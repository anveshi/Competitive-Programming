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


class LoopyPath {
public:
	int findMinimumCycle(vector <string> grid) {
		
	}
};


// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, vector <string> p0, bool hasAnswer, int p1) {
	cout << "Test " << testNum << ": [" << "{";
	for (int i = 0; int(p0.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << "\"" << p0[i] << "\"";
	}
	cout << "}";
	cout << "]" << endl;
	LoopyPath *obj;
	int answer;
	obj = new LoopyPath();
	clock_t startTime = clock();
	answer = obj->findMinimumCycle(p0);
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
	
	vector <string> p0;
	int p1;
	
	{
	// ----- test 0 -----
	string t0[] = {"111"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 8;
	all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	string t0[] = {"10","11"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 10;
	all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	string t0[] = {"111","111","111"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 20;
	all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	string t0[] = {"1110000","0000111"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 34;
	all_right = KawigiEdit_RunTest(3, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	string t0[] = {"1110001110001111111000111","1110001110001111111000111","1110001110000011100000111","1111111110000011100000111","1111111110000011100000111","1110001110000011100000000","1110001110001111111000111","1110001110001111111000111"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 364;
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
// 
// You have a rectangle that is divided into a grid of unit squares.
// The corners and sides of those squares will be called grid points and grid lines, respectively.
// Each square contains either a 0 or a 1.
// You are given these numbers in a vector <string> grid.
// The elements of grid represent the rows of squares from top to bottom.
// In each element, the characters represent the squares in that row from left to right.
// Each of those characters is either '0' or '1'.
// 
// 
// 
// You want to take a walk along some grid lines.
// The walk must satisfy the following properties:
// 
// You must both start and end the walk in the top left grid point.
// In each step, you have to walk along a single grid line (i.e., move by 1 up, down, left, or right).
// Your walk must visit each grid point at least once.
// Your walk must satisfy the additional property described in the next paragraph.
// 
// 
// 
// 
// Consider any walk that satisfies the first three properties.
// Imagine that a boy is standing in the middle of a given square and a girl takes the entire walk once (both starting and ending in the top left grid point).
// While the girl walks, the boy stays in place but rotates so that he always faces the girl's current position.
// Clearly, when the girl ends the walk, the net result for the boy will be some number of full turns.
// For each square in the grid, the number written in the square must correspond to the net number of clockwise turns the boy would make if he stood in that square.
// (In other words, if the square contains a 0, the boy standing in that square must rotate by the same total amount clockwise and counterclockwise, and if the square contains a 1, the boy's total clockwise rotation must be 360 degrees more than the boy's total counterclockwise rotation.)
// 
// 
// 
// You are given the vector <string> grid.
// Return the smallest L such that in the given grid there is a valid walk with L steps, or -1 if no valid walk exists.
// 
// 
// 
// DEFINITION
// Class:LoopyPath
// Method:findMinimumCycle
// Parameters:vector <string>
// Returns:int
// Method signature:int findMinimumCycle(vector <string> grid)
// 
// 
// NOTES
// -The walk may visit each grid point, including the top left grid point, arbitrarily many times.
// 
// 
// CONSTRAINTS
// -grid will contain between 1 and 50 elements, inclusive.
// -Each element of grid will contain between 1 and 50 characters, inclusive.
// -Each element of grid will contain the same number of characters.
// -Each character in each element of grid will be either '0' or '1'.
// 
// 
// EXAMPLES
// 
// 0)
// {"111"}
// 
// Returns: 8
// 
// 
// The optimal walk is to go around the boundary of the grid clockwise. This gives us a path of length 8.
// 
// 
// 1)
// {"10",
//  "11"}
// 
// Returns: 10
// 
// 
// We need to visit every grid point. Here is one example of an optimal walk.
// 
// 
// 
// This walk has length 10.
// 
// 
// 2)
// {"111",
//  "111",
//  "111"}
// 
// Returns: 20
// 
// 
// 
// 3)
// {"1110000",
//  "0000111"}
// 
// Returns: 34
// 
// 
// 
// 4)
// {
// "1110001110001111111000111",
// "1110001110001111111000111",
// "1110001110000011100000111",
// "1111111110000011100000111",
// "1111111110000011100000111",
// "1110001110000011100000000",
// "1110001110001111111000111",
// "1110001110001111111000111"
// }
// 
// Returns: 364
// 
// 
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
