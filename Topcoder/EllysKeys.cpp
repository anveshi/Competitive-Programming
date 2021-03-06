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


class EllysKeys {
public:
	int getMax(vector <string> keys) {
		set < pair<int,int> > S;
		int p[22];
		p[0]=1;
		for(int i=1;i<22;i++){
			p[i]=p[i-1]*2;
		}
		vector <int> v;v.clear();
		int n,m;
		n = keys.size();
		m = keys[0].length();
		for(int i=0;i<n;i++){
			int temp=0;
			for(int j=m-1;j>=0;j--){
				if(keys[i][j]=='^')
					temp+=p[m-1-j];
			}
			cout << temp << endl;
			v.pb(temp);
		}
		sort(v.begin(), v.end());
		
		S.insert(mp(v[0],1));
		for(int i=1;i<n;i++){
			set <pair <int,int> > St;
			St.clear();
			for(set<pair<int,int> > ::iterator it=S.begin();it!=S.end();it++){
				if((it->first)&v[i]==0){
					St.insert(mp(((it->first)|(v[i])),(it->second)+1));
				}
			}
			St.insert(mp(v[i],1));
			for(set<pair<int,int> >:: iterator it=St.begin();it!=St.end();it++){
				S.insert(mp(it->first,it->second));
			}
			St.clear();
		}
		int ans =0;
		for(set<pair<int,int> > ::iterator it=S.begin();it!=S.end();it++){
			ans = max(ans,it->second);
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
bool KawigiEdit_RunTest(int testNum, vector <string> p0, bool hasAnswer, int p1) {
	cout << "Test " << testNum << ": [" << "{";
	for (int i = 0; int(p0.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << "\"" << p0[i] << "\"";
	}
	cout << "}";
	cout << "]" << endl;
	EllysKeys *obj;
	int answer;
	obj = new EllysKeys();
	clock_t startTime = clock();
	answer = obj->getMax(p0);
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
	
	vector <string> p0;
	int p1;
	
	{
	// ----- test 0 -----
	string t0[] = {"..^.^^.^","^.^^...^","^.....^."};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 2;
	all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	string t0[] = {"^.^"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 1;
	all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	string t0[] = {"^..^...^",".^^.....",".^..^...","..^...^.","...^^.^."};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 3;
	all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	string t0[] = {"....................","^^^^^^..^^^^..^^^^^.","..^^...^^..^^.^^..^^","..^^...^^..^^.^^^^^.","..^^...^^..^^.^^....","..^^....^^^^..^^....","....................",".^^^^...^^^^..^^^^..","^^...^.^^..^^.^^..^^","^^.....^^..^^.^^..^^","^^...^.^^..^^.^^..^^",".^^^^...^^^^..^^^^..","....................","...^^^^^^...^^^^^...","...^^.......^^..^^..","...^^^^^....^^^^^...","...^^.......^^.^^...","...^^^^^^...^^..^^..","...................."};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 5;
	all_right = KawigiEdit_RunTest(3, p0, true, p1) && all_right;
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
// The old-fashioned door lock keys are usually some pattern of cuts into a metal that should fit perfectly into the lock in order to unlock it. The key also has a handle at one of the ends which is used to turn the key over once inserted into the lock.
// 
// The simplest keys have the cuts at equal depth, i.e. each part of the key is either cut or not. We can represent this as a string, in which '.' (called a "cut") would mean there is a cut and '^' (also called a "tooth") that there is not. An example key would be ".^^.^.^^^.^.^". This key has length 13 and has five cuts at positions 0, 3, 5, 9, and 11 (zero-indexed) and eight teeth at the rest of the positions.
// 
// Elly is designing a new key-lock mechanism. It contains several "simple keys" of equal length aligned parallel to each-other. The more simple keys the girl uses, the better the security of the locking gets. However, due to the specifics of the lock, no two keys can have a tooth at the same position. For example if the girl has the keys {"..^.^^.^", "^.^^...^", "^.....^."}, she can align "..^.^^.^" and "^.....^." next to each other, but not use all three of them, because the teeth of "^.^^...^" at positions 0, 2 and 7 (zero-indexed) would collide with other teeth. Moreover, the girl cannot even use only the keys "^.^^...^" and "^.....^." together, because they have a tooth at the same position.
// 
// The girl has several keys she can use for her new locking system. They are given to you in the vector <string> keys. Each element of keys represents a single key in the format described above ('.' for a cut and '^' for a tooth). We assume the handles of each key are to the left of the leftmost position (which means that you cannot use any of the keys reversed). Help Elly by determining the maximal number of keys she can use for her lock.
// 
// 
// 
// DEFINITION
// Class:EllysKeys
// Method:getMax
// Parameters:vector <string>
// Returns:int
// Method signature:int getMax(vector <string> keys)
// 
// 
// CONSTRAINTS
// -keys will contain between 1 and 50 elements, inclusive.
// -Each element of keys will have length between 1 and 20, inclusive.
// -Each element of keys will contain only the characters '.' and '^'. 
// -All elements of keys will have the same length.
// 
// 
// EXAMPLES
// 
// 0)
// {"..^.^^.^",
//  "^.^^...^",
//  "^.....^."}
// 
// Returns: 2
// 
// The example from the problem statement.
// 
// 1)
// {"^.^"}
// 
// Returns: 1
// 
// With a single key there's nothing else to do than use it.
// 
// 2)
// {"^..^...^",
//  ".^^.....",
//  ".^..^...",
//  "..^...^.",
//  "...^^.^."}
// 
// Returns: 3
// 
// Here the optimal configuration is to take keys 0, 2, and 3 (zero-indexed).
// 
// 3)
// {"....................",
//  "^^^^^^..^^^^..^^^^^.",
//  "..^^...^^..^^.^^..^^",
//  "..^^...^^..^^.^^^^^.",
//  "..^^...^^..^^.^^....",
//  "..^^....^^^^..^^....",
//  "....................",
//  ".^^^^...^^^^..^^^^..",
//  "^^...^.^^..^^.^^..^^",
//  "^^.....^^..^^.^^..^^",
//  "^^...^.^^..^^.^^..^^",
//  ".^^^^...^^^^..^^^^..",
//  "....................",
//  "...^^^^^^...^^^^^...",
//  "...^^.......^^..^^..",
//  "...^^^^^....^^^^^...",
//  "...^^.......^^.^^...",
//  "...^^^^^^...^^..^^..",
//  "...................."}
// 
// Returns: 5
// 
// It is possible that some keys don't have any teeth, in which case all of them can be used.
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
