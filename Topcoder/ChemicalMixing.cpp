#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
typedef long long LL;

using namespace std;


class ChemicalMixing {
public:
	double closestBlend(vector <int> volume, vector <int> solute, int minVolume, double desiredStrength) {
		
	}
};


// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, vector <int> p0, vector <int> p1, int p2, double p3, bool hasAnswer, double p4) {
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
	cout << "}" << "," << p2 << "," << p3;
	cout << "]" << endl;
	ChemicalMixing *obj;
	double answer;
	obj = new ChemicalMixing();
	clock_t startTime = clock();
	answer = obj->closestBlend(p0, p1, p2, p3);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << p4 << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << answer << endl;
	if (hasAnswer) {
		res = answer == answer && fabs(p4 - answer) <= 1e-9 * max(1.0, fabs(p4));
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
	double p3;
	double p4;
	
	{
	// ----- test 0 -----
	int t0[] = {10,10};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {1,4};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 5;
	p3 = 0.20;
	p4 = 0.04999999999999999;
	all_right = KawigiEdit_RunTest(0, p0, p1, p2, p3, true, p4) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	int t0[] = {10,10,10,10};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {5,5,5,0};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 35;
	p3 = 0.5;
	p4 = 0.125;
	all_right = KawigiEdit_RunTest(1, p0, p1, p2, p3, true, p4) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	int t0[] = {20,20,20};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {15,15,0};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 40;
	p3 = 0.5;
	p4 = 0.0;
	all_right = KawigiEdit_RunTest(2, p0, p1, p2, p3, true, p4) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	int t0[] = {50,50,50,50};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {12,4,20,0};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 100;
	p3 = 0.5;
	p4 = 0.18;
	all_right = KawigiEdit_RunTest(3, p0, p1, p2, p3, true, p4) && all_right;
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
// Your lab has several containers of a certain type of chemical, each with varying volume, and varying quantity of dissolved solute.  The strength of any container can be calculated as solute / volume.  volume[i] and solute[i] represent the volume and quantity of solvent in container i.
// 
// 
// 
// You now wish to mix a batch of the chemical, and can do so only by using the entirety of some subset of the available containers.  That is, you cannot use part of what is left in any container, you must use all or none of each container.  You need to produce at least minQuantity volume total after mixing, and you want the end result to have a strength as close as possible to desiredStrength.  Compute the absolute difference between the desired strength and the closest strength you can create by mixing checmicals to obtain the minimum required volume.
// 
// 
// DEFINITION
// Class:ChemicalMixing
// Method:closestBlend
// Parameters:vector <int>, vector <int>, int, double
// Returns:double
// Method signature:double closestBlend(vector <int> volume, vector <int> solute, int minVolume, double desiredStrength)
// 
// 
// NOTES
// -* A return value that is within 1e-9 of the actual result is considered correct.
// 
// 
// CONSTRAINTS
// -volume will have between 1 and 50 elements, inclusive.
// -Each element of volume will be between 1 and 100, inclusive.
// -solute will have the same number of elements as volume.
// -Each element of solute will be between 0 and 20, inclusive.
// -minVolume will be between 1 and the sum of all elements of volume.
// -desiredStrength will be between 0 and 10, inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// {10, 10}
// {1, 4}
// 5
// 0.20
// 
// Returns: 0.04999999999999999
// 
// Either container is sufficient volume on it's own, but the strength would be 0.1 or 0.4, a difference from our desired strength by 0.1 or 0.2.
// 
// However, if we combine the two, the resultant strength of the chemical is 0.25, an error of only 0.05, which is better.
// 
// 1)
// {10, 10, 10, 10}
// { 5,  5,  5,  0} 
// 35
// 0.5
// 
// Returns: 0.125
// 
// Although the first three containers are exactly the right strength, we need to mix all four containers to get a sufficient volume.  The resulting strength is 0.375, an error of 0.125.
// 
// 2)
// {20, 20, 20}
// {15, 15, 0}
// 40
// 0.5
// 
// Returns: 0.0
// 
// Although any two containers would suffice to meet the required volume, if we use all three, we can precisely hit the desired strength.
// 
// 3)
// {50, 50, 50, 50}
// {12, 4, 20, 0}
// 100
// 0.5
// 
// Returns: 0.18
// 
// 
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
