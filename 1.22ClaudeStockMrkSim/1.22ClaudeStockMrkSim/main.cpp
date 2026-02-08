#include <iostream>
#include <cmath>
using namespace std;



int main() {

	float a;//accumulated amount after compound interest
	float p = 10000;//principle (starting investment)
	float r = .01;// daily interest rate (1%)

	//FOR LOOP STRUCTURE: for (initialization; condition; increment)
	//- Initialization (int day = 1): Creates loop counter variable 'day' and sets it to 1
	//- Condition (day<=10)): Checked BEFORE each iteration; loop continues while true
	//- Increment (day++): Executes AFTER each iteration's code block completes

	for (int day = 1; day <= 10; day++) {
		//LOOP EXECUTION FLOW:
		//Iteration 1: day = 1, condition (1<=10) is TRUE -> execute code block -> increment day to 2
		//Iteration 2: day = 2, condition (2<=10) is TRUE -> execute code block -? increment day to 3
		//... continues until...
		//Iteration 11: day = 100, condition (11<=10) is FALSE -> loop terminates, skips code block

		//Calculate and display results for current day
		a = p * pow(1 + r, day);
		cout << day << "------" << a << endl;
		//IMPORTANT: Loop executes ONE iteration at a time, priniting one line per iteration
		//The output appears instantatneous only becuase computers execute code extremely fast

	}
	//Program continues here after loop completes (after day becomes 11)
}

/*
Output:
1-----10100
2-----10201
3-----10303
4-----10406
5-----10510.1
6-----10615.2
7-----10721.4
8-----10828.6
9-----10936.9
10-----11046.2
*/