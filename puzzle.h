using namespace std;

template <typename T> class Puzzle{

 public:
	Puzzle();
	Puzzle( const vector<T> &  );
	~Puzzle(); 

 private:
	int size;
	vector<T> rows;
	vector<T> columns;
}
