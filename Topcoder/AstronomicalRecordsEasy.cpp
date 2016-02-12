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


class AstronomicalRecordsEasy {
public:
	int minimalPlanets(vector <int> A, vector <int> B) {
		int res = A.size()+B.size();
		for(int i=0;i<A.size();i++){
			for(int j=0;j<B.size();j++){
				int a1=A[i],b1=B[j];
				set <int> S;
				for(int k=0;k<A.size();k++)
						S.insert(b1*A[k]);
				for(int k=0;k<B.size();k++)
						S.insert(a1*B[k]);
				if(res>S.size())
					res = S.size();
			//	res =  min(res,S.size());			
			}
		}
		return res;
	}
};


// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, vector <int> p0, vector <int> p1, bool hasAnswer, int p2) {
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
	AstronomicalRecordsEasy *obj;
	int answer;
	obj = new AstronomicalRecordsEasy();
	clock_t startTime = clock();
	answer = obj->minimalPlanets(p0, p1);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << p2 << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << answer << endl;
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
	int p2;
	
	{
	// ----- test 0 -----
	int t0[] = {1,2,3,4};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {2,3,4,5};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 5;
	all_right = KawigiEdit_RunTest(0, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	int t0[] = {1,2,3,4};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {2,4,6,8};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 4;
	all_right = KawigiEdit_RunTest(1, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	int t0[] = {1,2,3,5,6,8,9};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {2,4,5,6,7,8,9};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 9;
	all_right = KawigiEdit_RunTest(2, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	int t0[] = {1,2,3,4};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {6,7,8,9};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 6;
	all_right = KawigiEdit_RunTest(3, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	int t0[] = {200,500};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {100,200,300,400,600,700,800,900};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 9;
	all_right = KawigiEdit_RunTest(4, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 5 -----
	int t0[] = {1,2,3,4,5,6,7,8,9,10,11,12};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {6,7,8,9,10,11,12,13,14,15};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 15;
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
// Fox Ciel found two astronomical records.
// They both describe the same solar system.
// In this solar system each planet orbits the sun at some fixed distance, and those distances are distinct.
// Each of the two records contains a comparison of some of those distances.
// 
// 
// 
// The first record is a vector <int> A with x elements.
// These elements correspond to some x planets in the solar system.
// The distances at which these planets orbit the sun have the ratio A[0] : A[1] : ... : A[x-1].
// The planets described by A are ordered by their distance from the sun.
// 
// (That is, earlier elements of A correspond to planets that are closer to the sun.
// Thus, the elements of A will always form a strictly increasing sequence.)
// 
// 
// 
// The second record is a vector <int> B with y elements.
// These elements correspond to some y planets in the solar system.
// The distances at which these planets orbit the sun have the ratio B[0] : B[1] : ... : B[y-1].
// The planets described by B are also ordered by their distance from the sun.
// 
// 
// 
// Note that the planets mentioned in a record do not have to be consecutive.
// For example, if a solar system contains the planets P, Q, R, S, T, and U, it is possible that the first record compares P, R, and S, and the second record compares Q, R, T, and U.
// 
// 
// 
// We assume that both records are correct.
// Return the smallest possible total number of planets in the solar system.
// 
// DEFINITION
// Class:AstronomicalRecordsEasy
// Method:minimalPlanets
// Parameters:vector <int>, vector <int>
// Returns:int
// Method signature:int minimalPlanets(vector <int> A, vector <int> B)
// 
// 
// CONSTRAINTS
// -A will contain between 2 and 50 elements, inclusive.
// -B will contain between 2 and 50 elements, inclusive.
// -Each element in A will be between 1 and 1,000, inclusive.
// -Each element in B will be between 1 and 1,000, inclusive.
// -Elements in A will be strictly increasing.
// -Elements in B will be strictly increasing.
// 
// 
// EXAMPLES
// 
// 0)
// {1,2,3,4}
// {2,3,4,5}
// 
// Returns: 5
// 
// There have to be at least 4 planets, because each record compares 4 of them.
// There cannot be exactly 4 planets, because 1:2:3:4 is not the same ratio as 2:3:4:5.
// For example, the orbital radii of the two planets closest to the sun would have to have ratio 1:2 and at the same time ratio 2:3, which is impossible.
// There can be exactly 5 planets with relative orbital radii 1,2,3,4,5.
// 
// 
// 1)
// {1,2,3,4}
// {2,4,6,8}
// 
// Returns: 4
// 
// In this case we can only have 4 stars, because 1:2:3:4 = 2:4:6:8.
// 
// 2)
// {1,2,3,5,6,8,9}
// {2,4,5,6,7,8,9}
// 
// Returns: 9
// 
// One optimal solution: 1, 2, 3 ,4 ,5 ,6 ,7, 8, 9.
// 
// 3)
// {1,2,3,4}
// {6,7,8,9}
// 
// Returns: 6
// 
// One optimal solution: 3, 6, 7, 8, 9, 12.
// 
// 
// 4)
// {200,500}
// {100,200,300,400,600,700,800,900}
// 
// Returns: 9
// 
// 
// 
// 5)
// {1,2,3,4,5,6,7,8,9,10,11,12}
// {6,7,8,9,10,11,12,13,14,15}
// 
// Returns: 15
// 
// 
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!