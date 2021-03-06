import java.util.*;
import java.util.regex.*;
import java.text.*;
import java.math.*;


public class Jumping
{
	public String ableToGet(int x, int y, int[] jumpLengths)
	{
		
	}
	
	// BEGIN KAWIGIEDIT TESTING
	// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
	private static boolean KawigiEdit_RunTest(int testNum, int p0, int p1, int[] p2, boolean hasAnswer, String p3) {
		System.out.print("Test " + testNum + ": [" + p0 + "," + p1 + "," + "{");
		for (int i = 0; p2.length > i; ++i) {
			if (i > 0) {
				System.out.print(",");
			}
			System.out.print(p2[i]);
		}
		System.out.print("}");
		System.out.println("]");
		Jumping obj;
		String answer;
		obj = new Jumping();
		long startTime = System.currentTimeMillis();
		answer = obj.ableToGet(p0, p1, p2);
		long endTime = System.currentTimeMillis();
		boolean res;
		res = true;
		System.out.println("Time: " + (endTime - startTime) / 1000.0 + " seconds");
		if (hasAnswer) {
			System.out.println("Desired answer:");
			System.out.println("\t" + "\"" + p3 + "\"");
		}
		System.out.println("Your answer:");
		System.out.println("\t" + "\"" + answer + "\"");
		if (hasAnswer) {
			res = answer.equals(p3);
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
		
		int p0;
		int p1;
		int[] p2;
		String p3;
		
		// ----- test 0 -----
		p0 = 5;
		p1 = 4;
		p2 = new int[]{2,5};
		p3 = "Able";
		all_right = KawigiEdit_RunTest(0, p0, p1, p2, true, p3) && all_right;
		// ------------------
		
		// ----- test 1 -----
		p0 = 3;
		p1 = 4;
		p2 = new int[]{4};
		p3 = "Not able";
		all_right = KawigiEdit_RunTest(1, p0, p1, p2, true, p3) && all_right;
		// ------------------
		
		// ----- test 2 -----
		p0 = 3;
		p1 = 4;
		p2 = new int[]{6};
		p3 = "Not able";
		all_right = KawigiEdit_RunTest(2, p0, p1, p2, true, p3) && all_right;
		// ------------------
		
		// ----- test 3 -----
		p0 = 0;
		p1 = 1;
		p2 = new int[]{100,100};
		p3 = "Able";
		all_right = KawigiEdit_RunTest(3, p0, p1, p2, true, p3) && all_right;
		// ------------------
		
		// ----- test 4 -----
		p0 = 300;
		p1 = 400;
		p2 = new int[]{500};
		p3 = "Able";
		all_right = KawigiEdit_RunTest(4, p0, p1, p2, true, p3) && all_right;
		// ------------------
		
		// ----- test 5 -----
		p0 = 11;
		p1 = 12;
		p2 = new int[]{1,2,3,4,5,6,7,8,9,10};
		p3 = "Able";
		all_right = KawigiEdit_RunTest(5, p0, p1, p2, true, p3) && all_right;
		// ------------------
		
		// ----- test 6 -----
		p0 = 11;
		p1 = 12;
		p2 = new int[]{1,2,3,4,5,6,7,8,9,100};
		p3 = "Not able";
		all_right = KawigiEdit_RunTest(6, p0, p1, p2, true, p3) && all_right;
		// ------------------
		
		if (all_right) {
			System.out.println("You're a stud (at least on the example cases)!");
		} else {
			System.out.println("Some of the test cases had errors.");
		}
	}
	// PROBLEM STATEMENT
	// Frog Suwako lives on a two-dimensional plane.
	// She likes to jump.
	// Currently, she is located in the point (0, 0).
	// She would like to reach the point (x, y).
	// You are given the ints x and y.
	// 
	// 
	// 
	// Suwako wants to reach the desired destination in a specific way: using a series of jumps with pre-determined lengths.
	// You are given these lengths in a int[] jumpLenghts.
	// For example, if jumpLengths = { 2, 5 }, Suwako must make a jump of length exactly 2, followed by a jump of length exactly 5.
	// 
	// 
	// 
	// Note that Suwako can jump onto arbitrary points in the plane, they are not required to have integer coordinates.
	// Return "Able" (quotes for clarity) if Suwako is able to reach her desired destination from (0, 0) using the desired sequence of jump lengths.
	// Otherwise, return "Not able".
	// 
	// DEFINITION
	// Class:Jumping
	// Method:ableToGet
	// Parameters:int, int, int[]
	// Returns:String
	// Method signature:String ableToGet(int x, int y, int[] jumpLengths)
	// 
	// 
	// CONSTRAINTS
	// -x will be between -1,000 and 1,000, inclusive.
	// -y will be between -1,000 and 1,000, inclusive.
	// -len will contain between 1 and 50 elements, inclusive.
	// -Each element in len will be between 1 and 1,000, inclusive.
	// 
	// 
	// EXAMPLES
	// 
	// 0)
	// 5
	// 4
	// {2, 5}
	// 
	// Returns: "Able"
	// 
	// One possibility is to jump from (0, 0) to (2, 0), and then from (2, 0) to (5, 4).
	// 
	// 1)
	// 3
	// 4
	// {4}
	// 
	// Returns: "Not able"
	// 
	// The distance from (0, 0) to (3, 4) is 5. You cannot get there using a single jump of length 4 - it is too short.
	// 
	// 2)
	// 3
	// 4
	// {6}
	// 
	// Returns: "Not able"
	// 
	// The distance from (0, 0) to (3, 4) is 5. You cannot get there using a single jump of length 6 - it is too long.
	// 
	// 3)
	// 0
	// 1
	// {100, 100}
	// 
	// Returns: "Able"
	// 
	// Here, one possible solution looks as follows: Let t = sqrt(100*100 - 0.5*0.5). Suwoko will make her first jump from (0, 0) to (t, 0.5), and her second jump from (t, 0.5) to (0, 1).
	// 
	// 4)
	// 300
	// 400
	// {500}
	// 
	// Returns: "Able"
	// 
	// 
	// 
	// 5)
	// 11
	// 12
	// {1,2,3,4,5,6,7,8,9,10}
	// 
	// Returns: "Able"
	// 
	// 
	// 
	// 6)
	// 11
	// 12
	// {1,2,3,4,5,6,7,8,9,100}
	// 
	// Returns: "Not able"
	// 
	// 
	// 
	// END KAWIGIEDIT TESTING
}
//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
