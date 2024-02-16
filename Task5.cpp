/*
Implement a 'Neighborhood Class:
Create functionality to add houses and display information about each house and 
its inhabitants.
Expected output should list all houses and their residents.
*/

#include<iostream>
#include<string>
using namespace std;


class Dog {
public:
	string name;
	string breed;
	int age;

	void setDogInfo() {
		cout << "Dogs name is : ";
		cin >> name;
		cout << "Dogs breed is : ";
		cin >> breed;
		cout << "Dogs age is : ";
		cin >> age;
	}

	void bark() {
		cout << name << " says Woof!" << endl;
	}
};

class Person {
public:
	string name;
	string newPetName;
	string newPetBreed;
	int newPetAge;
	int age;
	Dog pet;
	
	void setPersonInfo() {
		cout << "Persons name is : ";
		cin >> name;
		cout << "Persons age is : ";
		cin >> age;
	}

	void displayDogInfo()
	{
		cout << "My dogs name is " << pet.name << " he is a " << pet.breed << " and is " << pet.age << " years old." << endl;
	}
	void introducePet()
	{
		cout << "My dog's name is " << pet.name << endl; pet.bark();
	}
	void changeDog() {
		int choice;
		cout << "Do you want to change your dog ?\n";
		cout << "Enter 1 for yes\n";
		cout << "Enter 2 for no\n";
		cin >> choice;
		if (choice == 1) {
			cout << "New dogs name : ";
			cin >> pet.name;
			cout << "New dogs breed : ";
			cin >> pet.breed;
			cout << "New dogs age : ";
			cin >> pet.age;

			introducePet();
		}
		
		
	}
};


class House {
public:
	Person person;
	string address;
	string colour;
	int i;
	void displayPersonInfo()
	{
		cout << "Person" << i+1 << "'s name is " << person.name << endl;
		cout << "Person" << i+1 << "'s age is " << person.age << endl;
	}
	void setHouseInfo()
	{
		cout << "House address is : ";
		cin.ignore();
		getline(cin, address);
		cout << "House colour is : ";
		cin >> colour;
		
		for (i = 0; i < 3; i++) {
			person.setPersonInfo();
		}
	}
	void displayHouseInfo() {
		cout << "House Address: " << address << endl;
		cout << "Colour: " << colour << endl;
		for (i = 0; i < 3; i++) {
			displayPersonInfo();
		}
		
	}
};

class Neighborhood {
public:
	House houses[2];
	string name;

	void displayNeighborhoodInfo() {
		cout << "Neighborhood: " << name << endl;
		for (int i = 0; i < 2; ++i) {
			if (houses[i].address.empty()) {
				break;
			}
			cout << "House " << i + 1 << ":" << endl;
			houses[i].displayHouseInfo();
			cout << endl;
		}
	}
};

int main() {
	Neighborhood neighborhood;
	neighborhood.name = "Wall Street Drive";

	for (int i = 0; i < 2; ++i) {
		cout << "Enter details for House " << i + 1 << endl;
		neighborhood.houses[i].setHouseInfo();
		cout << endl;
	}

	neighborhood.displayNeighborhoodInfo();

	return 0;
}
