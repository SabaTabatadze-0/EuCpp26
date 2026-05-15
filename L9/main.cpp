#include <iostream>
using namespace std;

class Box {
      double width;
      double height;
      double length;
      
      double calcVolume{
             return width * length * height;
             }     
             
      void print() {
           cout << length << " x " << width << " x " << height << endl;
           }
           
}

int main() {
    Box box1;
    
    b1.height = 3.1;
    b1.width = 2.2;
    b1.length =  3;
    
    b1.print();
    
    cout << b1.calcVolume() << endl;
    
    return 0;
}
