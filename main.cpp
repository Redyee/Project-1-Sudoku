#include<iostream>
#include"Sudoku.h"
#include<vector>
using namespace std;


int main(){
	Sudoku su;
	Sudoku();
	su.readIn();
	//su.Solve();
	su.changeNum(1,2);
	//su.rotate(1);
	//su.changeRow(1,2);
	//su.changeCol(1,2);
	su.testFun();
	return 0;
}
