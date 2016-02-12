#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
typedef long long LL;

using namespace std;


class BearPair {
public:
	int bigDistance(string s) {
		int Ans = -1;
		for(int i=0;i<s.length();i++){
			for(int j=i+1;j<s.length();j++){
				if(s[i] != s[j]){
					Ans = max(Ans, j-i);
				}
			}
		}
		return Ans;
		
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
	BearPair *obj;
	int answer;
	obj = new BearPair();
	clock_t startTime = clock();
	answer = obj->bigDistance(p0);
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
	p0 = "bear";
	p1 = 3;
	all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	p0 = "abcba";
	p1 = 3;
	all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	p0 = "oooohyeahpotato";
	p1 = 13;
	all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	p0 = "zzzzzzzzzzzzzzzzzzzzz";
	p1 = -1;
	all_right = KawigiEdit_RunTest(3, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	p0 = "qw";
	p1 = 1;
	all_right = KawigiEdit_RunTest(4, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 5 -----
	p0 = "xxyyxyxyyyyyyxxxyxyxxxyxyxyyyyyxxxxxxyyyyyyyyxxxxx";
	p1 = 47;
	all_right = KawigiEdit_RunTest(5, p0, true, p1) && all_right;
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
// Bear Limak loves algorithms, especially the ones with words and strings.
// 
// Limak's friend recently entered a programming competition and wrote a program.
// The program contains a string constant s.
// Limak would now like to challenge the program by making it exceed the time limit.
// To do that, he must find two different characters in s that are as far apart as possible.
// 
// Formally, Limak must find two integers i and j with the following properties:
// 
// Both i and j must be valid indices into s. That is, both numbers must be between 0 and n-1, inclusive, where n is the length of s.
// The characters s[i] and s[j] must be different.
// The difference between i and j must be as large as possible.
// 
// 
// You are given the string s.
// If Limak cannot choose any integers with the required properties, return -1.
// Otherwise, return the largest possible difference between i and j.
// 
// DEFINITION
// Class:BearPair
// Method:bigDistance
// Parameters:string
// Returns:int
// Method signature:int bigDistance(string s)
// 
// 
// CONSTRAINTS
// -s will have between 2 and 50 characters, inclusive.
// -Each character in s will be a lowercase English letter ('a' - 'z').
// 
// 
// EXAMPLES
// 
// 0)
// "bear"
// 
// Returns: 3
// 
// Limak can choose the (0-based) indices 0 and 3.
// We have s[0]='b' and s[3]='r', which are indeed two different letters.
// The difference between the two indices is 3-0 = 3.
// 
// 1)
// "abcba"
// 
// Returns: 3
// 
// Here, one optimal solution is for Limak to choose the indices 1 and 4 (corresponding to 'b' and 'a', respectively).
// Another optimal solution is to choose indices 0 and 3 (letters 'a' and 'b').
// In both cases the difference is 3.
// 
// 2)
// "oooohyeahpotato"
// 
// Returns: 13
// 
// 
// 
// 3)
// "zzzzzzzzzzzzzzzzzzzzz"
// 
// Returns: -1
// 
// Here, Limak can't choose two indices with different letters.
// 
// 4)
// "qw"
// 
// Returns: 1
// 
// 
// 
// 5)
// "xxyyxyxyyyyyyxxxyxyxxxyxyxyyyyyxxxxxxyyyyyyyyxxxxx"
// 
// Returns: 47
// 
// 
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!