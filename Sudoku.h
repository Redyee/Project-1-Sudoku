#include<iostream>
#include<vector>
using namespace std;
class Sudoku{
	public:
		Sudoku();
		//Sudoku(static const int init);
		void readIn();
		void changeNum(int a , int b);
		void changeRow(int a , int b);
		void changeCol(int a , int b);
		void rotate(int a);
		void flip(int n);
		void testFun();
		static const int MapSize = 81;
		void Solve();
		void backtrack(int i);
		bool check(int i);
	private:
		int map[MapSize];
		int Ans[MapSize];
		vector <int> buff;
};
