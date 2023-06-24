#include <iostream>
using namespace std;
const double PI = 3.14159;
#include <iomanip>

double rectangle(double l, double w)
{
    return l * w;
}
double circle(double r)
{
    return PI * r * r;
}
double cylinder(double r, double h)
{
    return PI * r * r * h;
}

int main()
{
    double width;
    double length;
    double radius;
    double height;
    double Area1;
    double Area2;
    double Area3;
    int choice;
    cout << "This program can calculate the area of a rectangle, "
        << "the area of a circle, or volume of a cylinder." << endl;
    cout << "To run the program enter: " << endl;
    cout << "1: To find the area of rectangle." << endl;
    cout << "2: To find the area of a circle." << endl;
    cout << "3: To find the volume of a cylinder." << endl;
    cout << "-1: To terminate the program." << endl;
    cin >> choice;
    cout << endl;
    while (choice != (-1))
    {
      if (choice == 1)
      {
          cout << "Enter the length and the width of the rectangle: ";
          cin >> length >> width;
          cout << endl;
          Area1 = rectangle(length, width);
          cout << "Area = " << setprecision(2) << Area1 << endl;
         
      }

      else if (choice == 2)
      {
          cout << "Enter the radius of the circle: ";
          cin >> radius;
          cout << endl;
          Area2 = circle(radius);
          cout << "Area = " << setprecision(2) << Area2 << endl;
         
      }

      else if (choice == 3)
      {
          cout << "Enter the radius and height of the cylinder: ";
          cin >> radius >> height;
          cout << endl;
          Area3 = cylinder(radius, height); 
          cout << "Volume = " << setprecision(2) << Area3 << endl;
        
      }
      else
      {
        cout << "Invalid choice!" << endl;
        
      }

      cout << "To run the program enter: " << endl; 
      cout << "1: To find the area of rectangle." << endl;
      cout << "2: To find the area of a circle." << endl;
      cout << "3: To find the volume of a cylinder." << endl;
      cout << "-1: To terminate the program." << endl;
      cin >> choice;
      cout << endl;
    }
 }
