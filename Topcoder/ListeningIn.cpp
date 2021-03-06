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


class ListeningIn {
public:
	string probableMatch(string typed, string phrase) {
		string s="";int j=0;
		for(int i=0;i<phrase.length();i++){
			if(phrase[i]==typed[j])j++;
			else s+=phrase[i];
		}
		if(j==typed.length())return s;
		else return "UNMATCHED";
	}
};


// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, string p0, string p1, bool hasAnswer, string p2) {
	cout << "Test " << testNum << ": [" << "\"" << p0 << "\"" << "," << "\"" << p1 << "\"";
	cout << "]" << endl;
	ListeningIn *obj;
	string answer;
	obj = new ListeningIn();
	clock_t startTime = clock();
	answer = obj->probableMatch(p0, p1);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << "\"" << p2 << "\"" << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << "\"" << answer << "\"" << endl;
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
	
	string p0;
	string p1;
	string p2;
	
	{
	// ----- test 0 -----
	p0 = "cptr";
	p1 = "capture";
	p2 = "aue";
	all_right = KawigiEdit_RunTest(0, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	p0 = "port to me";
	p1 = "teleport to me";
	p2 = "tele";
	all_right = KawigiEdit_RunTest(1, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	p0 = "back  to base";
	p1 = "back to base";
	p2 = "UNMATCHED";
	all_right = KawigiEdit_RunTest(2, p0, p1, true, p2) && all_right;
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
// You are creating an online multiplayer cooperative game. Players on a team may chat with each other during the game, and you intend to take advantage of this when building the AI to handle opponents. Part of the AI includes determining whether a given phrase is part of a player's chat. Of course, many variations of a given phrase are possible, and you want to detect as many as you can. Shorthand is the most common example: instead of typing 'capture', a player might type 'cptr', or 'port to me' instead of 'teleport to me'. You will be provided with a string typed typed by a player and a phrase that you wish to check against. Return the characters removed from phrase to obtain typed in the order they appear in phrase or "UNMATCHED" if there is no way to obtain typed from phrase by simply removing characters. The constraints ensure that the return is unique (there is only one option for which string is returned).
// 
// DEFINITION
// Class:ListeningIn
// Method:probableMatch
// Parameters:string, string
// Returns:string
// Method signature:string probableMatch(string typed, string phrase)
// 
// 
// CONSTRAINTS
// -typed and phrase will contain only lowercase letters ('a'-'z') and spaces
// -typed and phrase will be between 1 and 50 characters long, inclusive.
// -All valid groups of characters that could be removed to turn phrase into typed will give the same output.
// 
// 
// EXAMPLES
// 
// 0)
// "cptr"
// "capture"
// 
// Returns: "aue"
// 
// The example given in the problem statement.
// 
// 1)
// "port to me"
// "teleport to me"
// 
// Returns: "tele"
// 
// The other example from the statement.
// 
// 2)
// "back  to base"
// "back to base"
// 
// Returns: "UNMATCHED"
// 
// An extra space has been added; we do not account for additions, only deletions.
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
