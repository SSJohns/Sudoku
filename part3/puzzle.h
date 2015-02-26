#ifndef PUZZLE_H
#define PUZZLE_H

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <iterator>

using namespace std;

template <typename T> 
class Puzzle{

 public:
	Puzzle( );
	Puzzle( string ,int=9);
	~Puzzle(); 
	void print();
	void replace(int,int,int);
	bool check();

 private:
	int size;		//Just in case it's needed later
	vector< vector<T> > sudoku;
};

template<typename T>
Puzzle<T>::Puzzle(){
	size = 9;
}

template<typename T>
void Puzzle<T>::replace(int row,int col,int repl){
	sudoku[row][col] = repl;
}

template<typename T>
bool Puzzle<T>::check(){
	return false;
}

template<typename T>
Puzzle<T>::Puzzle( string puzzlefile , int inter){
	size = inter;
	vector<T> tempVec;
	T value;

	ifstream infile;
	infile.open(puzzlefile.c_str());
	while(!infile.eof()){
		for(int i = 0;i<9;i++){
			infile >> value;
			tempVec.push_back(value);
		}
	sudoku.push_back(tempVec);
	tempVec.clear();
	}
}

template<typename T>
Puzzle<T>::~Puzzle(){
	sudoku.clear();
}

template<typename T>
void Puzzle<T>::print(){
	for ( int i = 0; i < sudoku.size(); i++ ){
		for ( int j = 0; j < sudoku[i].size(); j++ ){
			cout << sudoku[i][j] << ' ';
		}
	cout << endl;
	}
}


#endif

















