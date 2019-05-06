#pragma once
#ifndef SOMECLASES_H
#define SOMECLASES_H

//Base class
class A {
public:
	A();
	~A();
};
//clases B, C, D extends A
class B :public A{
public:
	B();
	~B();
};
class C : public A {
public:
	C();
	~C();
};
class D : public A {
public:
	D();
	~D();
};
//class E extends B, class F extends C and D
class E : public B {
public:
	E();
	~E();
};
class F :public C, public D {
public:
	F();
	~F();
};
//class G extends E and F
class G : public E, public F {
public:
	G();
	~G();
};
//class First and Second to show work of copy contructor
class First {
	
public:
	int valueFirst;
	First(int i);
	~First();

};
class SecondObj {
	
public:
	int valueSecond;
	First fst;
	SecondObj(int i);
	~SecondObj();
};
#endif SOMECLASES_H
