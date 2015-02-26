#include <iostream>
#include <vector>
#include <fstream>
#include "puzzle.h"

using namespace std;

int main(int argc,char* argv[]) {
	int sizeone;

	
	if(argc >= 2){
		//Pass the given file and open it
		Puzzle<int> Sudoku(argv[1],sizeone);
		Sudoku.print();	
	}else{
		Puzzle<int> Sudoku("puzzleInput.txt",sizeone);
		Sudoku.print();	
	}
	
} 
