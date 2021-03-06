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


class GroupWork {
public:
	long long bestGroup(vector <int> p, vector <int> s) {
		
	}
};


// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, vector <int> p0, vector <int> p1, bool hasAnswer, long long p2) {
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
	GroupWork *obj;
	long long answer;
	obj = new GroupWork();
	clock_t startTime = clock();
	answer = obj->bestGroup(p0, p1);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << p2 << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << answer << endl;
	if (hasAnswer) {
		res = answer == p2;
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
	long long p2;
	
	{
	// ----- test 0 -----
	int t0[] = {1,2,1};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {3,5,9};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 15ll;
	all_right = KawigiEdit_RunTest(0, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	int t0[] = {2,2,2,2};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {5,1,1,5};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 20ll;
	all_right = KawigiEdit_RunTest(1, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	int t0[] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {31,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 31ll;
	all_right = KawigiEdit_RunTest(2, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	int t0[] = {1000000000,1000000000,1000000000};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {1000,999,998};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 2994000000000ll;
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
// 
// You have many people working for you, and you have an urgent job that needs to be done immediately.  You know each worker's skill level at performing the task, and you also know that groups often work better than individuals.  This particular task requires everybody in a group to perform at the same pace.  Therefore, a group of talented people can easily be slowed down by having a single less talented member.
// 
// You have established that the productivity of a group is K*X, where K is the number of people in the group and X is the minimum skill level in the group.  You must assemble a group with the highest possible productivity.  You will be given two vector <int>s p and s describing the people who work for you.  Each element of p represents a set of workers who all have the same skill level.  The ith element of p is the number of people in the ith set, and the ith element of s is the skill level of each worker in the ith set.  The input is organized into sets only for convenience.  You are free to choose any number of individuals from any number of sets when assembling your group. See examples for further clarification. Return the highest achievable productivity.
// 
// 
// DEFINITION
// Class:GroupWork
// Method:bestGroup
// Parameters:vector <int>, vector <int>
// Returns:long long
// Method signature:long long bestGroup(vector <int> p, vector <int> s)
// 
// 
// CONSTRAINTS
// -p will contain between 1 and 50 elements, inclusive.
// -s and p will contain the same number of elements.
// -Each element of p will be between 1 and 1000000000 (109), inclusive.
// -Each element of s will be between 1 and 1000, inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// {1,2,1}
// {3,5,9}
// 
// Returns: 15
// 
// The possible groups and their productivities are (each possible group using only 1 of the workers with skill level 5 is only listed once):
// 
// Group | Productivity   Group | Productivity    Group | Productivity
// ------+-------------   ------+-------------  --------+-------------
//   3   | 3               3-9  |  6             3-5-9  | 9
//   5   | 5               5-5  | 10             5-5-9  | 15
//   9   | 9               5-9  | 10            3-5-5-9 | 12
//  3-5  | 6              3-5-5 |  9
// 
// 
// 1)
// {2,2,2,2}
// {5,1,1,5}
// 
// Returns: 20
// 
// Here there are 4 people of skill level 5, and 4 people of skill level 1. The best choice is to assign the task to the 4 workers of skill level 5.
// 
// 2)
// {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
// {31,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
// 
// Returns: 31
// 
// The skilled worker has higher productivity working alone than any other group of workers.
// 
// 3)
// {1000000000,1000000000,1000000000}
// {1000,999,998}
// 
// Returns: 2994000000000
// 
// Recruit all of them.
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
