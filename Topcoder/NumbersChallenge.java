import java.util.*;
import java.util.regex.*;
import java.text.*;
import java.math.*;


public class NumbersChallenge
{
	public int MinNumber(int[] S)
	{
		
	}
	
	// BEGIN KAWIGIEDIT TESTING
	// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
	private static boolean KawigiEdit_RunTest(int testNum, int[] p0, boolean hasAnswer, int p1) {
		System.out.print("Test " + testNum + ": [" + "{");
		for (int i = 0; p0.length > i; ++i) {
			if (i > 0) {
				System.out.print(",");
			}
			System.out.print(p0[i]);
		}
		System.out.print("}");
		System.out.println("]");
		NumbersChallenge obj;
		int answer;
		obj = new NumbersChallenge();
		long startTime = System.currentTimeMillis();
		answer = obj.MinNumber(p0);
		long endTime = System.currentTimeMillis();
		boolean res;
		res = true;
		System.out.println("Time: " + (endTime - startTime) / 1000.0 + " seconds");
		if (hasAnswer) {
			System.out.println("Desired answer:");
			System.out.println("\t" + p1);
		}
		System.out.println("Your answer:");
		System.out.println("\t" + answer);
		if (hasAnswer) {
			res = answer == p1;
		}
		if (!res) {
			System.out.println("DOESN'T MATCH!!!!");
		} else if ((endTime - startTime) / 1000.0 >= 2) {
			System.out.println("FAIL the timeout");
			res = false;
		} else if (hasAnswer) {
			System.out.println("Match :-)");
		} else {
			System.out.println("OK, but is it right?");
		}
		System.out.println("");
		return res;
	}
	public static void main(String[] args) {
		boolean all_right;
		all_right = true;
		
		int[] p0;
		int p1;
		
		// ----- test 0 -----
		p0 = new int[]{5,1,2};
		p1 = 4;
		all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
		// ------------------
		
		// ----- test 1 -----
		p0 = new int[]{2,1,4};
		p1 = 8;
		all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
		// ------------------
		
		// ----- test 2 -----
		p0 = new int[]{2,1,2,7};
		p1 = 6;
		all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
		// ------------------
		
		// ----- test 3 -----
		p0 = new int[]{94512,2,87654,81316,6,5,6,37151,6,139,1,36,307,1,377,101,8,37,58,1};
		p1 = 1092;
		all_right = KawigiEdit_RunTest(3, p0, true, p1) && all_right;
		// ------------------
		
		// ----- test 4 -----
		p0 = new int[]{883,66392,3531,28257,1,14131,57,1,25,88474,4,1,110,6,1769,220,442,7064,7,13};
		p1 = 56523;
		all_right = KawigiEdit_RunTest(4, p0, true, p1) && all_right;
		// ------------------
		
		if (all_right) {
			System.out.println("You're a stud (at least on the example cases)!");
		} else {
			System.out.println("Some of the test cases had errors.");
		}
	}
	// PROBLEM STATEMENT
	// Your friend Lucas gave you a sequence S of positive integers.
	// 
	// For a while, you two played a simple game with S:
	// Lucas would pick a number, and you had to select some elements of S such that the sum of all numbers you selected is the number chosen by Lucas.
	// For example, if S={2,1,2,7} and Lucas chose the number 11, you would answer that 2+2+7 = 11.
	// 
	// Lucas now wants to trick you by choosing a number X such that there will be no valid answer.
	// For example, if S={2,1,2,7}, it is not possible to select elements of S that sum up to 6.
	// 
	// You are given the int[] S.
	// Find the smallest positive integer X that cannot be obtained as the sum of some (possibly all) elements of S.
	// 
	// DEFINITION
	// Class:NumbersChallenge
	// Method:MinNumber
	// Parameters:int[]
	// Returns:int
	// Method signature:int MinNumber(int[] S)
	// 
	// 
	// CONSTRAINTS
	// -S will contain between 1 and 20 elements, inclusive.
	// -Each element of S will be between 1 and 100,000, inclusive.
	// 
	// 
	// EXAMPLES
	// 
	// 0)
	// {5, 1, 2}
	// 
	// Returns: 4
	// 
	// These are all the positive integers that can be obtained: 1, 2, 3, 5, 6, 7, and 8.
	// (We can obtain 3 as 1+2, 6 as 1+5, 7 as 2+5, and 8 as 1+2+5.)
	// The smallest positive integer not present in the above list is 4.
	// 
	// 1)
	// {2, 1, 4}
	// 
	// Returns: 8
	// 
	// We can obtain each of the sums from 1 to 7, inclusive. The smallest impossible sum is 8.
	// 
	// 2)
	// {2, 1, 2, 7}
	// 
	// Returns: 6
	// 
	// The example given in the problem statement.
	// 
	// 3)
	// {94512, 2, 87654, 81316, 6, 5, 6, 37151, 6, 139, 1, 36, 307, 1, 377, 101, 8, 37, 58, 1}
	// 
	// Returns: 1092
	// 
	// 
	// 
	// 4)
	// {883, 66392, 3531, 28257, 1, 14131, 57, 1, 25, 88474, 4, 1, 110, 6, 1769, 220, 442, 7064, 7, 13}
	// 
	// Returns: 56523
	// 
	// 
	// 
	// END KAWIGIEDIT TESTING
}
//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
