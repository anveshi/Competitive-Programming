#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
typedef long long LL;

using namespace std;


class IsItASquare {
public:
	int dist(int x1,int y1,int x2,int y2){
		return ((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
	}
	string isSquare(vector <int> x, vector <int> y) {
		vector <int> v;
		v.clear();
		for(int i=0;i<4;i++){
			for(int j=i+1;j<4;j++){
				v.push_back(dist(x[i],y[i],x[j],y[j]));				
			}			
		}
		sort(v.begin(), v.end());
		int Ok = 1;
		for(int i=1;i<4;i++){
			if(v[i]!=v[0])Ok=0;
		}
		if(2*v[0]!=v[4])Ok=0;
		if(2*v[0]!=v[5])Ok=0;
		if(Ok) return "It's a square";
		else
			return "Not a square";
	}
};


// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, vector <int> p0, vector <int> p1, bool hasAnswer, string p2) {
	cout << "Test " << testNum << ": [" << "{";
	for (int i = 0; int(p0.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p0[i];
	}
	cout << "}" << "," << "{";
	for (int i = 0; int(p1.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p1[i];
	}
	cout << "}";
	cout << "]" << endl;
	IsItASquare *obj;
	string answer;
	obj = new IsItASquare();
	clock_t startTime = clock();
	answer = obj->isSquare(p0, p1);
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
	
	vector <int> p0;
	vector <int> p1;
	string p2;
	
	{
	// ----- test 0 -----
	int t0[] = {0,0,2,2};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {0,2,0,2};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = "It's a square";
	all_right = KawigiEdit_RunTest(0, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	int t0[] = {0,1,5,6};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {1,6,0,5};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = "It's a square";
	all_right = KawigiEdit_RunTest(1, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	int t0[] = {0,0,7,7};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {0,3,0,3};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = "Not a square";
	all_right = KawigiEdit_RunTest(2, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	int t0[] = {0,5000,5000,10000};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {5000,0,10000,5000};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = "It's a square";
	all_right = KawigiEdit_RunTest(3, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	int t0[] = {1,2,3,4};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {4,3,2,1};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = "Not a square";
	all_right = KawigiEdit_RunTest(4, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 5 -----
	int t0[] = {0,5,3,8};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {0,0,4,4};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = "Not a square";
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
// It's a bird! It's a plane! No, it's a square in a plane! Wait, is it really a square?
// 
// 
// There are four distinct points in the plane.
// You are given their coordinates in the vector <int>s x and y:
// for each i between 0 and 3, inclusive, there is a point at (x[i], y[i]).
// 
// 
// Return "It's a square" (quotes for clarity) if the four points are the vertices of a square.
// Otherwise, return "Not a square".
// 
// DEFINITION
// Class:IsItASquare
// Method:isSquare
// Parameters:vector <int>, vector <int>
// Returns:string
// Method signature:string isSquare(vector <int> x, vector <int> y)
// 
// 
// CONSTRAINTS
// -x will contain 4 elements.
// -y will contain 4 elements.
// -Each element of x will be between 0 and 10,000, inclusive.
// -Each element of y will be between 0 and 10,000, inclusive.
// -The four points described by x and y will be distinct.
// 
// 
// EXAMPLES
// 
// 0)
// {0, 0, 2, 2}
// {0, 2, 0, 2}
// 
// Returns: "It's a square"
// 
// 
// 
// 1)
// {0, 1, 5, 6}
// {1, 6, 0, 5}
// 
// Returns: "It's a square"
// 
// Note that the sides of the square do not have to be parallel to the coordinate axes.
// Also note that the order in which the points are given does not have to be the same as the order in which you would encounter them when following the boundary of the square.
// 
// 2)
// {0, 0, 7, 7}
// {0, 3, 0, 3}
// 
// Returns: "Not a square"
// 
// 
// 
// 3)
// {0, 5000, 5000, 10000}
// {5000, 0, 10000, 5000}
// 
// Returns: "It's a square"
// 
// 
// 
// 4)
// {1, 2, 3, 4}
// {4, 3, 2, 1}
// 
// Returns: "Not a square"
// 
// 
// 
// 5)
// {0, 5, 3, 8}
// {0, 0, 4, 4}
// 
// Returns: "Not a square"
// 
// 
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
