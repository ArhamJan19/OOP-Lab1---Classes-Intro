//#include<iostream>
//#include<string>
//using namespace std;
//
//class Dog {
//public:
//    string name;
//    string breed;
//    int age;
//
//    void setDogInfo() {
//        cout << "Dog's name is : ";
//        cin >> name;
//        cout << "Dog's breed is : ";
//        cin >> breed;
//        cout << "Dog's age is : ";
//        cin >> age;
//    }
//
//    void bark() {
//        cout << name << " says Woof!" << endl;
//    }
//};
//
//class Person {
//public:
//    string name;
//    int age;
//    Dog pet;
//
//    void setPersonInfo() {
//        cout << "Person's name is : ";
//        cin >> name;
//        cout << "Person's age is : ";
//        cin >> age;
//    }
//
//    void displayInfo() {
//        cout << "Name: " << name << endl;
//        cout << "Age: " << age << endl;
//    }
//};
//
//class House {
//public:
//    Person resident;
//    string address;
//    string colour;
//    int houseNumber;
//
//    void setHouseInfo() {
//        cout << "House address is : ";
//        cin.ignore(); // Ignore newline character
//        getline(cin, address);
//        cout << "House colour is : ";
//        cin >> colour;
//        cout << "House number is : ";
//        cin >> houseNumber;
//    }
//
//    void displayInfo() {
//        cout << "House Address: " << address << endl;
//        cout << "Colour: " << colour << endl;
//        cout << "House Number: " << houseNumber << endl;
//        resident.displayInfo();
//    }
//};
//
//class Neighborhood {
//public:
//    House houses[10];
//    string name;
//
//    void displayInfo() {
//        cout << "Neighborhood: " << name << endl;
//        for (int i = 0; i < 10; ++i) {
//            if (houses[i].address.empty()) {
//                break;
//            }
//            cout << "House " << i + 1 << ":" << endl;
//            houses[i].displayInfo();
//            cout << endl;
//        }
//    }
//};
//
//int main() {
//    Neighborhood neighborhood;
//    neighborhood.name = "Example Neighborhood";
//
//    // Set house information
//    for (int i = 0; i < 10; ++i) {
//        cout << "Enter details for House " << i + 1 << endl;
//        neighborhood.houses[i].setHouseInfo();
//        cout << endl;
//    }
//
//    // Display neighborhood information
//    neighborhood.displayInfo();
//
//    return 0;
//}
