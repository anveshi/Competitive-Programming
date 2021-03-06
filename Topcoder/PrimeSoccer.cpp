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
double p1[20][20],p2[20][20];
class PrimeSoccer {
public:
	double getProbability(int skillOfTeamA, int skillOfTeamB) {
		double pp1,pp2;
		map<int,int> m;m[2]=1,m[3]=1,m[5]=1,m[7]=1,m[11]=1,m[13]=1,m[17]=1;
		pp1 = skillOfTeamA/100.00;pp2=skillOfTeamB/100.00; 
		p1[0][0]=1.00;p2[0][0]=1.00;
		for(int i=1;i<=18;i++){
			for(int j=0;j<=18;j++){
				p1[i][j]=(j>0?p1[i-1][j-1]*pp1:0)+p1[i-1][j]*(1-pp1);
			}
		}
		for(int i=1;i<=18;i++){
			for(int j=0;j<=18;j++){
				p2[i][j]=(j>0?p2[i-1][j-1]*pp2:0)+p2[i-1][j]*(1-pp2);
			}
		}
		double a1=0.0,a2=0.0;
		for(int i=0;i<=18;i++){
			if(m[i]==1)
				a1+=p1[18][i];
		}
		for(int i=0;i<=18;i++){
			if(m[i]==1)
				a2+=p2[18][i];
		}
		cout << a1 <<  " " << a2 << endl;
		double ans =a1 + a2 -a1*a2 ;
		return ans;	
	}
};


// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, int p0, int p1, bool hasAnswer, double p2) {
	cout << "Test " << testNum << ": [" << p0 << "," << p1;
	cout << "]" << endl;
	PrimeSoccer *obj;
	double answer;
	obj = new PrimeSoccer();
	clock_t startTime = clock();
	answer = obj->getProbability(p0, p1);
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
		res = answer == answer && fabs(p2 - answer) <= 1e-9 * max(1.0, fabs(p2));
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
	double p2;
	
	{
	// ----- test 0 -----
	p0 = 50;
	p1 = 50;
	p2 = 0.5265618908306351;
	all_right = KawigiEdit_RunTest(0, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	p0 = 100;
	p1 = 100;
	p2 = 0.0;
	all_right = KawigiEdit_RunTest(1, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	p0 = 12;
	p1 = 89;
	p2 = 0.6772047168840167;
	all_right = KawigiEdit_RunTest(2, p0, p1, true, p2) && all_right;
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
// You are watching a soccer match, and you wonder what the probability is that at least one of the two teams will score a prime number of goals.  The game lasts 90 minutes, and to simplify the analysis, we will split the match into five-minute intervals.  The first interval is the first five minutes, the second interval is the next five minutes, and so on.  During each interval, there is a skillOfTeamA percent probability that team A will score a goal, and a skillOfTeamB percent probability that teamB will score a goal.  Assume that each team will score at most one goal within each interval.  Return the probability that at least one team will have a prime number as its final score.
// 
// DEFINITION
// Class:PrimeSoccer
// Method:getProbability
// Parameters:int, int
// Returns:double
// Method signature:double getProbability(int skillOfTeamA, int skillOfTeamB)
// 
// 
// NOTES
// -The returned value must be accurate to within a relative or absolute value of 1E-9.
// -A prime number is a number that has exactly two divisors, 1 and itself. Note that 0 and 1 are not prime.
// 
// 
// CONSTRAINTS
// -skillOfTeamA will be between 0 and 100, inclusive.
// -skillOfTeamB will be between 0 and 100, inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// 50
// 50
// 
// Returns: 0.5265618908306351
// 
// 
// 
// 1)
// 100
// 100
// 
// Returns: 0.0
// 
// Both teams will score a goal in each interval, so the final result will be 18 to 18.
// 
// 2)
// 12
// 89
// 
// Returns: 0.6772047168840167
// 
// 
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
