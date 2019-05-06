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
	cout << "class SecondObj contains poiter to First object\n";
	{
		SecondObj sObj1(10);
		cout << "(int)sObj1.fst: "<< (int)sObj1.fst << endl;
		cout <<"sObj1.fst->valueFirst: "<< sObj1.fst->valueFirst << endl;
		cout << endl;
		SecondObj sObj2(20);
		cout << "(int)sObj2.fst: " << (int)sObj2.fst << endl;
		cout << "sObj2.fst->valueFirst: " << sObj2.fst->valueFirst << endl;
		cout << endl;
		cout << "sent SecondObj to func: \n";
		SecondObj sObj3=sObj1.func(sObj1);
		cout << endl;
		
		
	}
	
	
	
#endif COPY

	system("pause");
	return 0;
}