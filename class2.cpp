#include <iostream>
#include <string>

using namespace std;

template<class T>class A{
	public:
		void set(const T& val) = 0;
	
};

template<class T>
class B : public A<T> {
	public:
		void set(const T& val);
};

template<class T>
void B<T>::set(const T& v){
	A<T>::set(v);
}

int main(){
	
	return 0;	
}
