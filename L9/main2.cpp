#include <iostream>
using namespace std;

class Car {
    public: 
        string brand;
        string model;
        double year;
        bool elec;
        
        void print(){
            cout << brand << " " << model << " " << " " << year << endl;
        }
        
        void park(){
            if (elec == true){
                cout << "You Can Park For Free" << endl;
            }
            else{
                cout << "You Cant Park For Free" << endl;
            }
        }
};

int main() {
    Car car1;
    
    car1.brand = "doyota";
    car1.model = "c0rola";
    car1.year = 2020;
    car1.elec = false;
    
    car1.print();
    car1.park();
    return 0;
}
