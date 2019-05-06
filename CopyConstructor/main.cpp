#include <iostream>
#include "someclasses.h"
//#define TI "ON"
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
#endif

	system("pause");
	return 0;
}