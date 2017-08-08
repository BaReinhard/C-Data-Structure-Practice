#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP
#include <iostream>
#include <string>
using std::cout;
using std::string;
class Rectangle{

    public:
    Rectangle()= default;
    Rectangle(double width,double height)
    : _width{width} , _height{height}{}
    double Width() const {return _width;}
    double Height() const {return _height;}
    double Area() const {return _height*_width;}
    double Perimeter() const {return 2.0*(_height+_width);}
    void DrawRect() const{
        string topBottomLine =".";
        string middleChunk="|";
        for(int i=0;i<_width;i++){
            topBottomLine+="--";
            if(i!= 0){
                middleChunk+="  ";
            }
        }
        topBottomLine+=".";
        middleChunk+="  |";
        cout << topBottomLine << "\n";
        for(int m =0;m<_height;m++){
            cout << middleChunk << "\n";
        }
        cout << topBottomLine<<"\n";
    }
    void Scale(double scaleFactor){
        _width *= scaleFactor;
        _height*=scaleFactor;
    }
    private:
    double _width{};    
    double _height{};
};
#endif
