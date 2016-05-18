[![Build Status](https://travis-ci.org/abhi951990/ConnectX.svg?branch=master)](https://travis-ci.org/abhi951990/ConnectX)


Abhinav Gupta

Quiz 3 Bug Report

* Unexpected output at (-1,0) position on Board after creating object of ConnectX class.
	* Expected value at (-1,0) after creating object = -1
	* Actual value at (-1,0) after creating object= 0
	* Description:
			The program is treating the first row as a board of game. It is not considering it for out of bounds.
* Unexpected output at (7,1) position on Board after creating object of ConnectX class.
	* Expected value: -1
	* Actual value: garbage value
	* Description:
		The program should treat this value as out of bound and return invalid constant (-1).

* The main Bug is the for loop from line:17 to line:24
	* The value of i and j in for loop must be 1 instead of 0. The above two bugs are result of this bug.
