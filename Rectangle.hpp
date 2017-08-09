#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP
#include <iostream>
#include <string>
#include <math.h>
using std::cout;
using std::string;

// Create a Rectangle Class
class Rectangle
{
    // Public Methods
  public:
    // Default Constructor, allows for init with no given params, C++11 feature
    Rectangle() = default;
    // Constructor Method, inits private variables
    Rectangle(double width, double height)
        : _width{width}, _height{height} {}
    // Returns the private variable _width, no internal variable change, const
    double Width() const { return _width; }
    // Returns the private variable _height, no internal variable change, const
    double Height() const { return _height; }
    // Calculates and Returns the Area of th Rectangle, no internal variable change, const
    double Area() const { return _height * _width; }
    // Calculates and Returns the Perimeter of the Rectangle, no internal variable change, const
    double Perimeter() const { return 2.0 * (_height + _width); }
    // Calculates and Returns the Diagonal Length of the Rectangle, no internal variable change, const
    double DiagonalLength() const { return sqrt(pow(_height, 2.0) + pow(_width, 2.0)); }
    void ConsoleInnerTriangles() const
    {
        cout << "Triangle 1 & 3: Area: " << triangleArea(_height, _width * 0.5)
             << ", Perimeter: " << trianglePerimeter(_height, DiagonalLength() * 0.5)
             << "\nTriangle 2 & 4: Area: " << triangleArea(_width, _height * 0.5)
             << ", Perimeter: " << trianglePerimeter(_width, DiagonalLength() * 0.5)
             << "\n\n";
    }
    // Draws a Rectangle in the Command Line, also doesn't change internal variables, thus the const keyword
    void DrawRect() const
    {
        if ((int)_width < 40)
        {
            string topBottomLine = ".";
            string middleChunk = "|";
            for (int i = 0; i < (int)_width; i++)
            {
                topBottomLine += "--";
                if (i != 0)
                {
                    middleChunk += "  ";
                }
            }
            topBottomLine += ".";
            middleChunk += "  |";
            cout << topBottomLine << "\n";
            for (int m = 0; m < (int)_height; m++)
            {
                cout << middleChunk << "\n";
            }
            cout << topBottomLine << "\n";
        }
        else
        {
            cout << "Rectangle is too large to print on screen";
        }
    }
    // Scale changes internal variables, thus it is not constant
    void Scale(double scaleFactor)
    {
        _width *= scaleFactor;
        _height *= scaleFactor;
    }
    // Private Variables
  private:
    double _width{};
    double _height{};
    double triangleArea(double base, double height) const
    {
        return (0.5 * base * height);
    }
    double trianglePerimeter(double base, double side) const
    {
        return (base + side + side);
    }
};
#endif
