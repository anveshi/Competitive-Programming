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
char s[51][51];

class Target {
public:
	vector <string> draw(int n) {
		int i,j;
		string line = string(n,' ');
		vector <string> s(n,line);
		for(i=0;i<=n/2;i+=2){
			cout << i <<  " "<< endl;
			int st = i;
			int end = n-i-1;
			for(j=st;j<=end;j++)
				s[st].at(j) = '#';
			for(j=st;j<=end;j++)
				s[end].at(j) = '#';
			for(j=st;j<=end;j++)
				s[j].at(st) = '#';
			for(j=st;j<=end;j++)
				s[j].at(end) = '#';
		}
		return s;
	}
};


// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, int p0, bool hasAnswer, vector <string> p1) {
	cout << "Test " << testNum << ": [" << p0;
	cout << "]" << endl;
	Target *obj;
	vector <string> answer;
	obj = new Target();
	clock_t startTime = clock();
	answer = obj->draw(p0);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout <<
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << "{";
		for (int i = 0; int(p1.size()) > i; ++i) {
			if (i > 0) {
				cout << ",";
			}
			cout << "\"" << p1[i] << "\"";
		}
		cout << "}" << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << "{";
	for (int i = 0; int(answer.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
			}
		cout << "\"" << answer[i] << "\"";
	}
	cout << "}" << endl;
	if (hasAnswer) {
		if (answer.size() != p1.size()) {
			res = false;
		} else {
			for (int i = 0; int(answer.size()) > i; ++i) {
				if (answer[i] != p1[i]) {
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
	
	int p0;
	vector <string> p1;
	
	{
	// ----- test 0 -----
	p0 = 5;
	string t1[] = {"#####","#   #","# # #","#   #","#####"};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	p0 = 9;
	string t1[] = {"#########","#       #","# ##### #","# #   # #","# # # # #","# #   # #","# ##### #","#       #","#########"};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	p0 = 13;
	string t1[] = {"#############","#           #","# ######### #","# #       # #","# # ##### # #","# # #   # # #","# # # # # # #","# # #   # # #","# # ##### # #","# #       # #","# ######### #","#           #","#############"};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	p0 = 17;
	string t1[] = {"#################","#               #","# ############# #","# #           # #","# # ######### # #","# # #       # # #","# # # ##### # # #","# # # #   # # # #","# # # # # # # # #","# # # #   # # # #","# # # ##### # # #","# # #       # # #","# # ######### # #","# #           # #","# ############# #","#               #","#################"};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	all_right = KawigiEdit_RunTest(3, p0, true, p1) && all_right;
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
// Here at [topcoder], we call a contestant a "target" if their rating is 3000 or more.
// In the arena, the targets have a red icon with a small target on it.
// Do you want to become a target as well?
// Sure you do.
// But before you get there, let's start with something easier: drawing a target.
// 
// 
// 
// The target you need to draw consists of nested squares.
// The innermost square is just a single '#' character.
// The larger squares use alternatingly the character ' ' (space) and the character '#'.
// Here is an example in which the side of the largest square is n = 5:
// 
// 
// 
// 
// #####
// #   #
// # # #
// #   #
// #####
// 
// 
// 
// And here is an example for n = 9:
// 
// 
// 
// #########
// #       #
// # ##### #
// # #   # #
// # # # # #
// # #   # #
// # ##### #
// #       #
// #########
// 
// 
// 
// 
// You will be given an int n.
// Your method must return a vector <string> which contains a drawing of the target with side n.
// More precisely, each element of the returned vector <string> must be one row of the drawing, in order.
// Therefore, the returned vector <string> will consist of n elements, each with n characters.
// (See the examples below for clarification.)
// 
// 
// 
// The value of n will be such that a target like the ones above can be drawn: 5, 9, 13, and so on.
// Formally, n will be of the form 4k+1, where k is a positive integer.
// 
// DEFINITION
// Class:Target
// Method:draw
// Parameters:int
// Returns:vector <string>
// Method signature:vector <string> draw(int n)
// 
// 
// CONSTRAINTS
// -n will be between 5 and 49, inclusive.
// -n mod 4 will be 1.
// 
// 
// EXAMPLES
// 
// 0)
// 5
// 
// Returns: {"#####", "#   #", "# # #", "#   #", "#####" }
// 
// 
// 
// 1)
// 9
// 
// Returns: {"#########", "#       #", "# ##### #", "# #   # #", "# # # # #", "# #   # #", "# ##### #", "#       #", "#########" }
// 
// 
// 
// 2)
// 13
// 
// Returns: {"#############", "#           #", "# ######### #", "# #       # #", "# # ##### # #", "# # #   # # #", "# # # # # # #", "# # #   # # #", "# # ##### # #", "# #       # #", "# ######### #", "#           #", "#############" }
// 
// 
// 
// 3)
// 17
// 
// Returns: {"#################", "#               #", "# ############# #", "# #           # #", "# # ######### # #", "# # #       # # #", "# # # ##### # # #", "# # # #   # # # #", "# # # # # # # # #", "# # # #   # # # #", "# # # ##### # # #", "# # #       # # #", "# # ######### # #", "# #           # #", "# ############# #", "#               #", "#################" }
// 
// 
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
