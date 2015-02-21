#ifndef PUZZLE_H
#define PUZZLE_H

#include <vector>
using namespace std;

template <typename T> class Puzzle{

 public:
	Puzzle( );
	Puzzle( const vector<T> &  );
	~Puzzle(); 

 private:
	int size;		//Just in case it's needed later
	vector< vector<T> > sudoku[9];
	//vector<T> *columns;
};

#endif
