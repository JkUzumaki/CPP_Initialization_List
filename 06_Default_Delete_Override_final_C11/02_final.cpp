#include<iostream>

class Base
{
public:
	virtual void f(int) {
		std::cout << "Interger in Base\n";
	}
};

class Derived: public Base
{
public:
	void f(int) override final{
		std::cout << "Int in Derived\n";
	}
	virtual void fun(){
		std::cout << "fun in Derivced\n";
	}
};

class D1: public Derived
{
public:	
/*	void f(int){
		std::cout << "D1 f(int)\n";
	}
*/	void fun() override{
		std::cout << "In D1\n";
	}
};

int main()
{
	Derived d;
	d.f(10);
	return 0;
}
