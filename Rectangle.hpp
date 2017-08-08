#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

class Rectangle{

    public:
    Rectangle()= default;
    Rectangle(double width,double height)
    : _width{width} , _height{height}{}
    double Width() const {return _width;}
    double Height() const {return _height;}
    double Area() const {return _height*_width;}
    double Perimeter() const {return 2.0*(_height+_width);}
    void Scale(double scaleFactor){
        _width *= scaleFactor;
        _height*=scaleFactor;
    }
    private:
    double _width{};    
    double _height{};
};
#endif
