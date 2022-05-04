#include <iostream>
#include <string>

using namespace std;

template<class T>class A{
	public:
		virtual void vf() {cout <<"A::vf()"<<endl;}
		virtual void f() {cout << "A::f()"<<endl;}
		virtual void pvf() = 0;
};

template<class T>
class B : public A<T> {
	public:
		void vf() {cout <<"B::vf()"<<endl;}
		void f() {cout << "B::f()"<<endl;}
		void pvf(){cout << "B::pvf()\n";} 
};

/*template<class T>
void B<T>::pvf(const T& b){
	A<T>::pvf(b);
}*/

int main(){
	
	return 0;	
}
