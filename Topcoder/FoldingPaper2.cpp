/*#include <vector>
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
#include <ctime>*/
#include <bits/stdc++.h>
#define LL long long int
#define pb push_back
#define mp make_pair

using namespace std;


class FoldingPaper2 {
public:
	int solve(int W, int H, int A) {
		vector <pair <int,int> > v;v.clear();
		int i,j,sz,minStep,possible,x1,x2;
		for(i=1;i*i<=A;i++){
			if(A%i!=0)continue;
			if(i<=W && A/i<=H)
				v.pb(mp(i,A/i));
			if(A/i<=W && i<=H)
				v.pb(mp(A/i,i));
		}
		sz = v.size();
		minStep = INT_MAX;possible = -1;
		for(i=0;i<sz;i++){
			x1 = v[i].first;
			x2 = v[i].second;
		//	cout << x1 << " " << x2 << endl;
			int a1=0,a2=0,t1,t2;t1=W;t2=H;
			while(t1>x1){
				t1=(t1+1)/2;a1++;
			}
			while(t2>x2){
				t2=(t2+1)/2;a2++;
			}
			if(a1+a2<minStep)minStep=a1+a2;
	//		cout << a1 << " : : " <<a2 << endl;
		}
		if(minStep<INT_MAX)
			return minStep;
		else return -1;
		
	}
};


// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, int p0, int p1, int p2, bool hasAnswer, int p3) {
	cout << "Test " << testNum << ": [" << p0 << "," << p1 << "," << p2;
	cout << "]" << endl;
	FoldingPaper2 *obj;
	int answer;
	obj = new FoldingPaper2();
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
	
	int p0;
	int p1;
	int p2;
	int p3;
	
	{
	// ----- test 0 -----
	p0 = 5;
	p1 = 3;
	p2 = 12;
	p3 = 1;
	all_right = KawigiEdit_RunTest(0, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	p0 = 2;
	p1 = 2;
	p2 = 3;
	p3 = -1;
	all_right = KawigiEdit_RunTest(1, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	p0 = 4;
	p1 = 4;
	p2 = 1;
	p3 = 4;
	all_right = KawigiEdit_RunTest(2, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	p0 = 127;
	p1 = 129;
	p2 = 72;
	p3 = 8;
	all_right = KawigiEdit_RunTest(3, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	p0 = 1;
	p1 = 100000;
	p2 = 100000;
	p3 = 0;
	all_right = KawigiEdit_RunTest(4, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 5 -----
	p0 = 1;
	p1 = 1;
	p2 = 2;
	p3 = -1;
	all_right = KawigiEdit_RunTest(5, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 6 -----
	p0 = 105;
	p1 = 100;
	p2 = 10403;
	p3 = -1;
	all_right = KawigiEdit_RunTest(6, p0, p1, p2, true, p3) && all_right;
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
// You have a rectangular piece of paper.
// Its dimensions are W times H.
// You want to have a paper with area A instead.
// Therefore, you decided to fold the paper you have.
// In each step you can fold the paper according to a straight line.
// There are two restrictions: First, that line must always be parallel to one of the rectangle's sides.
// Second, after each fold both dimensions of the new rectangle must be integers again.
// 
// 
// 
// For example, suppose that your paper is 5 units wide and 3 units tall.
// If you fold it according to a vertical line that is 4 units to the right of its left side, you will obtain a rectangle that is 4 units wide and 3 units tall.
// If you fold it according to a horizontal line that is 1 unit below the top of the rectangle, you will get a rectangle that is 5 units wide and 2 units tall.
// 
// 
// 
// You are given the ints W, H, and A.
// If it is impossible to fold the paper into a valid rectangle with area A, return -1.
// Otherwise, return the smallest number of times you need to fold the paper.
// 
// 
// DEFINITION
// Class:FoldingPaper2
// Method:solve
// Parameters:int, int, int
// Returns:int
// Method signature:int solve(int W, int H, int A)
// 
// 
// CONSTRAINTS
// -H, W will be between 1 and 1,000,000,000, inclusive.
// -A will be between 1 and 100,000, inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// 5
// 3
// 12
// 
// Returns: 1
// 
// The solution in this case is the first example mentioned above.
// 
// 1)
// 2
// 2
// 3
// 
// Returns: -1
// 
// A 2x2 square cannot be folded into a rectangle with area 3. Note that a rectangle that is 1.5 units wide and 2 units tall is not a solution: both dimensions of all rectangles you produce must be integers.
// 
// 2)
// 4
// 4
// 1
// 
// Returns: 4
// 
// 
// 
// 3)
// 127
// 129
// 72
// 
// Returns: 8
// 
// 
// 
// 4)
// 1
// 100000
// 100000
// 
// Returns: 0
// 
// The paper already has the desired area, so no folding is necessary.
// 
// 5)
// 1
// 1
// 2
// 
// Returns: -1
// 
// 
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
