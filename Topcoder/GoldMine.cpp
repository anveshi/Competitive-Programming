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


class GoldMine {
public:
	vector <int> getAllocation(vector <string> mines, int miners) {
		
	}
};


// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, vector <string> p0, int p1, bool hasAnswer, vector <int> p2) {
	cout << "Test " << testNum << ": [" << "{";
	for (int i = 0; int(p0.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << "\"" << p0[i] << "\"";
	}
	cout << "}" << "," << p1;
	cout << "]" << endl;
	GoldMine *obj;
	vector <int> answer;
	obj = new GoldMine();
	clock_t startTime = clock();
	answer = obj->getAllocation(p0, p1);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << "{";
		for (int i = 0; int(p2.size()) > i; ++i) {
			if (i > 0) {
				cout << ",";
			}
			cout << p2[i];
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
		if (answer.size() != p2.size()) {
			res = false;
		} else {
			for (int i = 0; int(answer.size()) > i; ++i) {
				if (answer[i] != p2[i]) {
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
	
	vector <string> p0;
	int p1;
	vector <int> p2;
	
	{
	// ----- test 0 -----
	string t0[] = {"000, 030, 030, 040, 000, 000, 000","020, 020, 020, 010, 010, 010, 010"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 4;
	int t2[] = {2,2};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	all_right = KawigiEdit_RunTest(0, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	string t0[] = {"100, 000, 000, 000, 000, 000, 000","100, 000, 000, 000, 000, 000, 000","100, 000, 000, 000, 000, 000, 000","100, 000, 000, 000, 000, 000, 000","100, 000, 000, 000, 000, 000, 000"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 8;
	int t2[] = {6,2,0,0,0};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	all_right = KawigiEdit_RunTest(1, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	string t0[] = {"050, 000, 000, 000, 000, 050, 000","050, 000, 000, 000, 000, 050, 000","050, 000, 000, 000, 000, 050, 000","050, 000, 000, 000, 000, 050, 000","050, 000, 000, 000, 000, 050, 000","050, 000, 000, 000, 000, 050, 000","050, 000, 000, 000, 000, 050, 000","050, 000, 000, 000, 000, 050, 000","050, 000, 000, 000, 000, 050, 000","050, 000, 000, 000, 000, 050, 000"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 30;
	int t2[] = {4,4,4,4,4,4,4,2,0,0};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	all_right = KawigiEdit_RunTest(2, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	string t0[] = {"026, 012, 005, 013, 038, 002, 004","026, 012, 005, 013, 038, 002, 004","026, 012, 005, 013, 038, 002, 004","026, 012, 005, 013, 038, 002, 004","026, 012, 005, 013, 038, 002, 004","026, 012, 005, 013, 038, 002, 004","026, 012, 005, 013, 038, 002, 004","026, 012, 005, 013, 038, 002, 004","026, 012, 005, 013, 038, 002, 004","026, 012, 005, 013, 038, 002, 004","026, 012, 005, 013, 038, 002, 004","026, 012, 005, 013, 038, 002, 004","026, 012, 005, 013, 038, 002, 004","026, 012, 005, 013, 038, 002, 004","026, 012, 005, 013, 038, 002, 004","026, 012, 005, 013, 038, 002, 004","026, 012, 005, 013, 038, 002, 004","026, 012, 005, 013, 038, 002, 004","026, 012, 005, 013, 038, 002, 004","026, 012, 005, 013, 038, 002, 004","026, 012, 005, 013, 038, 002, 004","026, 012, 005, 013, 038, 002, 004","026, 012, 005, 013, 038, 002, 004","026, 012, 005, 013, 038, 002, 004","026, 012, 005, 013, 038, 002, 004","026, 012, 005, 013, 038, 002, 004","026, 012, 005, 013, 038, 002, 004","026, 012, 005, 013, 038, 002"
			", 004","026, 012, 005, 013, 038, 002, 004","026, 012, 005, 013, 038, 002, 004","026, 012, 005, 013, 038, 002, 004","026, 012, 005, 013, 038, 002, 004","026, 012, 005, 013, 038, 002, 004","026, 012, 005, 013, 038, 002, 004","026, 012, 005, 013, 038, 002, 004","026, 012, 005, 013, 038, 002, 004","026, 012, 005, 013, 038, 002, 004","026, 012, 005, 013, 038, 002, 004","026, 012, 005, 013, 038, 002, 004","026, 012, 005, 013, 038, 002, 004","026, 012, 005, 013, 038, 002, 004","026, 012, 005, 013, 038, 002, 004","026, 012, 005, 013, 038, 002, 004","026, 012, 005, 013, 038, 002, 004","026, 012, 005, 013, 038, 002, 004","026, 012, 005, 013, 038, 002, 004","026, 012, 005, 013, 038, 002, 004","026, 012, 005, 013, 038, 002, 004","026, 012, 005, 013, 038, 002, 004","026, 012, 005, 013, 038, 002, 004"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 56;
	int t2[] = {2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	all_right = KawigiEdit_RunTest(3, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	string t0[] = {"100, 000, 000, 000, 000, 000, 000","090, 010, 000, 000, 000, 000, 000","080, 020, 000, 000, 000, 000, 000","075, 025, 000, 000, 000, 000, 000","050, 050, 000, 000, 000, 000, 000","025, 075, 000, 000, 000, 000, 000","020, 080, 000, 000, 000, 000, 000","010, 090, 000, 000, 000, 000, 000","000, 100, 000, 000, 000, 000, 000","000, 090, 010, 000, 000, 000, 000","000, 080, 020, 000, 000, 000, 000","000, 075, 025, 000, 000, 000, 000","000, 050, 050, 000, 000, 000, 000","000, 025, 075, 000, 000, 000, 000","000, 020, 080, 000, 000, 000, 000","000, 010, 090, 000, 000, 000, 000","000, 000, 100, 000, 000, 000, 000","000, 000, 090, 010, 000, 000, 000","000, 000, 080, 020, 000, 000, 000","000, 000, 075, 025, 000, 000, 000","000, 000, 050, 050, 000, 000, 000","000, 000, 025, 075, 000, 000, 000","000, 000, 020, 080, 000, 000, 000","000, 000, 010, 090, 000, 000, 000","000, 000, 000, 100, 000, 000, 000","000, 000, 000, 100, 000, 000, 000","000, 000, 000, 090, 010, 000, 000","000, 000, 000, 080, 020, 000"
			", 000","000, 000, 000, 075, 025, 000, 000","000, 000, 000, 050, 050, 000, 000","000, 000, 000, 025, 075, 000, 000","000, 000, 000, 020, 080, 000, 000","000, 000, 000, 010, 090, 000, 000","000, 000, 000, 000, 100, 000, 000","000, 000, 000, 000, 090, 010, 000","000, 000, 000, 000, 080, 020, 000","000, 000, 000, 000, 075, 025, 000","000, 000, 000, 000, 050, 050, 000","000, 000, 000, 000, 025, 075, 000","000, 000, 000, 000, 020, 080, 000","000, 000, 000, 000, 010, 090, 000","000, 000, 000, 000, 000, 100, 000","000, 000, 000, 000, 000, 090, 010","000, 000, 000, 000, 000, 080, 020","000, 000, 000, 000, 000, 075, 025","000, 000, 000, 000, 000, 050, 050","000, 000, 000, 000, 000, 025, 075","000, 000, 000, 000, 000, 020, 080","000, 000, 000, 000, 000, 010, 090","000, 000, 000, 000, 000, 000, 100"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 150;
	int t2[] = {0,0,0,1,1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,2,3,3,3,3,3,3,3,3,3,4,4,4,4,4,4,4,4,4,5,5,5,5,5,5,5,5,5,5,6,6};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
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
// Aurum Nugget, Inc. has just purchased some new gold mines.  They have a number of miners available to work in the mines, and would like to allocate the miners in such a way as to maximize their profit.  Each mine can support a maximum of 6 miners, and contains a maximum of 6 major ore deposits.  After the miners have been allocated to mines, the company earns (or loses) money as follows: 
// If a mine has fewer miners than ore deposits, the company will earn $60 per miner allocated to that mine.
// If a mine has the same number of miners as ore deposits, the company will earn $50 per miner allocated to that mine.
// If a mine has more miners than ore deposits, the company will earn $50 for each miner up to the number of ore deposits, and will lose $20 for each extra miner allocated to that mine.
// 
// Even if it will lose money, the company must employ every available worker at one of its mines.
// 
// Write a class GoldMine with a method getAllocation that takes in a vector <string> mines and a int miners.  Each element of mines will be in the form "<p0>, <p1>, <p2>, <p3>, <p4>, <p5>, <p6>" (quotes for clarity) where each <pn> is a three digit number (with leading 0s if necessary.) Each <pn> represents the probability (as a percentage) that n deposits are present in the mine, and all <pn>'s within a mine will always add up to 100. miners is the number of employees the company must allocate.  The method should return a vector <int> indicating the number of miners to place in each mine in order to maximize the expected profit (where element i in the returned vector <int> corresponds to element i of mines).  If there are multiple allocations which maximize expected profit, return the allocation which places more miners in earlier mines.  More specifically, when comparing two different allocations  X0, X1, X2, ..., Xn and Y0, Y1, Y2, ..., Yn that yield the same expected profit, let i be the smallest index such that Xi is not equal to Yi.  Then if Xi > Yi, allocation X0, X1, X2, ..., Xn is preferred to allocation Y0, Y1, Y2, ..., Yn.
// 
// For example, suppose the company has 4 miners available, and purchased the following two mines:
// 
// 	"000, 030, 030, 040, 000, 000, 000"
//         "020, 020, 020, 010, 010, 010, 010"
// 
// 
// The first mine has a 30 percent chance of containing 1 ore deposit, a 30 percent chance of containing 2 ore deposits, and a 40 percent chance of containing 3 ore deposits.  The second mine has a 20 percent chance of containing 0 ore deposits, a 20 percent chance of containing 1 ore deposit, a 20 percent chance of containing 2 ore deposits, a 10 percent chance of containing 3 ore deposits, a 10 percent chance of containing 4 ore deposits, a 10 percent chance of containing 5 ore deposits, and a 10 percent chance of containing 6 ore deposits.
// 
// In this scenario, the company can make the most money by allocating two miners at each mine, yielding an expected profit of 153:
// 
// 	First Mine
// 	   0.3*30 + 0.3*100 + 0.4*120 =
//            9 + 30 + 48 = 87
// 
// 	Second Mine
//            0.2*(-40) + 0.2*30 + 0.2*100 + 0.1*120 + 0.1*120 + 0.1*120 + 0.1*120 = 
//            -8 + 6 + 20 + 12 + 12 + 12 + 12 = 66
// 
// 	Total Profit
// 	   87 + 66 = 153
// 
// 
// The method would have returned { 2, 2 }.  Other allocations would have yielded:
// 
// 	{ 0, 4 } :  75
// 	{ 1, 3 } : 132
// 	{ 3, 1 } : 129
// 	{ 4, 0 } :  67
// 
// 
// 
// DEFINITION
// Class:GoldMine
// Method:getAllocation
// Parameters:vector <string>, int
// Returns:vector <int>
// Method signature:vector <int> getAllocation(vector <string> mines, int miners)
// 
// 
// NOTES
// -Each mine can support a maximum of 6 miners.
// 
// 
// CONSTRAINTS
// -mines will contain between 1 and 50 elements, inclusive
// -each element of mines will contain exactly 33 characters
// -each element of mines will contain only digits ('0'-'9'), commas (',') and spaces (' ')
// -each element of mines will be in the form "<p0>, <p1>, <p2>, <p3>, <p4>, <p5>, <p6>" (quotes for clarity) where each <pn> is a three digit number (with leading 0s if necessary.) Each <pn> represents the probability (as a percentage) that n deposits are present in the mine, and all <pn>'s within a mine will always add up to 100
// -miners will be between 1 and (6 * the number of elements in mines), inclusive
// 
// 
// EXAMPLES
// 
// 0)
// { "000, 030, 030, 040, 000, 000, 000",
//   "020, 020, 020, 010, 010, 010, 010" }
// 4
// 
// Returns: { 2,  2 }
// 
// This is the example from the problem statement.
// 
// 1)
// { "100, 000, 000, 000, 000, 000, 000",
//   "100, 000, 000, 000, 000, 000, 000",
//   "100, 000, 000, 000, 000, 000, 000",
//   "100, 000, 000, 000, 000, 000, 000",
//   "100, 000, 000, 000, 000, 000, 000" }
// 8
// 
// Returns: { 6,  2,  0,  0,  0 }
// 
// There are no deposits in any mines.  However, since the company must employ every available worker, it loses $160 ($20 per worker).  The proper allocation places 6 workers in the first mine and 2 workers in the second mine, since that is the allocation that places more workers in earlier mines and the maximum number of workers a mine can support is 6.
// 
// 2)
// { "050, 000, 000, 000, 000, 050, 000",
//   "050, 000, 000, 000, 000, 050, 000",
//   "050, 000, 000, 000, 000, 050, 000",
//   "050, 000, 000, 000, 000, 050, 000",
//   "050, 000, 000, 000, 000, 050, 000",
//   "050, 000, 000, 000, 000, 050, 000",
//   "050, 000, 000, 000, 000, 050, 000",
//   "050, 000, 000, 000, 000, 050, 000",
//   "050, 000, 000, 000, 000, 050, 000",
//   "050, 000, 000, 000, 000, 050, 000" }
// 30
// 
// Returns: { 4,  4,  4,  4,  4,  4,  4,  2,  0,  0 }
// 
// Each mine has a 50 percent chance of containing no deposits and a 50 percent chance of containing 5 deposits.  The expected value from a mine like this is maximized with 4 workers. Since we allocate workers to earlier mines first, the early mines are filled with 4 workers each, and the remaining 2 miners are placed in the next available mine.
// 
// 3)
// { "026, 012, 005, 013, 038, 002, 004",
//   "026, 012, 005, 013, 038, 002, 004",
//   "026, 012, 005, 013, 038, 002, 004",
//   "026, 012, 005, 013, 038, 002, 004",
//   "026, 012, 005, 013, 038, 002, 004",
//   "026, 012, 005, 013, 038, 002, 004",
//   "026, 012, 005, 013, 038, 002, 004",
//   "026, 012, 005, 013, 038, 002, 004",
//   "026, 012, 005, 013, 038, 002, 004",
//   "026, 012, 005, 013, 038, 002, 004",
//   "026, 012, 005, 013, 038, 002, 004",
//   "026, 012, 005, 013, 038, 002, 004",
//   "026, 012, 005, 013, 038, 002, 004",
//   "026, 012, 005, 013, 038, 002, 004",
//   "026, 012, 005, 013, 038, 002, 004",
//   "026, 012, 005, 013, 038, 002, 004",
//   "026, 012, 005, 013, 038, 002, 004",
//   "026, 012, 005, 013, 038, 002, 004",
//   "026, 012, 005, 013, 038, 002, 004",
//   "026, 012, 005, 013, 038, 002, 004",
//   "026, 012, 005, 013, 038, 002, 004",
//   "026, 012, 005, 013, 038, 002, 004",
//   "026, 012, 005, 013, 038, 002, 004",
//   "026, 012, 005, 013, 038, 002, 004",
//   "026, 012, 005, 013, 038, 002, 004",
//   "026, 012, 005, 013, 038, 002, 004",
//   "026, 012, 005, 013, 038, 002, 004",
//   "026, 012, 005, 013, 038, 002, 004",
//   "026, 012, 005, 013, 038, 002, 004",
//   "026, 012, 005, 013, 038, 002, 004",
//   "026, 012, 005, 013, 038, 002, 004",
//   "026, 012, 005, 013, 038, 002, 004",
//   "026, 012, 005, 013, 038, 002, 004",
//   "026, 012, 005, 013, 038, 002, 004",
//   "026, 012, 005, 013, 038, 002, 004",
//   "026, 012, 005, 013, 038, 002, 004",
//   "026, 012, 005, 013, 038, 002, 004",
//   "026, 012, 005, 013, 038, 002, 004",
//   "026, 012, 005, 013, 038, 002, 004",
//   "026, 012, 005, 013, 038, 002, 004",
//   "026, 012, 005, 013, 038, 002, 004",
//   "026, 012, 005, 013, 038, 002, 004",
//   "026, 012, 005, 013, 038, 002, 004",
//   "026, 012, 005, 013, 038, 002, 004",
//   "026, 012, 005, 013, 038, 002, 004",
//   "026, 012, 005, 013, 038, 002, 004",
//   "026, 012, 005, 013, 038, 002, 004",
//   "026, 012, 005, 013, 038, 002, 004",
//   "026, 012, 005, 013, 038, 002, 004",
//   "026, 012, 005, 013, 038, 002, 004" }
// 56
// 
// Returns: { 2,  2,  2,  2,  2,  2,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 }
// 
// 4)
// { "100, 000, 000, 000, 000, 000, 000",
//   "090, 010, 000, 000, 000, 000, 000",
//   "080, 020, 000, 000, 000, 000, 000",
//   "075, 025, 000, 000, 000, 000, 000",
//   "050, 050, 000, 000, 000, 000, 000",
//   "025, 075, 000, 000, 000, 000, 000",
//   "020, 080, 000, 000, 000, 000, 000",
//   "010, 090, 000, 000, 000, 000, 000",
//   "000, 100, 000, 000, 000, 000, 000",
//   "000, 090, 010, 000, 000, 000, 000",
//   "000, 080, 020, 000, 000, 000, 000",
//   "000, 075, 025, 000, 000, 000, 000",
//   "000, 050, 050, 000, 000, 000, 000",
//   "000, 025, 075, 000, 000, 000, 000",
//   "000, 020, 080, 000, 000, 000, 000",
//   "000, 010, 090, 000, 000, 000, 000",
//   "000, 000, 100, 000, 000, 000, 000",
//   "000, 000, 090, 010, 000, 000, 000",
//   "000, 000, 080, 020, 000, 000, 000",
//   "000, 000, 075, 025, 000, 000, 000",
//   "000, 000, 050, 050, 000, 000, 000",
//   "000, 000, 025, 075, 000, 000, 000",
//   "000, 000, 020, 080, 000, 000, 000",
//   "000, 000, 010, 090, 000, 000, 000",
//   "000, 000, 000, 100, 000, 000, 000",
//   "000, 000, 000, 100, 000, 000, 000",
//   "000, 000, 000, 090, 010, 000, 000",
//   "000, 000, 000, 080, 020, 000, 000",
//   "000, 000, 000, 075, 025, 000, 000",
//   "000, 000, 000, 050, 050, 000, 000",
//   "000, 000, 000, 025, 075, 000, 000",
//   "000, 000, 000, 020, 080, 000, 000",
//   "000, 000, 000, 010, 090, 000, 000",
//   "000, 000, 000, 000, 100, 000, 000",
//   "000, 000, 000, 000, 090, 010, 000",
//   "000, 000, 000, 000, 080, 020, 000",
//   "000, 000, 000, 000, 075, 025, 000",
//   "000, 000, 000, 000, 050, 050, 000",
//   "000, 000, 000, 000, 025, 075, 000",
//   "000, 000, 000, 000, 020, 080, 000",
//   "000, 000, 000, 000, 010, 090, 000",
//   "000, 000, 000, 000, 000, 100, 000",
//   "000, 000, 000, 000, 000, 090, 010",
//   "000, 000, 000, 000, 000, 080, 020",
//   "000, 000, 000, 000, 000, 075, 025",
//   "000, 000, 000, 000, 000, 050, 050",
//   "000, 000, 000, 000, 000, 025, 075",
//   "000, 000, 000, 000, 000, 020, 080",
//   "000, 000, 000, 000, 000, 010, 090",
//   "000, 000, 000, 000, 000, 000, 100" }
// 150
// 
// Returns: { 0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  2,  2,  2,  2,  2,  2,  2,  2,  3,  3,  3,  3,  3,  3,  3,  3,  3,  4,  4,  4,  4,  4,  4,  4,  4,  4,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  6,  6 }
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
