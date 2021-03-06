#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
typedef long long LL;

using namespace std;


class RelationClassifier {
public:
	string isBijection(vector <int> domain, vector <int> range) {
		map <int,int> M1, M2;
		int n = domain.size();
		for(int i=0;i<n;i++){
			M1[domain[i]]++;M2[range[i]]++;
		}
		if(M1.size()==n && M2.size()==n)
			return "Bijection";
		else
			return "Not";
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
	RelationClassifier *obj;
	string answer;
	obj = new RelationClassifier();
	clock_t startTime = clock();
	answer = obj->isBijection(p0, p1);
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
	int t0[] = {1,1};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {2,3};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = "Not";
	all_right = KawigiEdit_RunTest(0, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	int t0[] = {4,5};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {2,2};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = "Not";
	all_right = KawigiEdit_RunTest(1, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	int t0[] = {1};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {2};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = "Bijection";
	all_right = KawigiEdit_RunTest(2, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	int t0[] = {1,2,3,4,5};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {1,2,3,4,5};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = "Bijection";
	all_right = KawigiEdit_RunTest(3, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	int t0[] = {14,12,10,13,20,18,9,17,14,9};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {18,6,8,15,2,14,10,13,13,15};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = "Not";
	all_right = KawigiEdit_RunTest(4, p0, p1, true, p2) && all_right;
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
// Weiwei is studying math. Unfortunately, math is very hard for him. Today, the teacher asked Weiwei to determine if a relation is a bijection or not.
// 
// Formally, a relation is a set of ordered pairs of elements. The teacher gave Weiwei one such relation. You are also given a description of this relation: vector <int>s domain and range. For each valid i, the relation contains the ordered pair (domain[i], range[i]).
// 
// Let X be the set of elements that appear at least once in domain. Similarly, let Y be the set of elements that appear at least once in range. We say that an element x of X is paired to an element y of Y if the relation contains the ordered pair (x, y).
// 
// We will say that our relation is a bijection if each element of X is paired to exactly one element of Y, and each element of Y is paired to exactly one element of X.
// 
// If Weiwei's relation is a bijection, return "Bijection" (quotes for clarity). Otherwise, return "Not". Note that the return value is case-sensitive.
// 
// 
// DEFINITION
// Class:RelationClassifier
// Method:isBijection
// Parameters:vector <int>, vector <int>
// Returns:string
// Method signature:string isBijection(vector <int> domain, vector <int> range)
// 
// 
// CONSTRAINTS
// -domain will contain between 1 and 10 elements, inclusive.
// -range will contain the same number of elements as domain.
// -Each element of domain and range will be between 1 and 100, inclusive.
// -No two pairs (domain[i], range[i]) will be identical.
// 
// 
// EXAMPLES
// 
// 0)
// {1, 1}
// {2, 3}
// 
// Returns: "Not"
// 
// Since 1 in X is paired with both 2 and 3 in Y, the given relation is not a bijection.
// 
// 1)
// {4, 5}
// {2, 2}
// 
// Returns: "Not"
// 
// Since both 4 and 5 in X are paired with 2 in Y, the given relation is not a bijection.
// 
// 2)
// {1}
// {2}
// 
// Returns: "Bijection"
// 
// A single ordered pair is always a bijection.
// 
// 3)
// {1, 2, 3, 4, 5}
// {1, 2, 3, 4, 5}
// 
// Returns: "Bijection"
// 
// 
// 
// 4)
// {14, 12, 10, 13, 20, 18, 9, 17, 14, 9}
// {18, 6, 8, 15, 2, 14, 10, 13, 13, 15}
// 
// Returns: "Not"
// 
// 
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
