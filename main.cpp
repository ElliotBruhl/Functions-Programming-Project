//when provided with 2 points (center and point on circle), it will calculate the radius, circumference, and area of the circle
#include <iostream>
#include <cmath>
#define PI 3.1416

double calcDistance(double x1, double y1, double x2, double y2) { //uses distance formula to calculate distance between 2 points
  return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
double calcRadius(double x1, double y1, double x2, double y2) { //dist between 2 points given is the radius
  return calcDistance(x1, y1, x2, y2);
}
double calcCircumference(double radius) { //circumference is 2 * pi * radius
  return 2 * PI * radius;
}
double calcArea(double radius) { //area is pi * radius^2
  return PI * radius * radius;
}

int main() {
  double x1, y1, x2, y2;
  
  std::cout << "Enter the first coordinate (center point of circle):\n";
  std::cout << "x1: ";
  std::cin >> x1;
  std::cout << "y1: ";
  std::cin >> y1;
  
  std::cout << "Enter the second coordinate (point on circle):\n";
  std::cout << "x2: ";
  std::cin >> x2;
  std::cout << "y2: ";
  std::cin >> y2;

  double radius = calcRadius(x1, y1, x2, y2);
  
  std::cout << "Radius: " << radius << "\n";
  std::cout << "Circumference: " << calcCircumference(radius) << "\n";
  std::cout << "Area: " << calcArea(radius) << "\n";

  return 0;
}