#include <iostream>
#include <string>

using namespace std;

template<typename T>class A{
	public:
		virtual void vf() {cout <<"A::vf()"<<endl;}
		virtual void f() {cout << "A::f()"<<endl;}
		virtual void pvf() = 0; 
};

template<typename T>
class B : public A<T> {
	public:
		void vf() {cout <<"B::vf()"<<endl;}
		void f() {cout << "B::f()"<<endl;}
		void pvf(){ std::cout << "B::pvf()\n"; }
};

int main(){
	
	B b;
	b.vf();
	
	return 0;	
}
