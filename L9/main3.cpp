#include <iostream>
using namespace std;

class Circle {
    private:
        double radius;
    public:
    
        void radiusator(double r){
            radius = r;
        }
        
        void area(){
            cout << "p * " << radius << " = " << 3.141 * radius * radius << endl;
        }
        void circ(){
            cout << "p * " << 2 * radius << " = " << 3.141 * radius * 2  << endl;
        }

};

int main() {
    Circle c1;
    
    c1.radiusator(2.5);
    
    c1.area();
    c1.circ();
    
    return 0;
}
