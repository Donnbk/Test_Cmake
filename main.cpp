#include <iostream>
using namespace std;

// Base class
class Employee {
	protected: // Protected access specifier
		int salary;
};

// Derived class 
class Programmer: public Employee {
	public:
		int bonus;
		void setSalary(int s_temp) {
			salary = s_temp;
		}
		int getSalary() {
			return salary;
		}
};

int main() {
	Programmer MrA;
	MrA.setSalary(100000);
	MrA.bonus = 20000;
	
	cout << "Salary of Mr. A is " << MrA.getSalary() << "\n";
	cout << "Bonus of Mr. A is " << MrA.bonus << "\n";
	
	return 0;
}
