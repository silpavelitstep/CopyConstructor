#include <iostream>
#include "someclasses.h"
using namespace std;
int main() {
	//test how much constructor and destructor executed in stack
	{
		G g;
	}
	//test how much constructor and destructor executed in heap
	G *pg = new G;
	delete pg;

	system("pause");
	return 0;
}