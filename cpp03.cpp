#include<iostream>
using namespace std;

class university{

public:
	long int rollnostu;
	string name;
	string course;
	int year;
	void print()
	{
		cout<<"rollnostudent="<<rollnostu<<endl;
		cout<<"name="<<name<<endl;
		cout<<"course="<<course<<endl;
		cout<<"year="<<year<<endl;
		
	}
	
};
int main()
{
	university stu;
	stu.rollnostu=2209401003;
	stu.name="Ashutosh";
	stu.course="MCA";
	stu.year=2022;
	
	stu.print();

}