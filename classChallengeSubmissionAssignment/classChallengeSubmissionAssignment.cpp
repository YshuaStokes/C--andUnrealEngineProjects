// classChallengeSubmissionAssignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class Shape
{
public:

		string color;

	virtual void getArea() {
		cout << "This will get the shape area, eventually when I code" << endl;
	}


public:
	string m_color;
};

class Rect : public Shape
{
public:
	int height = 10;
	int width = 5;

	

	void getArea() {
		cout << "Area of the rectangle ";
		cout << height * width;
		
	}
};

class Tri : public Shape
{
public:
	int height = 10;
	int base = 5;



	void getArea() {
		cout << "\n Area of the Triangle ";
		cout << height * base *.5 ;

	}
};

class Cir : public Shape
{
public:
	
	int radius = 5;



	void getArea() {
		cout << "\n Area of the rectanglecircle ";
		cout << radius * radius * 3.14;

	}
};

int main()
{
	Rect rect1;
	Tri tri1;
	Cir cir1;

	rect1.color = "red";
	tri1.color = "blue";
	cir1.color = "purple";




	rect1.getArea();

	tri1.getArea();

	cir1.getArea();

	cout << "\n the rectangle's color is " + rect1.color;
	cout << "\n triangle's color is " + tri1.color;
	cout << "\n the circle's color is " + cir1.color;


	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
