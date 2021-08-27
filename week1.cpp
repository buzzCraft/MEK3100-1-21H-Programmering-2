#include <iostream>
#include <math.h> // math fuctions for task 3 and 4
using namespace std;

// Input func
int input(string msg) {

    int a;
	cout << msg << " ";
    cin >> a;
    return a;
}

//input func
double dinput(string msg){
    double a;
	cout << msg << " ";
    cin >> a;
    return a;	
}

//Calculate area of triangle
double triangleArea(double h, double b) {
	return ((h*b)/2);
}

//Get hight and base of triangle, print out area
void task1(){
	double h = input("Enter the hight of the triangle:");
	double b = input("Enter the base of the triangle:");	
	double a = triangleArea(h,b);
	cout << "The area of a " << h << " x " << b << " triangle is: " << a;
}

//Ask user for three ints, print out the product
void task2(){
	int a = input("Enter first int:");
	int b = input("Enter second int:");
	int c = input("Enter third int:");
	int prod = a*b*c;
	cout << "The product of " << a << " * "<<b<<" * "<<c <<" = " << prod;
}

//Ask the user for one side of a square, print out area
void task3(){
	int a = input("Enter the length of one side in a rectangle:");
	cout << "The area of the rectangle is " << pow(a,2);
	
}

// Ask user for a radius, compute and print the area
void task4(){
	double r = dinput("Enter the circle radius:");
	double area = M_PI * pow(r,2);
	cout << "The circle area is: " << area;
			
}

int main()
{
	task4();
	
	return 0;
}
