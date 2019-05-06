#include <iostream>
#include "someclasses.h"
using namespace std;
A::A() {cout << "cons A()\n";}
A::~A() { cout << "des ~A()\n";}
B::B() { cout << "cons B()\n"; }
B::~B() { cout << "des ~B()\n"; }
C::C() { cout << "cons C()\n"; }
C::~C() { cout << "des ~C()\n"; }
D::D() { cout << "cons D()\n"; }
D::~D() { cout << "des ~D()\n"; }
E::E() { cout << "cons E()\n"; }
E::~E() { cout << "des ~E()\n"; }
F::F() { cout << "cons F()\n"; }
F::~F() { cout << "des ~F()\n"; }
G::G() { cout << "cons G()\n"; }
G::~G() { cout << "des ~G()\n"; }
First::First(int i):valueFirst(i) {
	cout << "First()\n";
}
First::~First() {
	cout << "\t~First()\n";
}
SecondObj::SecondObj(int i){
	fst = new First(i);
	cout << "SecondObj()\n";
	
}

SecondObj::SecondObj(const SecondObj &sdbj){
	fst = new First(sdbj.fst->valueFirst);
	cout << "copy__ SecondObj()\n";
}

SecondObj::~SecondObj() {
	cout << "\t~SecondObj()\n";
	delete fst;
}
SecondObj SecondObj::func(SecondObj sdbj) {
	cout << "RETURN SECOND OBJ FUNC:\n";
	return sdbj;
}