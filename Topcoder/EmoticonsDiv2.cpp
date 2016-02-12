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
int maxdiv(int x){
	for(int i=2;i*i<=x;i++){
		if(x%i==0)
			return x/i;
	}
	return 1;
}

class EmoticonsDiv2 {
public:
	int printSmiles(int smiles) {
		return fun(smiles);
	}
	int fun(int x){
		if(x==1)return 0;
		//else if(x==2)return 2;
		int z = maxdiv(x);
		return fun(z)+(x/z);
	}
};


// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, int p0, bool hasAnswer, int p1) {
	cout << "Test " << testNum << ": [" << p0;
	cout << "]" << endl;
	EmoticonsDiv2 *obj;
	int answer;
	obj = new EmoticonsDiv2();
	clock_t startTime = clock();
	answer = obj->printSmiles(p0);
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
	
	int p0;
	int p1;
	
	{
	// ----- test 0 -----
	p0 = 2;
	p1 = 2;
	all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	p0 = 6;
	p1 = 5;
	all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	p0 = 11;
	p1 = 11;
	all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	p0 = 16;
	p1 = 8;
	all_right = KawigiEdit_RunTest(3, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	p0 = 1000;
	p1 = 21;
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
// You are very happy because you advanced to the next round of a very important programming contest.
// You want your best friend to know how happy you are.
// Therefore, you are going to send him a lot of smile emoticons.
// You are given an int smiles: the exact number of emoticons you want to send.
// 
// You have already typed one emoticon into the chat.
// Then, you realized that typing is slow.
// Instead, you will produce the remaining emoticons using copy and paste.
// 
// You can only do two different operations:
// 
// Copy all the emoticons you currently have into the clipboard.
// Paste all emoticons from the clipboard.
// 
// Each operation takes precisely one second.
// Copying replaces the old content of the clipboard.
// Pasting does not empty the clipboard.
// Note that you are not allowed to copy just a part of the emoticons you already have.
// 
// Return the smallest number of seconds in which you can turn the one initial emoticon into smiles emoticons.
// 
// DEFINITION
// Class:EmoticonsDiv2
// Method:printSmiles
// Parameters:int
// Returns:int
// Method signature:int printSmiles(int smiles)
// 
// 
// CONSTRAINTS
// -smiles will be between 2 and 1000, inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// 2
// 
// Returns: 2
// 
// First use copy, then use paste. The first operation copies one emoticon into the clipboard, the second operation pastes it into the message, so now you have two emoticons and you are done.
// 
// 1)
// 6
// 
// Returns: 5
// 
// 
// Copy. This puts one emoticon into the clipboard.
// Paste. You now have 2 emoticons in the message.
// Copy. The clipboard now contains 2 emoticons.
// Paste. You now have 4 emoticons in the message.
// Paste. You now have 6 emoticons in the message and you are done.
// 
// 
// 2)
// 11
// 
// Returns: 11
// 
// 
// 
// 3)
// 16
// 
// Returns: 8
// 
// 
// 
// 4)
// 1000
// 
// Returns: 21
// 
// 
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
