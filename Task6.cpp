#include <iostream> 
using namespace std;

class Vehicle {
private:
    string make;
    string model;
    int year;
    int mileage;
public:
    Vehicle(string mk, string mdl, int yr) : make(mk), model(mdl), year(yr), mileage(0) {} 

    void setMake(string mk) {
        make = mk;
    }

    void setModel(string mdl) {
        model = mdl;
    }

    void setYear(int yr) {
        year = yr;
    }

  
    void setMileage(int m) {
        mileage = m;
    }

 
    void displayVehicleInfo() {
        cout << "Make: " << make << ", Model: " << model << ", Year: " << year
            << ", Mileage: " << mileage << " miles" << endl;
    }

  
    bool needsServicing(int thresholdMileage) {
        return mileage >= thresholdMileage;
    }
};

int main() {
    Vehicle myVehicle("Toyota", "Corolla", 2020);
    myVehicle.setMileage(10500); 
    myVehicle.displayVehicleInfo();

   
    
    if (myVehicle.needsServicing(10000)) {
        cout << "Car needs servicing." << endl;
    }
    else {
        cout << "Car does not need servicing." << endl;
    }

    return 0;
}
