/*
Interaction Between 'Person', 'Dog', and 'House':
Model a scenario where a person owns a dog and lives in a house. Expected output 
should detail the person, their dog, and their house in a structured format.
*/
/*
#include<iostream>
using namespace std;


class Dog {
public:
	string name;
	string Breed;
	int age = 0;

	void bark() {
		cout << name << " says Woof!" << endl;
	}
};

class Person {
public:
	string name;
	int age;
	Dog pet;
	void DisplayDogInfo()
	{
		cout << "My dogs name is " << pet.name << " he is a " << pet.Breed << " and is " << pet.age << " years old." << endl;
	}
	void introducePet()
	{
		cout << "My dog's name is " << pet.name << endl; pet.bark();
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

	person1.person.name = "Alice";
	person1.person.age = 23;
	person1.person.pet.name = "Buddy";
	person1.person.pet.age = 3;
	person1.person.pet.Breed = "German Shephard";
	person1.DisplayPersonInfo();
	person1.person.DisplayDogInfo();
	cout << endl;

	House person2;
	person2.person.name = "Ali";
	person2.person.age = 17;
	person2.person.pet.name = "Leo";
	person2.person.pet.age = 15;
	person2.person.pet.Breed = "Labrador";
	person2.DisplayPersonInfo();
	person2.person.DisplayDogInfo();
	cout << endl;

	House person3;
	person3.person.name = "Jane";
	person3.person.age = 45;
	person3.person.pet.name = "Prince";
	person3.person.pet.age = 10;
	person3.person.pet.Breed = "Bull Dog";
	person3.DisplayPersonInfo();
	person3.person.DisplayDogInfo();
	cout << endl;

	return 0;
} */