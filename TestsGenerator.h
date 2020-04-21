#include <iostream>

using namespace std;
//template <class T>
class testgen
{
private:
	bool debug;
public:
	//testgen() {};
	testgen(int d=false) : debug(d)
	{
		// 0 - screen off
		// 1 - screen on

	}
	~testgen() {

	};
	template <class T>
	//name, arg
	void screen(const char* name1, T arg1)
	{
		if (debug) {
			cout << name1;
			cout << ": ";
			cout << arg1;
			cout << endl;
		}
	}

};

