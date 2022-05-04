#include <iostream>
#include <string>

using namespace std;

class A{
	public:
		virtual void vf() {cout <<"A::vf()"<<endl;}
		virtual void f() {cout <<"A::f()"<<endl;}
		virtual void pvf() const = 0; 
};

class B : public A {
	public:
		virtual void vf() {cout <<"B::vf()"<<endl;}
		virtual void f() {cout <<"B::f()"<<endl;}
		virtual void pvf() const {cout <<"B::pvf()"<<endl;}
};


int main(){
	
	B b;
	b.vf();	
	b.f();
	b.pvf();
}
