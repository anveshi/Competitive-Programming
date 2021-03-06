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


class EightRooks {
public:
	string isCorrect(vector <string> board) {
    int c=0;map<int,int>m1,m2;
    for(int i=0;i<8;i++){
      for(int j=0;j<8;j++){
        if(board[i][j]=='R'){
          m1[i]=1;
          m2[j]=1;
          c++;
        }
      }
    }
    if(c!=8)return "Incorrect";
    else{
      for(int i=0;i<8;i++){
        if(m1[i]==0 || m2[i]==0)
          return "Incorrect";
      }
      return "Correct";
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
	EightRooks *obj;
	string answer;
	obj = new EightRooks();
	clock_t startTime = clock();
	answer = obj->isCorrect(p0);
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
	string t0[] = {"R.......",".R......","..R.....","...R....","....R...",".....R..","......R.",".......R"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "Correct";
	all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	string t0[] = {"........","....R...","........",".R......","........","........","..R.....","........"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "Incorrect";
	all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	string t0[] = {"......R.","....R...","...R....",".R......","R.......",".....R..","..R.....",".......R"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "Correct";
	all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	string t0[] = {"......R.","....R...","...R....",".R......","R.......",".......R","..R.....",".......R"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "Incorrect";
	all_right = KawigiEdit_RunTest(3, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	string t0[] = {"........","........","........","........","........","........","........","........"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "Incorrect";
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
// Cat Snuke is playing a puzzle called Eight Rooks Puzzle.
// 
// 
// In this puzzle, he must put exactly eight rooks onto an 8x8 chessboard. No two rooks must be in the same row, and no two rooks must be in the same column.
// 
// 
// You are given a vector <string> board. The j-th character of the i-th element of board is either 'R' or '.'. If this is 'R', the cell in row i, column j contains a rook. Otherwise the cell doesn't contain a rook.
// 
// 
// Determine whether Snuke solved the puzzle correctly. If he solved the puzzle correctly, return "Correct". Otherwise return "Incorrect".
// 
// 
// DEFINITION
// Class:EightRooks
// Method:isCorrect
// Parameters:vector <string>
// Returns:string
// Method signature:string isCorrect(vector <string> board)
// 
// 
// CONSTRAINTS
// -board will contain exactly 8 elements.
// -Each element of board will contain exactly 8 characters.
// -Each character in board will be either 'R' or '.'.
// 
// 
// EXAMPLES
// 
// 0)
// {"R.......",
//  ".R......",
//  "..R.....",
//  "...R....",
//  "....R...",
//  ".....R..",
//  "......R.",
//  ".......R"}
// 
// Returns: "Correct"
// 
// 
// 
// 1)
// {"........",
//  "....R...",
//  "........",
//  ".R......",
//  "........",
//  "........",
//  "..R.....",
//  "........"}
// 
// Returns: "Incorrect"
// 
// The number of rooks is not eight.
// 
// 2)
// {"......R.",
//  "....R...",
//  "...R....",
//  ".R......",
//  "R.......",
//  ".....R..",
//  "..R.....",
//  ".......R"}
// 
// Returns: "Correct"
// 
// 
// 
// 3)
// {"......R.",
//  "....R...",
//  "...R....",
//  ".R......",
//  "R.......",
//  ".......R",
//  "..R.....",
//  ".......R"}
// 
// Returns: "Incorrect"
// 
// The rightmost column contains two rooks.
// 
// 4)
// {"........",
//  "........",
//  "........",
//  "........",
//  "........",
//  "........",
//  "........",
//  "........"}
// 
// Returns: "Incorrect"
// 
// 
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
