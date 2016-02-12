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


class BichromeBoard {
public:
	string ableToDraw(vector <string> board) {
		int n = board.size();int i,j,a1=-1,a2=-1,m;
		m =board[0].length(); 
		
		char  x2,x1;
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				if(board[i][j]!='?'){
					a1=i,a2=j;
				}
			}
		}
		if(a1==-1 && a2==-1)return "Possible";
		else{
			if((a1+a2)%2==0){
				x1=board[a1][a2];
				if(x1=='W')x2='B';
				else x2='W';
			}
			else{
				x2=board[a1][a2];
				if(x2=='W')x1='B';
				else x1='W';
			}
			cout << x1 << " "  << x2 << endl;
			int flag=0;
			for(i=0;i<n;i++){
				for(j=0;j<m;j++){
					if(board[i][j]=='?')continue;
					if((i+j)%2==0){
						if(board[i][j]!=x1)flag=1;
					}
					else{
						if(board[i][j]!=x2)flag=1;
					}
					
				}
			}
			if(flag==1)return "Impossible";
			return "Possible";
		}
		
	}
};


// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, vector <string> p0, bool hasAnswer, string p1) {
	cout << "Test " << testNum << ": [" << "{";
	for (int i = 0; int(p0.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << "\"" << p0[i] << "\"";
	}
	cout << "}";
	cout << "]" << endl;
	BichromeBoard *obj;
	string answer;
	obj = new BichromeBoard();
	clock_t startTime = clock();
	answer = obj->ableToDraw(p0);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << "\"" << p1 << "\"" << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << "\"" << answer << "\"" << endl;
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
	
	vector <string> p0;
	string p1;
	
	{
	// ----- test 0 -----
	string t0[] = {"W?W","?" "?B","?" "?" "?"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "Possible";
	all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	string t0[] = {"W?" "?W"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "Impossible";
	all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	string t0[] = {"?" "?"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "Possible";
	all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	string t0[] = {"W?" "?" "?","?" "?B?","W?" "?" "?","?" "?" "?W"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "Possible";
	all_right = KawigiEdit_RunTest(3, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	string t0[] = {"W?" "?" "?","?" "?B?","W?" "?" "?","?B?W"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "Impossible";
	all_right = KawigiEdit_RunTest(4, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 5 -----
	string t0[] = {"B"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "Possible";
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
// We have a rectangular board divided into a grid of unit squares.
// We are going to color each square either white or black.
// 
// 
// You are given the vector <string> board.
// Each character in board represents one unit square.
// If board[i][j] is 'B', the corresponding square must be black.
// If board[i][j] is 'W', the corresponding square must be white.
// Finally, if board[i][j] is '?', you get to choose the color for this square: either white or black.
// 
// 
// Two squares are adjacent if they share a common side.
// We want to color the board in such a way that no two adjacent squares share the same color.
// Return "Possible" (quotes for clarity) if it can be done, or "Impossible" otherwise.
// 
// DEFINITION
// Class:BichromeBoard
// Method:ableToDraw
// Parameters:vector <string>
// Returns:string
// Method signature:string ableToDraw(vector <string> board)
// 
// 
// CONSTRAINTS
// -board will contain between 1 and 50 elements, inclusive.
// -Each element in board will contain between 1 and 50 characters, inclusive.
// -Each element in board will contain the same number of characters.
// -Each character in board will be one of 'W', 'B', '?'.
// 
// 
// EXAMPLES
// 
// 0)
// {"W?W",
//  "??B",
//  "???"}
// 
// Returns: "Possible"
// 
// The solution is:
// 
// WBW
// BWB
// WBW
// 
// 
// 
// 1)
// {"W??W"}
// 
// Returns: "Impossible"
// 
// The four possible colorings of this board are WWWW, WWBW, WBWW, and WBBW.
// In each of them there is at least one pair of adjacent squares that share the same color.
// Thus, there is no way to get a pattern with the desired property.
// 
// 2)
// {"??"}
// 
// Returns: "Possible"
// 
// There are 2 ways:
// WB and BW
// 
// 3)
// {"W???",
//  "??B?",
//  "W???",
//  "???W"}
// 
// Returns: "Possible"
// 
// 
// 
// 4)
// {"W???",
//  "??B?",
//  "W???",
//  "?B?W"}
// 
// Returns: "Impossible"
// 
// 
// 
// 5)
// {"B"}
// 
// Returns: "Possible"
// 
// 
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
