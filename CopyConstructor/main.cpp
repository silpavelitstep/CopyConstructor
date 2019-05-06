#include <iostream>
using namespace std;
#include "someclasses.h"
//#define TI "ON"
#define COPY "ON"
using namespace std;
int main() {
#ifdef TI
	//test how much constructor and destructor executed in stack
	{
		G g;
	}
	//test how much constructor and destructor executed in heap
	G *pg = new G;
	delete pg;
#endif TI
#ifdef COPY
	//test copy constructor
	cout << "class SecondObj contains object of First\n";
	{
		SecondObj sObj1(10);
		cout << "sObj1 addr: " << (int)&sObj1 << endl;
		cout << "sObj1.fst addr: " << (int)&sObj1.fst << endl;
		cout << "sObj1.fst.valueFirst: " << sObj1.fst.valueFirst << endl;
		SecondObj sObj2(20);
		cout << "sObj2 addr: " << (int)&sObj2 << endl;
		cout << "sObj2.fst addr: " << (int)&sObj2.fst << endl;
		cout << "sObj2.fst.valueFirst: " << sObj2.fst.valueFirst << endl;
	}
	
	
	
#endif COPY

	system("pause");
	return 0;
}