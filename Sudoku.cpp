#include<iostream>
#include<vector>
#include"Sudoku.h"
using namespace std;


Sudoku::Sudoku(){				// Initialize map??
	for(int i=0; i<MapSize; i++  )
		map[i]=0;
}  

void Sudoku::readIn(){
	int i;
	i=0;
	for(i=0 ; i<MapSize ;i++){
		cin >> map[i] ;}
}

void Sudoku::changeNum(int a ,int b){
	int x ,y ,i;
	for (i=0 ; i<MapSize ; i++  ){ 
		if( map[i] == a) map[i] = x;
		else if(map[i]==b) map[i] = y;
		x = b;
		y = a;}
}

void Sudoku:: changeRow(int a,int b){
	int i,j,k;
	for( i=0 ; i<=8 ; i++){
		j = 9*a - 9+i ;
		buff[i] =map[j];
		k = 9*b - 9+i ;
		map[j] =map[k];
		map[k] =buff[i];
	}
}

void Sudoku::changeCol(int a,int b){
	int i , j , k;
	for( i=0; i<=8; i++){
		j = 9*i +a;
		buff[i] =map[j];
		k = 9*i +b;
		map[j] =map[k];
		map[k] =buff[i];}
}

void Sudoku::rotate(int n){
	int u , t,i,j , N ,v;
	N =n%4;
	for(v=1 ; v<=N ;v++){
	for(u=0; u<=MapSize ;u++){buff[u] = map[u];}
	for(t=0; t<=MapSize	;t++){
		i = t/9; j=t%9;
		map[ t ] = buff[ 9*j +8-i ];}
}}
void Sudoku::flip(int a){
	int t , i , j , k ,u;
	if(a=0){								//flip vertically
		for(u=0 ; u<=8 ; u++){
			for( t =0 ;t <= 3 ; t++){
				k = map[ 9*u+t ];
				map[ 9*u+t] = map[ 9*u+8-t ];
				map[ 9*u+8-t ] = k;}}}
	else{									//flip horizontally
		for(t=0 ;t<=35 ;t++ ){
			i=t/9; j=t%9;
			k = map[t];
			map[t]=map[ 9*(8-i)+j ];
			map[ 9*(8-i)+j ] =k;}}
}

void Sudoku::testFun(){ 					// for main to print
	for( int i=0; i<MapSize ; i++ ){
		cout << map[i] <<" ";
		if( i%9==8) cout << endl;
	}
}
