#include<iostream>
using namespace std;

class vehcle{

public:
	int no_oftyers;
	string color;
	string name;
	int year;
	void print()
	{
		cout<<"name="<<name<<endl;
		cout<<"manufacture year="<<year<<endl;
		cout<<"color="<<color<<endl;
		cout<<"noof tyers="<<no_oftyers<<endl;
		
	}
	
};
int main()
{
	vehcle bmw,ashoka;
	bmw.name="bmw car";
	bmw.no_oftyers=4;
	ashoka.name="ashoka truck";
	ashoka.no_oftyers=8;
	bmw.color="black";
	ashoka.color="red";
	ashoka.year=1980;
	bmw.year=2011;
	bmw.print();

}


//write a c++ program to create a class university and which is having variables such as course, year, nameofstudent, rollnoofstu  and then 
//create for object class also make a function a class which we print details of student?