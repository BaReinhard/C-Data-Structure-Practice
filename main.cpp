#include <iostream>;
#include "Rectanlge.hpp";
using std::cout;

void PrintInfo(const Rectangle& r){
    cout << "Rectanle width = " << r.Width()
         <<", height = " << r.Height()
         <<".\n" 
         <<"area = " << r.Area()
         <<"Perimeter = " << r.Perimeter()
         <<"\n\n";
}
int main(){
    Rectangle r1{};
    Rectangle r2{20,40};
    PrintInfo(r1);
    cout << "\n\n";
    PrintInfo(r2);
    r2.Scale(2);
    cout << "\n\n";
    PrintInfo(r2);
    r2.Scale(0.5);
    cout << "\n\n";
    
    
    PrintInfo(r2);
    
   
}


