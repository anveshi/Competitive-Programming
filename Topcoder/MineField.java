import java.util.*;
import java.util.regex.*;
import java.text.*;
import java.math.*;


public class MineField
{
	public String[] getMineField(String mineLocations)
	{
		
	}
	
	// BEGIN KAWIGIEDIT TESTING
	// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
	private static boolean KawigiEdit_RunTest(int testNum, String p0, boolean hasAnswer, String[] p1) {
		System.out.print("Test " + testNum + ": [" + "\"" + p0 + "\"");
		System.out.println("]");
		MineField obj;
		String[] answer;
		obj = new MineField();
		long startTime = System.currentTimeMillis();
		answer = obj.getMineField(p0);
		long endTime = System.currentTimeMillis();
		boolean res;
		res = true;
		System.out.println("Time: " + (endTime - startTime) / 1000.0 + " seconds");
		if (hasAnswer) {
			System.out.println("Desired answer:");
			System.out.print("\t" + "{");
			for (int i = 0; p1.length > i; ++i) {
				if (i > 0) {
					System.out.print(",");
				}
				System.out.print("\"" + p1[i] + "\"");
			}
			System.out.println("}");
		}
		System.out.println("Your answer:");
		System.out.print("\t" + "{");
		for (int i = 0; answer.length > i; ++i) {
			if (i > 0) {
				System.out.print(",");
			}
			System.out.print("\"" + answer[i] + "\"");
		}
		System.out.println("}");
		if (hasAnswer) {
			if (answer.length != p1.length) {
				res = false;
			} else {
				for (int i = 0; answer.length > i; ++i) {
					if (!answer[i].equals(p1[i])) {
						res = false;
					}
				}
			}
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
		
		String p0;
		String[] p1;
		
		// ----- test 0 -----
		p0 = "(0,0)(1,0)(2,0)(3,0)(4,0)";
		p1 = new String[]{"M20000000","M30000000","M30000000","M30000000","M20000000","110000000","000000000","000000000","000000000"};
		all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
		// ------------------
		
		// ----- test 1 -----
		p0 = "(0,0)(0,8)(8,0)(8,8)";
		p1 = new String[]{"M1000001M","110000011","000000000","000000000","000000000","000000000","000000000","110000011","M1000001M"};
		all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
		// ------------------
		
		// ----- test 2 -----
		p0 = "(3,2)(3,3)(3,4)(4,2)(4,4)(5,2)(5,3)(5,4)(7,4)(6,7)";
		p1 = new String[]{"000000000","000000000","012321000","02MMM2000","03M8M3000","02MMM2111","0124321M1","0001M1111","000111000"};
		all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
		// ------------------
		
		// ----- test 3 -----
		p0 = "";
		p1 = new String[]{"000000000","000000000","000000000","000000000","000000000","000000000","000000000","000000000","000000000"};
		all_right = KawigiEdit_RunTest(3, p0, true, p1) && all_right;
		// ------------------
		
		if (all_right) {
			System.out.println("You're a stud (at least on the example cases)!");
		} else {
			System.out.println("Some of the test cases had errors.");
		}
	}
	// PROBLEM STATEMENT
	// Bob wants to program a game where a player tries to reveal all the squares on a minefield that do not contain mines.  He has created an algorithm to generate random locations for mines.  He wants to take these locations and use them to create a 9x9 board. The board needs to indicate the locations of the mines, as well as indicate how many mines border the spaces without mines.  A mine borders a space if it is horizontally, vertically, or diagonally adjacent to that space.
	// 
	// Write a class MineField, which contains a method getMineField. getMineField takes a String mineLocations representing the locations of mines in the 9x9 field. getMineField returns a String[] representing the entire board.  The ith element of the returned String[] corresponds to row i of the board.  Each element of the returned String[] should be 9 characters in length, where each character is either 'M' (symbolizing a mine) or a digit, d, between '0' and '8' inclusive (symbolizing an empty space bordering d mines.)
	// 
	// The String passed to the method will be in the following format (quotes added for clarity):
	// "(r0,c0)(r1,c1)...(rN,cN)"
	// 
	// Each pair of parentheses holds the coordinates of a mine in (row, column) format.  Counting begins at 0, not 1.  Therefore, (0,0) represents the upper-left corner, and (8,8) represents the bottom-right corner.  For example, suppose Bob randomly generated the following locations:
	// "(0,0)(1,0)(2,0)(3,0)(4,0)"
	// 
	// The board he would want to return would look like:
	// 
	// { "M20000000",
	//   "M30000000",
	//   "M30000000",
	//   "M30000000",
	//   "M20000000",
	//   "110000000",
	//   "000000000",
	//   "000000000",
	//   "000000000" }
	// 
	// 
	// There are 5 mines (symbolized by "M") located straight down the first column.  Two spots on the board border 1 mine; two spots border 2 mines; and three spots border 3 mines.  All other spots on the board border no mines.
	// 
	// DEFINITION
	// Class:MineField
	// Method:getMineField
	// Parameters:String
	// Returns:String[]
	// Method signature:String[] getMineField(String mineLocations)
	// 
	// 
	// CONSTRAINTS
	// -mineLocations will contain between 0 and 50 characters, inclusive
	// -mineLocations will contain between 0 and 10 mines, inclusive
	// -mineLocations will be in the format "(r0,c0)(r1,c1)...(rN,cN)" where each r# and c# is a digit between '0' and '8', inclusive
	// -mineLocations will not contain duplicate locations
	// 
	// 
	// EXAMPLES
	// 
	// 0)
	// "(0,0)(1,0)(2,0)(3,0)(4,0)"
	// 
	// Returns: { "M20000000",  "M30000000",  "M30000000",  "M30000000",  "M20000000",  "110000000",  "000000000",  "000000000",  "000000000" }
	// 
	// This is the example from above.
	// 
	// 1)
	// "(0,0)(0,8)(8,0)(8,8)"
	// 
	// Returns: { "M1000001M",  "110000011",  "000000000",  "000000000",  "000000000",  "000000000",  "000000000",  "110000011",  "M1000001M" }
	// 
	// There is a mine in each corner of the board.  There are twelve spots that border exactly 1 mine.  All other spots border no mines.
	// 
	// 2)
	// "(3,2)(3,3)(3,4)(4,2)(4,4)(5,2)(5,3)(5,4)(7,4)(6,7)"
	// 
	// Returns: { "000000000",  "000000000",  "012321000",  "02MMM2000",  "03M8M3000",  "02MMM2111",  "0124321M1",  "0001M1111",  "000111000" }
	// 
	// 3)
	// ""
	// 
	// Returns: { "000000000",  "000000000",  "000000000",  "000000000",  "000000000",  "000000000",  "000000000",  "000000000",  "000000000" }
	// 
	// Don't forget the empty case.
	// 
	// END KAWIGIEDIT TESTING
}
//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
