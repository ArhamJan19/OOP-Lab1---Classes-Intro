/*
Enhance the 'Person' Class:
Implement a method to change the owner's dog, demonstrating dynamic 
relationships. Expected output should show the person introducing a new pet.
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

	void DisplayDogInfo()
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
	void DisplayPersonInfo()
	{
		cout << "My name is " << person.name << " My age is " << person.age << endl;
	}
};

int main() {
	House person1;
	person1.person.setPersonInfo();
	cout << endl;
	person1.person.pet.setDogInfo();
	cout << endl;
	person1.DisplayPersonInfo();
	cout << endl;
	person1.person.DisplayDogInfo();
	cout << endl;
	person1.person.changeDog();
	cout << endl;

	House person2;
	person2.person.setPersonInfo();
	cout << endl;
	person2.person.pet.setDogInfo();
	cout << endl;
	person2.DisplayPersonInfo();
	cout << endl;
	person2.person.DisplayDogInfo();
	cout << endl;
	person2.person.changeDog();
	cout << endl;

	House person3;
	person3.person.setPersonInfo();
	cout << endl;
	person3.person.pet.setDogInfo();
	cout << endl;
	person3.DisplayPersonInfo();
	cout << endl;
	person3.person.DisplayDogInfo();
	cout << endl;
	person3.person.changeDog();
	cout << endl;

	return 0;
}


