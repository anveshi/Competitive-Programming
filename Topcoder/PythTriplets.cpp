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

void printVector(vector <LL> &v){
  for(int i=0;i<v.size();i++){
    cout << v[i] << " ";
  }
  cout << endl;
}


class PythTriplets {
public:
  vector <long long> split(string s){
    stringstream A(s);
    vector <long long> res;
    int t;
    while(A>>t)
      res.push_back(t);
    return res;
  }
 

  bool edge(long long x, long long y){
    bool flag = 0;
    long long z = x*x + y*y;
    long long S = sqrt(z);
    if(S*S==z)
      flag = 1;
    return  (__gcd(x,y)==1 && flag);
  }

	int findMax(vector <string> stick) {
    string S;
    for(int i=0;i<stick.size();i++)
      S += stick[i];
    vector <long long> V = split(S);

    vector <LL> EvenThenOdd;
    int n,k;
    for(int i=0;i<V.size();i++){
      if(V[i]%2==0)
        EvenThenOdd.push_back(V[i]);
    }
    n = EvenThenOdd.size();
    k = V.size() - n; 
    for(int i=0;i<V.size();i++){
      if(V[i]%2==1)
        EvenThenOdd.push_back(V[i]);
    }
    printVector(EvenThenOdd);
    vector <vector<int> > g(EvenThenOdd.size());
    for(int i=0;i<EvenThenOdd.size();i++){
      for(int j=i+1;j<EvenThenOdd.size();j++){
        if(edge(EvenThenOdd[i], EvenThenOdd[j])){
          cout << EvenThenOdd[i] << " " << EvenThenOdd[j] << endl;  
          g[i].push_back(j);
        }
      }
    }
    KuhnImplementation obj;
    return obj.find_max_matching(g,n,k).size();
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
	PythTriplets *obj;
	int answer;
	obj = new PythTriplets();
	clock_t startTime = clock();
	answer = obj->findMax(p0);
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
	string t0[] = {"3 4 4 3 11 5 12 9 4"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 3;
	all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	string t0[] = {"20 21 3021 220"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 2;
	all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	string t0[] = {"28 19","5 1035 21412 37995"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 2;
	all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
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
// The prince has just been introduced to primitive pythagorean triplets.
// A primitive pythagorean triplet (a, b, c) is a triplet satisfying the following properties:
// 
// a, b and c are integers
// a^2 + b^2 = c^2
// The greatest common divisor of a and b is 1
// 
// The prince is not very fond of mathematics. The king is trying to make mathematics fun for his son (the prince). So, the king decides to make as many toys as possible which are triangular in shape having sides (a, b, c) where (a, b, c) form a primitive pythogorean triplet. The wooden framework of the two shorter legs of the toy give the toy its shape and prevent it from breaking, hence each toy with sides of length (a, b, c) must have one wooden stick of length a and one of length b. The third side of length c is not made of wood, and therefore the king does not need a wooden stick for it.
// 
// You are given a vector <string> stick. Concatenate the elements of stick to get a single-space separated list of the lengths of available sticks. The king is a very loving father and would like to make the toys with his own hands. However, he is not skilled enough to cut the sticks, so he must use them in the sizes they are available. Return the maximum possible number of toys the king can make using these sticks.
// 
// 
// DEFINITION
// Class:PythTriplets
// Method:findMax
// Parameters:vector <string>
// Returns:int
// Method signature:int findMax(vector <string> stick)
// 
// 
// NOTES
// -An integer may be listed multiple times in the string formed by the concatenation of stick . If an integer n is listed k times, then the king has exactly k sticks of length n available with him.
// 
// 
// CONSTRAINTS
// -stick will contain between 1 and 50 elements, inclusive.
// -Each element of stick will contain between 1 and 50 characters, inclusive.
// -When concatenated, stick will represent a single-space separated list of N integers, where N is between 1 and 200 inclusive.
// -Each listed integer will be between 1 and 999999, inclusive.
// -Listed integers will not have leading zeroes.
// 
// 
// EXAMPLES
// 
// 0)
// {"3 4 4 3 11 5 12 9 4"}
// 
// Returns: 3
// 
// (3, 4, 5) and (5, 12, 13) are primitive pythagorean triplets. Hence, there are three disjoint pairs (a, b) - (3, 4), (3, 4) and (5, 12). 
// 
// 1)
// {"20 21 3021 220"}
// 
// Returns: 2
// 
// Possible pairs (a, b) are (20, 21), (21, 220) and (220, 3021). The maximum number of disjoint pairs is 2. Namely, (20, 21) and (220, 3021). 
// 
// 2)
// {"28 19", "5 1035 21412 37995"}
// 
// Returns: 2
// 
// Make sure you concatenate the elements of stick.
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
