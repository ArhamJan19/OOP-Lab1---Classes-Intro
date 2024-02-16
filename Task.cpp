/*
Expand the 'Dog Class:
Add breed and age attributes. Implement a method to display the dog's details. 
Expected output should include the dog's name, breed, and age.

*/

#include<iostream>
using namespace std;

class House {
public:

};

class Dog {
public:
	string name;
	string Breed;
	int age;

	void bark() {
		cout << name << " says Woof!" << endl;
	}
};

class Person {
public:
	string name;
	Dog pet;
	void DisplayDogInfo()
	{
		cout << "My name is " << name << " my dogs name is " << pet.name << " he is a " << pet.Breed << " and is " << pet.age << " years old." << endl;
	}
	void introducePet()
	{
		cout << "My dog's name is " << pet.name << endl; pet.bark();
	}
};

int main() {
	Person person1;
	person1.name = "Alice";
	person1.pet.name = "Buddy";
	person1.pet.age = 15;
	person1.pet.Breed = "German Shephard";
	person1.DisplayDogInfo();
	return 0;
} 