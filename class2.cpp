#include <iostream>
#include <stdexcept>
#include <vector>
#include <string>

using namespace std;

class Person{
	public:
		Person(){}
		//Person(string n, int a) : n{n}, a{a}{
		Person(string f, string l, int a) : f{f}, l(l), a{a}{
			if(a < 0 || a >=150){
				throw runtime_error ("Invalid age");
			}
			
			string n = f + l;
			
			for (char c : n){
				switch(c) {
					case ':' :
					case '$' :
					case '%' :
					case '[' :
					case ']' :
					case '^' :
					case '"' :
					case '&' :
					case '!' :
					case '@' :
					case ';' :
					case '*' :
					case '#' :
					/*case ''' :*/
						throw runtime_error ("Invalid character");
						break;
					default:
						break;
				}
				
			}	
		};
		//string name() const {return n;}
		string first() const {return f;}
		string last() const {return l;}
		int age()const{return a;}
	private:
		//string n;
		string f;
		string l;
		int a;
};

istream& operator>> (istream& is, Person& p){
	string f;
	string l;
	int a;
	cout << "First name: ";
	is >> f;
	cout << "Last name: ";
	is >> l;
	cout << "Age: ";
	is >> a;
	
	p = Person{f, l, a};
	return is;
}

ostream& operator<< (ostream& os, const Person& p) {
	
	os << p.first() << " " << p.last() << " " << p.age();
	return os;
}

/* 	ostream ki (ostream os, Person& p)
	ostream& oper(ostream os, Person p)
	cout << p -->ez az egész egy ostream
	
	is(input stream) >> Person >> Person >> person
*/

int main(){

	//Person p;
	Person p = Person("Goofy", "a", 63);
	//p.n = "Goofy";
	//p.a = 63;
	//cout << p << endl;
	
	cout << p.first()<<" " << p.last() << " " << p.age() << endl;
	
	Person p2;
	cin >> p2;
	cout << p2 << endl;
	
	vector<Person> vec;
	string choice;
	
	Person p3;
	
	cout << "Enter a person you would like to add to the list:\n";
	cin >> p3;
	vec.push_back(p3);
	for(Person p: vec){
		cout << p << endl;
		}
	
	while(cout << "Would you like to add another person to the list?. Enter 'y' if you would like to or 'end' if not.\n"){
	cin >> choice;
	if(choice=="y"){
		Person p;
		cin >> p;
		vec.push_back(p);
	}
	if(choice=="end"){
		for(Person p: vec){
		cout << p << endl;
		}
		break;
	}
		/*for(Person p; cin>>p;){ //while(cin>>p)
		if(p.first() == "end"){
			break;
			}
		else
			vec.push_back(p);
	}*/
	}
	return 0;
}


