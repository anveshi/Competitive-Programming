#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
typedef long long LL;

using namespace std;

class KuhnImplementation
{
public:
	int n, k;
	vector < vector<int> > g;
	vector<int> pairs_of_right, pairs_of_left;
	vector<bool> used;
 
 
	bool kuhn (int v) 
	{
		if (used[v])  return false;
		used[v] = true;
		for (int i = 0; i < g[v].size(); ++i) 
		{
			int to = g[v][i]-n;
			if (pairs_of_right[to] == -1 || kuhn (pairs_of_right[to])) 
			{
				pairs_of_right[to] = v;
				pairs_of_left[v] = to;
				return true;
			}
		}
		return false;
	}
 
	vector<pair<int, int> > find_max_matching(vector<vector<int> > &_g, int _n, int _k) 
	{
		g = _g;
		//g[i] is a list of adjacent vertices to vertex i, where i is from left patr and g[i][j] is from right part
		n = _n;
		//n is number of vertices in left part of graph
		k = _k;
		//k is number of vertices in right part of graph
 
		pairs_of_right = vector<int> (k, -1);
		pairs_of_left = vector<int> (n, -1);
		//pairs_of_right[i] is a neighbor of vertex i from right part, on marked edge
		//pairs_of_left[i]  is a neighbor of vertex i from left part, on marked edge
		used = vector<bool> (n, false);
 
 
		bool path_found;
		do {
			fill(used.begin(), used.end(), false);
			path_found = false;
			//remember to start only from free vertices which are not visited yet
			for (int i = 0; i < n; ++i)
				if (pairs_of_left[i] < 0 && !used[i])
					path_found |= kuhn (i);
		} while (path_found);
 
 
		vector<pair<int, int> > res;
		for(int i = 0; i < k; i++)
			if(pairs_of_right[i] != -1)
				res.push_back(make_pair(pairs_of_right[i], i+n));
 
		return res;
	}
};

int Dp[305][305];
class RookAttack {
public:
	vector <int> split(string s){
  	stringstream A(s);
  	vector <int> res;
  	int t;
  	while(A>>t)
    	res.push_back(t);
  	return res;
	}

	int howMany(int rows, int cols, vector <string> cutouts) {
			memset(Dp,0,sizeof Dp);

		for(int i=0;i<cutouts.size();i++){
			vector <int> temp = split(cutouts[i]);
		//	cout << temp[0] << " " << temp[1] << endl;
			Dp[temp[0]][temp[1]] = 1;
		}
		int n,k;
		n = rows;
		k = cols;
		vector <vector<int> > g(n);
		for(int i=0;i<n;i++){
			for(int j=0;j<k;j++){
				if(Dp[i][j]==0){
					g[i].push_back(j+n);
				}
			}
		}


		KuhnImplementation obj;
		return obj.find_max_matching(g,n,k).size();
	}
};


class RookAttack1 
{
public:
        int howMany(int n, int k, vector <string> cuts) 
        {
		vector<vector<int> > g(n);
		vector<vector<bool> > _g(n, vector<bool> (k, true));
		
		for(int i = 0; i < cuts.size(); i++)
		{
			istringstream is(cuts[i]);
			int a, b;
			char c;
			while(is >> a >> b)
			{
				_g[a][b] = false;
				is >> c;
			}
		}
 
		for(int i = 0; i < n; i++)
			for(int j = 0; j < k; j++)
				if(_g[i][j])
					g[i].push_back(j+n);
 
		//if you use Kuhn algorithm
		KuhnImplementation obj;
                // or if you use max flow algorithm
                //MaxFlowImplementation obj
		return obj.find_max_matching(g, n, k).size();
        }
};

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, int p0, int p1, vector <string> p2, bool hasAnswer, int p3) {
	cout << "Test " << testNum << ": [" << p0 << "," << p1 << "," << "{";
	for (int i = 0; int(p2.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << "\"" << p2[i] << "\"";
	}
	cout << "}";
	cout << "]" << endl;
	RookAttack *obj;
	int answer;
	obj = new RookAttack();
	clock_t startTime = clock();
	answer = obj->howMany(p0, p1, p2);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << p3 << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << answer << endl;
	if (hasAnswer) {
		res = answer == p3;
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
	vector <string> p2;
	int p3;
	
	{
	// ----- test 0 -----
	p0 = 8;
	p1 = 8;
	p2.clear() /*{}*/;
	p3 = 8;
	all_right = KawigiEdit_RunTest(0, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	p0 = 2;
	p1 = 2;
	string t2[] = {"0 0","0 1","1 1","1 0"};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	p3 = 0;
	all_right = KawigiEdit_RunTest(1, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	p0 = 3;
	p1 = 3;
	string t2[] = {"0 0","1 0","1 1","2 0","2 1","2 2"};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	p3 = 2;
	all_right = KawigiEdit_RunTest(2, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	p0 = 3;
	p1 = 3;
	string t2[] = {"0 0","1 2","2 2"};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	p3 = 3;
	all_right = KawigiEdit_RunTest(3, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	p0 = 200;
	p1 = 200;
	p2.clear() /*{}*/;
	p3 = 200;
	all_right = KawigiEdit_RunTest(4, p0, p1, p2, true, p3) && all_right;
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
// You have been given a rows-by-cols chessboard, with a list of squares cut out.  The list of cutouts will be given in a vector <string> cutouts.  Each element of cutouts is a comma-delimited lists of coords.  Each coord has the form (quotes for clarity) "r c".  If coord "r c" appears in an element of cutouts, it means that the square at row r column c (0-based) has been removed from the chessboard.  This problem will involve placing rooks on a chessboard, so that they cannot attack each other.  For a rook to attack a target piece, it must share the same row or column as the target.  Your method will return an int that will be the maximum number of rooks that can be placed on the chessboard, such that no pair of rooks can attack each other.  Rooks cannot be placed on cut out squares.  The cut out squares do not affect where the rooks can attack.
// 
// DEFINITION
// Class:RookAttack
// Method:howMany
// Parameters:int, int, vector <string>
// Returns:int
// Method signature:int howMany(int rows, int cols, vector <string> cutouts)
// 
// 
// CONSTRAINTS
// -rows will be between 1 and 300 inclusive.
// -cols will be between 1 and 300 inclusive.
// -cutouts will contain between 0 and 50 elements inclusive.
// -Each element of cutouts will contain between 3 and 50 characters inclusive.
// -Each element of cutouts will be a comma delimited list of coords.  Each coord will be of the form "r c", where r and c are integers, with no extra leading zeros, r is between 0 and rows-1 inclusive,  and c is between 0 and cols-1 inclusive.
// -Each element of cutouts will not contain leading or trailing spaces.
// 
// 
// EXAMPLES
// 
// 0)
// 8
// 8
// {}
// 
// Returns: 8
// 
// In the example cases the .'s represent squares of the chessboard, and the X's represent cut out squares. 
// 
// ........ 
// ........ 
// ........ 
// ........ 
// ........ 
// ........ 
// ........ 
// ........
// 
// 
// 1)
// 2
// 2
// {"0 0","0 1","1 1","1 0"}
// 
// Returns: 0
// 
// 
// XX 
// XX  
// 
// 
// 2)
// 3
// 3
// {"0 0","1 0","1 1","2 0","2 1","2 2"}
// 
// Returns: 2
// 
// 
// X.. 
// XX. 
// XXX
// 
// 
// 3)
// 3
// 3
// {"0 0","1 2","2 2"}
// 
// Returns: 3
// 
// 
// X.. 
// ..X 
// ..X
// 
// 
// 4)
// 200
// 200
// {}
// 
// Returns: 200
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!