#include <iostream>

using namespace std;
//template <class T>
class testgen
{
private:
	int debug;
public:
	//testgen() {};
	testgen(int d=0) : debug(d)
	{
		// 0 - screen off
		// 1 - screen on

	}
	~testgen() {

	};

	void screen(const char* name1, long long var1)
	{
		if (debug) {
			cout << name1;
			cout << ": ";
			cout << var1;
			cout << endl;
		}
	}

};

