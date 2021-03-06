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
class SingingEasy {
public:
	int solve(vector <int> pitch) {
		
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
	SingingEasy *obj;
	int answer;
	obj = new SingingEasy();
	clock_t startTime = clock();
	answer = obj->solve(p0);
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
	if (hasAnswer) {
		res = answer == p1;
	}
	cout << "\t" << answer << endl;
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
	interior_
	vector <int> p0;
	int p1;
	
	{
	// ----- test 0 -----
	int t0[] = {1,3,8,12,13};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 7;
	all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	int t0[] = {1,5,6,2,1};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 3;
	all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	int t0[] = {5,5,5,5,4,4,4,4};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 0;
	all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	int t0[] = {1000000};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 0;
	all_right = KawigiEdit_RunTest(3, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	int t0[] = {24,13,2,4,54,23,12,53,12,23,42,13,53,12,24,12,11,24,42,52,12,32,42};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 188;
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
// Alice and Bob are going to sing a song together.
// For simplicity, we will assign the numbers 1 through 1,000,000 to the pitches that occur in the song (from the lowest to the highest).
// Both Alice and Bob are able to sing all of these pitches.
// You are given a vector <int> pitch containing the pitches of all notes in the song, in order.
// Each note of the song will be sung by exactly one of our singers.
// 
// 
// 
// Changing the pitch of one's voice is exhausting.
// Given a sequence of pitches to sing, the difficulty for the singer can be computed by summing up the differences between consecutive pitches.
// For example, the difficulty of the sequence 8, 8, 13, 12 is abs(8-8) + abs(13-8) + abs(12-13) = 0+5+1 = 6.
// 
// 
// 
// The total difficulty of singing the song can be computed as the difficulty for Alice plus the difficulty for Bob.
// Return the smallest possible total difficulty of singing the given song.
// 
// 
// DEFINITION
// Class:SingingEasy
// Method:solve
// Parameters:vector <int>
// Returns:int
// Method signature:int solve(vector <int> pitch)
// 
// 
// CONSTRAINTS
// -The number of elements in pitches will be between 1 and 2,000, inclusive.
// -all elements in pitch will be between 1 and 1,000,000, inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// {1,3,8,12,13}
// 
// Returns: 7
// 
// One optimal solution is to let Alice sing the first two notes and Bob the remaining three.
// Then, Alice will sing the sequence of pitches {1,3} and Bob will sing {8,12,13}.
// The difficulty for Alice is abs(3-1) = 2.
// The difficulty for Bob is abs(12-8) + abs(13-12) = 5.
// Thus, the total difficulty is 2+5 = 7.
// 
// 1)
// {1,5,6,2,1}
// 
// Returns: 3
// 
// One optimal solution is to let our singers sing in the order Alice-Bob-Bob-Alice-Alice.
// In this case Alice sings the sequence of pitches {1,2,1} and Bob sings {5,6}.
// Hence the difficulty for Alice is 2 and the difficulty for Bob is 1.
// 
// 2)
// {5,5,5,5,4,4,4,4}
// 
// Returns: 0
// 
// 
// 
// 3)
// {1000000}
// 
// Returns: 0

// 4)
// {24,13,2,4,54,23,12,53,12,23,42,13,53,12,24,12,11,24,42,52,12,32,42}
// 
// Returns: 188
// 
// 
// 
// END KAWIGIEDIT TESTING
//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
