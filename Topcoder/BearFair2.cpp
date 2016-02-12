#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
typedef long long LL;

using namespace std;


class BearFair2 {
public:
	string isFair(int n, int b, vector <int> upTo, vector <int> quantity) {
				
	}
};


// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, int p0, int p1, vector <int> p2, vector <int> p3, bool hasAnswer, string p4) {
	cout << "Test " << testNum << ": [" << p0 << "," << p1 << "," << "{";
	for (int i = 0; int(p2.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p2[i];
	}
	cout << "}" << "," << "{";
	for (int i = 0; int(p3.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p3[i];
	}
	cout << "}";
	cout << "]" << endl;
	BearFair2 *obj;
	string answer;
	obj = new BearFair2();
	clock_t startTime = clock();
	answer = obj->isFair(p0, p1, p2, p3);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << "\"" << p4 << "\"" << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << "\"" << answer << "\"" << endl;
	if (hasAnswer) {
		res = answer == p4;
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
	vector <int> p2;
	vector <int> p3;
	string p4;
	
	{
	// ----- test 0 -----
	p0 = 3;
	p1 = 5;
	int t2[] = {2,3};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	int t3[] = {1,2};
			p3.assign(t3, t3 + sizeof(t3) / sizeof(t3[0]));
	p4 = "fair";
	all_right = KawigiEdit_RunTest(0, p0, p1, p2, p3, true, p4) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	p0 = 6;
	p1 = 1000;
	int t2[] = {500,100,950};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	int t3[] = {4,3,6};
			p3.assign(t3, t3 + sizeof(t3) / sizeof(t3[0]));
	p4 = "fair";
	all_right = KawigiEdit_RunTest(1, p0, p1, p2, p3, true, p4) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	p0 = 6;
	p1 = 20;
	int t2[] = {5,19,10};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	int t3[] = {0,3,2};
			p3.assign(t3, t3 + sizeof(t3) / sizeof(t3[0]));
	p4 = "unfair";
	all_right = KawigiEdit_RunTest(2, p0, p1, p2, p3, true, p4) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	p0 = 3;
	p1 = 6;
	int t2[] = {1,2,3,4};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	int t3[] = {1,1,1,2};
			p3.assign(t3, t3 + sizeof(t3) / sizeof(t3[0]));
	p4 = "unfair";
	all_right = KawigiEdit_RunTest(3, p0, p1, p2, p3, true, p4) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	p0 = 48;
	p1 = 1000;
	int t2[] = {38,450,202,685,971,661,946,226,901,353,12,937,655,108,31,908,845,908,981,896,296,987,77,790,679,152,412,492,286,54,214,651,59,189,107,445,728,327,438,523,527,663,825,67,523,400,65,892,587,995};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	int t3[] = {1,19,8,32,48,31,48,8,43,13,0,46,30,8,1,45,42,45,48,43,13,48,6,40,32,8,17,20,13,3,8,30,3,8,8,19,37,13,19,21,21,31,41,4,21,16,4,43,23,48};
			p3.assign(t3, t3 + sizeof(t3) / sizeof(t3[0]));
	p4 = "fair";
	all_right = KawigiEdit_RunTest(4, p0, p1, p2, p3, true, p4) && all_right;
	// ------------------
	}
	
	{
	// ----- test 5 -----
	p0 = 3;
	p1 = 100;
	int t2[] = {40,60};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	int t3[] = {2,1};
			p3.assign(t3, t3 + sizeof(t3) / sizeof(t3[0]));
	p4 = "unfair";
	all_right = KawigiEdit_RunTest(5, p0, p1, p2, p3, true, p4) && all_right;
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
// Limak is a grizzly bear.
// He is big and dreadful.
// You were chilling in the forest when you suddenly met him.
// It's very unfortunate for you.
// He will eat all your cookies unless you can demonstrate your mathematical skills.
// To test you, Limak is going to give you a puzzle to solve.
// 
// 
// 
// It's a well-known fact that Limak, as every bear, owns a set of numbers.
// You know some information about the set:
// 
// The elements of the set are distinct positive integers.
// The number of elements in the set is n. The number n is divisible by 3.
// All elements are between 1 and b, inclusive: bears don't know numbers greater than b.
// For each r in {0,1,2}, the set contains exactly n/3 elements that give remainder r when divided by 3. (That is, there are n/3 elements divisible by 3, n/3 elements of the form 3k+1, and n/3 elements of the form 3k+2.)
// 
// 
// 
// 
// Limak smiles mysteriously and gives you q hints about his set.
// The hints are numbered 0 through q-1.
// For each valid i, the hint number i is the following sentence:
// "If you only look at elements that are between 1 and upTo[i], inclusive, you will find exactly quantity[i] such elements in my set."
// 
// 
// 
// In a moment Limak will tell you the actual puzzle, but something doesn't seem right...
// That smile was very strange.
// You start to think about a possible reason.
// Maybe Limak cheated you?
// Or is he a fair grizzly bear?
// 
// 
// 
// You are given the ints n and b.
// You are also given the vector <int>s upTo and quantity.
// Return "fair" (quotes for clarity) if there exists at least one set that has all the required properties and matches all the given hints.
// Otherwise, return "unfair".
// 
// 
// DEFINITION
// Class:BearFair2
// Method:isFair
// Parameters:int, int, vector <int>, vector <int>
// Returns:string
// Method signature:string isFair(int n, int b, vector <int> upTo, vector <int> quantity)
// 
// 
// CONSTRAINTS
// -n will be between 3 and 48, inclusive.
// -n will be divisible by 3.
// -b will be between n and 1000, inclusive.
// -q will be between 1 and 50, inclusive.
// -upTo will have exactly q elements.
// -quantity will have exactly q elements.
// -Each element in upTo will be between 1 and b, inclusive.
// -Each element in quantity will be between 0 and n, inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// 3
// 5
// {2,3}
// {1,2}
// 
// Returns: "fair"
// 
// Limak is a fair bear. Some sets that match his hints are {1,3,5} and {2,3,4}.
// 
// 1)
// 6
// 1000
// {500,100,950}
// {4,3,6}
// 
// Returns: "fair"
// 
// 
// 
// 2)
// 6
// 20
// {5,19,10}
// {0,3,2}
// 
// Returns: "unfair"
// 
// The second hint is that exactly 3 elements are between 1 and 19 (inclusive).
// But there should be 6 elements in total, all between 1 and 20 (inclusive).
// In this situation Limak is clearly being unfair, there is no set that matches these hints.
// 
// 3)
// 3
// 6
// {1,2,3,4}
// {1,1,1,2}
// 
// Returns: "unfair"
// 
// The only sets that match the hints are {1,4,5} and {1,4,6}. However, none of them satisfies the constraints about numbers of elements with each reminder.
// 
// 4)
// 48
// 1000
// {38,450,202,685,971,661,946,226,901,353,12,937,655,108,31,908,845,908,981,896,296,987,77,790,679,
// 152,412,492,286,54,214,651,59,189,107,445,728,327,438,523,527,663,825,67,523,400,65,892,587,995}
// {1,19,8,32,48,31,48,8,43,13,0,46,30,8,1,45,42,45,48,43,13,48,6,40,32,8,17,20,13,3,8,30,3,8,8,19,
// 37,13,19,21,21,31,41,4,21,16,4,43,23,48}
// 
// 
// Returns: "fair"
// 
// 
// 
// 5)
// 3
// 100
// {40,60}
// {2,1}
// 
// Returns: "unfair"
// 
// 
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!