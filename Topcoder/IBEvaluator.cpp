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


class IBEvaluator {
public:
	vector <int> getSummary(vector <int> predictedGrades, vector <int> actualGrades) {
		
	}
};


// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, vector <int> p0, vector <int> p1, bool hasAnswer, vector <int> p2) {
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
	cout << "}";
	cout << "]" << endl;
	IBEvaluator *obj;
	vector <int> answer;
	obj = new IBEvaluator();
	clock_t startTime = clock();
	answer = obj->getSummary(p0, p1);
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
	
	vector <int> p0;
	vector <int> p1;
	vector <int> p2;
	
	{
	// ----- test 0 -----
	int t0[] = {1,5,7,3};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {3,5,4,5};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	int t2[] = {25,0,50,25,0,0,0};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	all_right = KawigiEdit_RunTest(0, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	int t0[] = {1,1,1};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {5,6,7};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	int t2[] = {0,0,0,0,33,33,33};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	all_right = KawigiEdit_RunTest(1, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	int t0[] = {3};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {3};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	int t2[] = {100,0,0,0,0,0,0};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	all_right = KawigiEdit_RunTest(2, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	int t0[] = {1,5,3,5,6,4,2,5,7,6,5,2,3,4,1,4,6,5,4,7,6,6,1};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {5,1,3,2,6,4,1,7,5,2,7,4,2,6,5,7,3,1,4,6,3,1,7};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	int t2[] = {17,13,21,17,21,4,4};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	all_right = KawigiEdit_RunTest(3, p0, p1, true, p2) && all_right;
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
// For the International Baccalaureate (IB) diploma, students are assigned integer grades between 1 and 7 inclusive, based on exams taken at the end of high school. Unfortunately, these results are never available in time to assist universities with admissions decisions. To counteract this problem, IB teachers are required to predict in advance how well each student will perform on the exams. As these predictions can have an enormous impact on a student's future, schools are naturally very interested in evaluating their accuracy.
// 
// Create a class IBEvaluator that contains a method getSummary, which is given a vector <int> predictedGrades and a vector <int> actualGrades. Corresponding elements in these arrays will represent the predicted and final grades, respectively, achieved by each student. The method should return a vector <int> with 7 elements, giving the percentage (rounded down) of predicted grades that differ from the actual grades by each value between 0 and 6 inclusive. Thus, element 0 of the return value should be the percentage of predictions that were correct, element 1 should be the percentage of predictions that differed by 1, etc.
// 
// 
// DEFINITION
// Class:IBEvaluator
// Method:getSummary
// Parameters:vector <int>, vector <int>
// Returns:vector <int>
// Method signature:vector <int> getSummary(vector <int> predictedGrades, vector <int> actualGrades)
// 
// 
// CONSTRAINTS
// -predictedGrades and actualGrades will each contain between 1 and 50 elements inclusive.
// -predictedGrades and actualGrades will contain the same number of elements.
// -Each element of predictedGrades will be between 1 and 7 inclusive.
// -Each element of actualGrades will be between 1 and 7 inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// {1,5,7,3}
// {3,5,4,5}
// 
// Returns: { 25,  0,  50,  25,  0,  0,  0 }
// 
// The grade distribution is shown below.
// 
// 
// 
// Student | Predicted grade | Actual grade | Difference
// --------+-----------------+--------------+-----------
//    1    |        1        |       3      |     2
//    2    |        5        |       5      |     0
//    3    |        7        |       4      |     3
//    4    |        3        |       5      |     2
// 
// 
// 
// Out of four predictions, one (25%) is off by 0 points, two (50%) are off by 2 points, and one (25%) is off by 3 points.
// 
// 1)
// {1,1,1}
// {5,6,7}
// 
// Returns: { 0,  0,  0,  0,  33,  33,  33 }
// 
// Note that percentages are rounded down.
// 
// 2)
// {3}
// {3}
// 
// Returns: { 100,  0,  0,  0,  0,  0,  0 }
// 
// 3)
// {1,5,3,5,6,4,2,5,7,6,5,2,3,4,1,4,6,5,4,7,6,6,1}
// {5,1,3,2,6,4,1,7,5,2,7,4,2,6,5,7,3,1,4,6,3,1,7}
// 
// Returns: { 17,  13,  21,  17,  21,  4,  4 }
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
