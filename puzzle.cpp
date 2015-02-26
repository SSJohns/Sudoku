#ifndef PUZZLE_CPP
#define PUZZLE_CPP

#include <iostream>
#include <vector>
#include "puzzle.h"

using namespace std;

template<typename T>
Puzzle<T>::Puzzle(){
	vector< vector<T> > truename(9,vector<T>(9));
}

template<typename T>
Puzzle<T>::Puzzle( const vector<T> &vect ){
	vector< vector<T> > truename(9,vector<T>(9));	
	
	for(int i =0;i<=9;i++){
		for(int j=0;j<=9;j++){
			truename[i].push_back( vect[i].pop_front() );
		}
	}
}

template<typename T>
Puzzle<T>::~Puzzle(){
	delete sudoku;
}

void Puzzle<T>::readFile(){

}

#endif
