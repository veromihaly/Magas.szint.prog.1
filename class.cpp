#include <iostream>
#include <string>

using namespace std;

class A{
	public:
		virtual void vf() {cout <<"A::vf()"<<endl;}
		void f() {cout << "A::f()"<<endl;}
		virtual void pvf() const = 0; //absztraktá teszi az osztályt//
};

class B : public A {
public:
	virtual void vf() {cout <<"B::vf()"<<endl;}
	void f() {cout << "B::f()"<<endl;}
	void pvf() const { std::cout << "B::pvf()\n"; }
};


int main(){
	
	B b;
	b.vf();	
	b.f();
	b.pvf();
}
