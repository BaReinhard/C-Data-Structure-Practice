#include <iostream>
#include "Rectangle.hpp"
#include <string>
using std::cout;
using std::string;

// Easy Print Info function
void PrintInfo(const Rectangle &r)
{
    cout << "Rectanle width = " << r.Width()
         << ", height = " << r.Height()
         << ".\n"
         << "area = " << r.Area()
         << ", Perimeter = " << r.Perimeter()
         << "\n Diagonal Length = " << r.DiagonalLength()
         << "\n\n";
    r.ConsoleInnerTriangles();
}

int main()
{

    Rectangle r1{1, 4};
    r1.DrawRect();
    Rectangle r2{30, 20};
    r2.DrawRect();
    PrintInfo(r1);
    cout << "\n\n";
    PrintInfo(r2);
    r2.Scale(2);
    r2.DrawRect();
    cout << "\n\n";
    PrintInfo(r2);
    r2.Scale(2.5);
    r2.DrawRect();
    r2.DiagonalLength();
    cout << "\n\n";
    PrintInfo(r2);
}
