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


class ValueOfString {
public:
	int findValue(string s) {
	int sz,i,ans,j;
	sz = s.length();
	ans =0;
	for(i=0;i<sz;i++){
		int cnt =0;
		for(j=0;j<sz;j++){
			if(s[j]<=s[i])cnt++;
		}
		ans=ans + cnt*(s[i]-'a'+1);
		//cout << cnt << " " << s[i]-'a' << " ";
	}
	return ans;
		
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
	ValueOfString *obj;
	int answer;
	obj = new ValueOfString();
	clock_t startTime = clock();
	answer = obj->findValue(p0);
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
	p0 = "babca";
	p1 = 35;
	all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	p0 = "zz";
	p1 = 104;
	all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	p0 = "y";
	p1 = 25;
	all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	p0 = "aaabbc";
	p1 = 47;
	all_right = KawigiEdit_RunTest(3, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	p0 = "topcoder";
	p1 = 558;
	all_right = KawigiEdit_RunTest(4, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 5 -----
	p0 = "thequickbrownfoxjumpsoverthelazydog";
	p1 = 11187;
	all_right = KawigiEdit_RunTest(5, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 6 -----
	p0 = "zyxwvutsrqponmlkjihgfedcba";
	p1 = 6201;
	all_right = KawigiEdit_RunTest(6, p0, true, p1) && all_right;
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
// You are given a string s consisting of lower case letters.
// We assign the letters 'a' to 'z' values of 1 to 26, respectively.
// We will denote the value assigned to the letter X by val[X].
// For example, val['a'] = 1 and val['e'] = 5.
// 
// 
// 
// We define the value of the string s as follows.
// For each letter s[i], let k[i] be the number of letters in s that are less than or equal to s[i], including s[i] itself.
// Then, the value of s is defined to be the sum of k[i] * val[s[i]] for all valid i.
// 
// 
// 
// Given the string, compute and return the value of the string.
// 
// 
// DEFINITION
// Class:ValueOfString
// Method:findValue
// Parameters:string
// Returns:int
// Method signature:int findValue(string s)
// 
// 
// CONSTRAINTS
// -s will contain between 1 and 50 characters, inclusive.
// -s will consist of lowercase letters ('a'-'z').
// 
// 
// EXAMPLES
// 
// 0)
// "babca"
// 
// Returns: 35
// 
// 
// The value of this string is 2*4 + 1*2 + 2*4 + 3*5 + 1*2 = 35.
// 
// 
// 
// We can get the value as follows. The first character is a 'b' which has value 2, and has 4 characters that are less than or equal to it in the string (i.e. the first, second, third and fifth character of the string). Thus, this first character contributes 2*4 to the sum. We can derive a similar expression for each of the other characters. 
// 
// 
// 1)
// "zz"
// 
// Returns: 104
// 
// 
// 
// 2)
// "y"
// 
// Returns: 25
// 
// 
// 
// 3)
// "aaabbc"
// 
// Returns: 47
// 
// 
// 
// 4)
// "topcoder"
// 
// Returns: 558
// 
// 
// 
// 5)
// "thequickbrownfoxjumpsoverthelazydog"
// 
// Returns: 11187
// 
// 
// 
// 6)
// "zyxwvutsrqponmlkjihgfedcba"
// 
// Returns: 6201
// 
// 
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!