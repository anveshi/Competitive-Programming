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


class CompressionText {
public:
	int shortestLength(string original) {
		
	}
};


// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, string p0, bool hasAnswer, int p1) {
	cout << "Test " << testNum << ": [" << "\"" << p0 << "\"";
	cout << "]" << endl;
	CompressionText *obj;
	int answer;
	obj = new CompressionText();
	clock_t startTime = clock();
	answer = obj->shortestLength(p0);
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
	
	string p0;
	int p1;
	
	{
	// ----- test 0 -----
	p0 = "BARXFOO";
	p1 = 5;
	all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	p0 = "FOOFOO BAR";
	p1 = 7;
	all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	p0 = "ABCDEFGHIJKLMNOPQRSTUVWXYABCDEFGHIJKLMNOPQRSTUVWXY";
	p1 = 46;
	all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	p0 = "QWERTYUIOPASDFGHJKLZXCVBNM";
	p1 = 24;
	all_right = KawigiEdit_RunTest(3, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	p0 = "BBAAAABBBBAAABABABBBABABAAABABABAAABBAABABBBABAAAB";
	p1 = 40;
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
// You are part of a team that is working on a piece of software to handle text compression.  Your team
// has designed the compression algorithm as follows:
// 
// To compress a given string of text, two strings, each 3 characters in length, will be chosen as
// compression keys.  The strings may contain any combination of capital letters and/or spaces.  Then, a compressed string will be generated from the original such that replacing
// "*1" in the compressed string with the first string and replacing "*2" with the second string will recreate the original text.
// 
// For example, if the two compression keys are "FOO" and "BAR", then the compressed string
// "*2X*1" would decompress to "BARXFOO", and "*1*1 *2" would decompress to "FOOFOO BAR".
// 
// You have been tasked with writing a proof of concept implementation to test the effectiveness
// of this compression scheme.  You will be given a string original.  Your goal
// is to optimally select the two compression keys, and generate the compressed text to be as short as
// possible.  You are to return the length of the shortest possible text.
// 
// DEFINITION
// Class:CompressionText
// Method:shortestLength
// Parameters:string
// Returns:int
// Method signature:int shortestLength(string original)
// 
// 
// CONSTRAINTS
// -original will contain between 1 and 50 characters, inclusive.
// -Each character of original will be an uppercase letter ('A'-'Z') or a space (' ').
// 
// 
// EXAMPLES
// 
// 0)
// "BARXFOO"
// 
// Returns: 5
// 
// The first example from the problem statement.
// 
// 1)
// "FOOFOO BAR"
// 
// Returns: 7
// 
// The second example from the problem statement.
// 
// 2)
// "ABCDEFGHIJKLMNOPQRSTUVWXYABCDEFGHIJKLMNOPQRSTUVWXY"
// 
// Returns: 46
// 
// It's a long string, but no 3-character substring appears more than twice.
// 
// 3)
// "QWERTYUIOPASDFGHJKLZXCVBNM"
// 
// Returns: 24
// 
// Here, no substring repeats itself at all.  The best we can do is to pick any two substrings to replace.
// 
// 4)
// "BBAAAABBBBAAABABABBBABABAAABABABAAABBAABABBBABAAAB"
// 
// Returns: 40
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
