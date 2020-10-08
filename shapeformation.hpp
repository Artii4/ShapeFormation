#include <iostream>
const double PI = 3.14159265359;

/*
 * GENERAL INFORMATION:
 * Shapes.h is a C++ Library for drawing shapes, like rectangles and
 * circles directly in your terminal.
 *
 * Apache License 2.0
*/

// Rectangle
namespace sf {
struct Rect {
  int x;
  int y;
  int sizeX;
  int sizeY;
  char charInside = ' ';

  Rect(int x, int y, int sizeX, int sizeY)
  {
	  this->x = x;
	  this->y = y;
	  this->sizeX = sizeX;
	  this->sizeY = sizeY;
  }

  // Main draw function
  void draw()
  {
	  for (int y = 0; y<sizeY; y++) {
		  for (int x = 0; x<sizeX; x++) {
			  // If in corner
			  if (y==0 && x==0 || y==0 && x==sizeX-1 || y==sizeY-1 && x==0 ||
					  y==sizeY-1 && x==sizeX-1) {
				  std::cout << '+';
			  }
			  else if (y==0 || y==sizeY-1) {
				  std::cout << '-';
			  }
			  else if (x==0 || x==sizeX-1) {
				  std::cout << '|';
			  }
			  else {
				  std::cout << charInside;
			  }
		  }
		  std::cout << '\n';
	  }
  }
};

struct Circle {
  int x, y = 0;
  int radius = 20;

  Circle(int x, int y, int radius = 20)
  {
	  this->x = x;
	  this->y = y;
	  this->radius = radius;
  }

  Circle(int radius)
  {
	  this->radius = radius;
  }

  double getArea()
  {
	  return PI*radius*radius;
  }

  double getPerimeter()
  {
  	return PI * 2 * radius * 2;
  }

  void draw()
  {
  	/*
  	 * This function works by using the sin() and cos() functions.
  	 * With this, you round the x and y position on which you draw a star
  	 * sign ('*')
  	 * The midpoint of the circle is the variable x and y plus the radius,
  	 * or in other words the offset + the radius, giving you the midpoint.
  	 */

  	// The midpoint
  	int midpointX = x + radius;
  	int midpointY = y + radius;
  	int cursorX = x;
  	int cursorY = y;
  }
};
}