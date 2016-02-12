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


class BagPacking {
public:
	int minPay(vector <int> bagsizes) {
		int ans=0;
		vector < pair <int,int> > v;
		sort(bagsizes.begin(), bagsizes.end());
		int n = bagsizes.size();
		for(int i=0;i<n;i++){
			v.pb(mp(bagsizes[i],1));
		}
		for(int i=0;i<n;i++){
			int prev =0,num=0;
			for(int j=0;j<n;j++){
				if(v[j].first>prev && v[j].second==1){
					v[j].second=0;
					prev = v[j].first;
					num++;
				}
			}
			if(num>0)
				ans++;
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
bool KawigiEdit_RunTest(int testNum, vector <int> p0, bool hasAnswer, int p1) {
	cout << "Test " << testNum << ": [" << "{";
	for (int i = 0; int(p0.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p0[i];
	}
	cout << "}";
	cout << "]" << endl;
	BagPacking *obj;
	int answer;
	obj = new BagPacking();
	clock_t startTime = clock();
	answer = obj->minPay(p0);
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
	
	vector <int> p0;
	int p1;
	
	{
	// ----- test 0 -----
	int t0[] = {1,2,3};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 1;
	all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	int t0[] = {4,3,4};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 2;
	all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	int t0[] = {3,3,3,3,1};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 4;
	all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	int t0[] = {3,1,3,2,4,3,3};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 4;
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
// Bob's exams are over and he wants to go home on his summer vacation. Bob has some bags and wants to send them home. You are given sizes of the bags in vector <int> bagsizes.
// 
// 
// 
// A bag of size x can fit inside a bag of size y, if y is strictly greater than x.  The courier service charges based on the number of bags, so it is in Bob's best interest to nest bags inside of each other as efficiently as possible.  Note that only a single bag of size less than y can fit inside a bag of size y.  However, the smaller bag may have a still smaller bag inside of it, and so on.
// 
// 
// 
// 
// Return the minimum number of bags Bob must pay for, assuming he packs them inside each other optimally.
// 
// 
// DEFINITION
// Class:BagPacking
// Method:minPay
// Parameters:vector <int>
// Returns:int
// Method signature:int minPay(vector <int> bagsizes)
// 
// 
// CONSTRAINTS
// -Number of elements in bagsizes will be between 1 and 50, inclusive.
// -Each element of bagsizes will be between 1 and 100, inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// {1, 2, 3}
// 
// Returns: 1
// 
// You can pack all the bags into a single bag. Pack the bag of size 1 inside the bag of size 2, then pack that bag into the bag of size 3. Overall, you will just send the bag of size 3, and pay for a single bag.
// 
// 1)
// {4, 3, 4}
// 
// Returns: 2
// 
// You can pack the bag of size 3 into one of the bags of size 4. The other bag of size 4 will remain separate. So, two bags in total.
// 
// 2)
// {3,3,3,3,1}
// 
// Returns: 4
// 
// 
// 
// 3)
// {3,1,3,2,4,3,3}
// 
// Returns: 4
// 
// 
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!