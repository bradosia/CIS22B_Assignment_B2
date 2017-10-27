/*
Branden Lee
CIS 22B
Fall 2017
Assignment B
Problem B2

Used Microsoft Visual Studio 2017

Prompts user for the height and radius to return the volume of a cone.
Demonstrates the use of data structures.
*/
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

/**************************************************
** global functions, and variables
**************************************************/

void input (double& height, double& radius);

const double PI = 3.14159265358979323846;

/**************************************************
** Cone class
**************************************************/
class Cone
{
private:
	double height;
	double radius;
public:
	void setUp (double height, double radius);
	double getVolume ();
	void output ();
};

int main ()
{
	Cone* ptr = new Cone ();
	double height;
	double radius;
	input (height, radius);
	ptr->setUp (height, radius);
	ptr->output ();
	delete ptr;
	//system("pause");
	return 0;
}

/********************* input **********************
** Reads the height and radius from the user as
** reference parameters
**************************************************/
void input (double& height, double& radius)
{
	cout << "Enter height of the cone and radius of the base " << endl
		<< "with spaces between the two values. i.e. 6 2" << endl;
	cin >> height >> radius;
}

/**************************************************
** Cone class functions
**************************************************/

/******************* Cone::setUp ******************
** Puts the data into the data structure
** height and radius into a pointer to the Cone
**************************************************/
void Cone::setUp (double initHeight, double initRadius)
{
	height = initHeight;
	radius = initRadius;
}

/******************* Cone::getVolume **************
** Computes the volume from a pointer to the Cone
** Returns the volume V = Π r2 h / 3
**************************************************/
double Cone::getVolume ()
{
	return PI * radius*radius* height / 3.0;
}

/********************* Cone::output ***************
** Calls the getVolume function to get the volume
** Prints the height, radius, and volume in a neat
** format
**************************************************/
void Cone::output ()
{
	cout << endl << "The values of the cone are: " << endl
		<< "height: " << setw (8) << right << height << endl
		<< "radius: " << setw (8) << right << radius << endl
		<< "volume: " << setw (8) << right << fixed << setprecision (2) << getVolume () << endl;
}

/* Execution results
Enter height of the cone and radius of the base
with spaces between the two values. i.e. 6 2
6 2

The values of the cone are:
height:        6
radius:        2
volume:     8.89
*/