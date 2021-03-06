#include <bits/stdc++.h>
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


class InfiniteString {
public:
	string equal(string s, string t) {
		int n1,n2,l;string t1,t2;
		t1=s;t2=t;
		string sf,tf;
		sf="";tf="";
		n1 = s.length();
		n2 = t.length();
		for(int i=0;i<n2;i++)
			sf+=t1;
		for(int i=0;i<n1;i++)
			tf+=t2;
		cout << sf.length() << " " << tf.length() << endl;
		if(sf==tf)
		return "Equal";
		else
		return "Not equal";
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
	InfiniteString *obj;
	string answer;
	obj = new InfiniteString();
	clock_t startTime = clock();
	answer = obj->equal(p0, p1);
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
	p0 = "ab";
	p1 = "abab";
	p2 = "Equal";
	all_right = KawigiEdit_RunTest(0, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	p0 = "abc";
	p1 = "bca";
	p2 = "Not equal";
	all_right = KawigiEdit_RunTest(1, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	p0 = "abab";
	p1 = "aba";
	p2 = "Not equal";
	all_right = KawigiEdit_RunTest(2, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	p0 = "aaaaa";
	p1 = "aaaaaa";
	p2 = "Equal";
	all_right = KawigiEdit_RunTest(3, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	p0 = "ababab";
	p1 = "abab";
	p2 = "Equal";
	all_right = KawigiEdit_RunTest(4, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 5 -----
	p0 = "a";
	p1 = "z";
	p2 = "Not equal";
	all_right = KawigiEdit_RunTest(5, p0, p1, true, p2) && all_right;
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
// Given a string s, let f(s) denote the infinite string obtained by concatenating infinitely many copies of s.
// For example, if s = "abc" then f(s) = "abcabcabcabc...".
// 
// 
// Note that the string f(s) still has a beginning.
// Hence, f("abc") and f("bca") are two different infinite strings: the first one starts with an 'a' while the other starts with a 'b'.
// 
// 
// Sometimes, two different finite strings can produce the same infinite string.
// For example, f("abc") is the same as f("abcabc").
// 
// 
// You are given strings s and t.
// Check whether f(s) equals f(t).
// If the two infinite strings are equal, return "Equal".
// Otherwise, return "Not equal".
// 
// DEFINITION
// Class:InfiniteString
// Method:equal
// Parameters:string, string
// Returns:string
// Method signature:string equal(string s, string t)
// 
// 
// CONSTRAINTS
// -s will contain between 1 and 50 elements, inclusive.
// -t will contain between 1 and 50 elements, inclusive.
// -Each character in s will be a lowercase English letter ('a'-'z').
// -Each character in t will be a lowercase English letter ('a'-'z').
// 
// 
// EXAMPLES
// 
// 0)
// "ab"
// "abab"
// 
// Returns: "Equal"
// 
// Both string will generate "ababababab...".
// 
// 1)
// "abc"
// "bca"
// 
// Returns: "Not equal"
// 
// 
// 
// 2)
// "abab"
// "aba"
// 
// Returns: "Not equal"
// 
// The first one will generate "abababab...", but the second one will generate "abaaba...".
// 
// 3)
// "aaaaa"
// "aaaaaa"
// 
// Returns: "Equal"
// 
// 
// 
// 4)
// "ababab"
// "abab"
// 
// Returns: "Equal"
// 
// 
// 
// 5)
// "a"
// "z"
// 
// Returns: "Not equal"
// 
// 
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
