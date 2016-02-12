// BEGIN CUT HERE
// PROBLEM STATEMENT
// A prime number is a number whose only divisors are 1 and itself. 
// A sublinear polynomial-time algorithm has been shown to exist that  determines primality or non-primality with certainty,
// unlike the previous probablistic tests, but it is extremely complicated.  There must be an easier way.

In engineering, exact solutions are often not required, only good approximations.  Thus, an "Engineer's Prime" of order N is any number that is divisible by none of the first N primes, since the smallest primes are easy to remember: 2, 3, 5, and so on.  Note that 1 is not considered a prime in this case.

Given an int N, your method should return the smallest Engineer's Prime of order N that is not prime.

DEFINITION
Class:EngineersPrimes
Method:smallestNonPrime
Parameters:int
Returns:long long
Method signature:long long smallestNonPrime(int N)


NOTES
-1 is not to be considered prime.


CONSTRAINTS
-N will be between 1 and 100000, inclusive.


EXAMPLES

0)
3

Returns: 49

The first three primes are 2, 3, and 5.  Next, look through the numbers after 5 that are not divisible by any of those first three primes.  These are, in order, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, and 49, all of which are prime except the last.

1)
1

Returns: 9

The first odd number that is not prime.

2)
265

Returns: 2886601

3)
1835

Returns: 247716121

4)
10000

Returns: 10971096049

// END CUT HERE
#line 58 "EngineersPrimes.cpp"
#include<bits/stdc++.h>
#include <string>
#include <vector>
class EngineersPrimes {
	public:
	long long smallestNonPrime(int N) {
		
	}
};
