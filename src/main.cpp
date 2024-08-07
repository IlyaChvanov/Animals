#include "iostream"
#include "string"
#include "../include/Animal.h"

using std::cout, std::endl;

void print_fox(Fox &first_fox);

void print_dog(Dog &first_dog);

int main() {
    char sex_test[]{"female"};
    Animal test(1, sex_test, "red", 12);
    cout << "Test animal:" << endl;
    cout << "Color: " << test.GetColor() << endl;
    cout << "Sex: " << test.GetSex() << endl;

    char first_dog_name[]{"Bobik"};
    Dog first_dog(first_dog_name, Dog::Breeds::Pug, 15, sex_test, "white", 3);
    print_dog(first_dog);
    cout << endl;

    cout << "dog2 created by moved dog 1" << endl;
    Dog dog2 = Dog(std::move(first_dog));
    print_dog(dog2);

    char first_fox_name[]{"Ding"};
    Fox first_fox(first_fox_name, Fox::TypeFox::Fennec_Fox, 8, sex_test, "red", 5);
    print_fox(first_fox);
    cout << endl;

    char copied_fox_name[]{"Renar"};
    Fox copied = first_fox;
    cout << "fox is copied by first_fox(changed name by setter)" << endl;
    copied.SetName(copied_fox_name);
    print_fox(copied);
    cout << endl;

    return 0;
}

void print_fox(Fox &first_fox) {
    cout << "-----Fox------" << endl;
    cout << "Name: " << first_fox.GetName() << endl;
    cout << "Race: ";
    switch (first_fox.GetRace()) {
        case 0:
            cout << "Red fox" << endl;
            break;
        case 1:
            cout << "Arctic fox" << endl;
            break;
        case 2:
            cout << "Fennec fox" << endl;
            break;
        case 3:
            cout << "Gray fox" << endl;
            break;
        case 4:
            cout << "Kit fox" << endl;
            break;

        default:
            std::cout << "type is undefined" << "\n";
            break;
    }

    cout << "Mass: " << first_fox.GetMass() << " KG" << endl;
    cout << "Sex: " << first_fox.GetSex() << endl;
    cout << "Color: " << first_fox.GetColor() << endl;
    cout << "Age: " << first_fox.GetAge() << endl;
    cout << "Num of eaten rabbit: " << first_fox.GetNumberRabbitsEaten() << endl;
    cout << "What does the Fox say???? " << first_fox.WhatDoesSay() << endl;
}

void print_dog(Dog &first_dog) {
    cout << "-----Dog------" << endl;
    cout << "Name: " << first_dog.GetName() << endl;
    cout << "Race: ";
    switch (first_dog.GetRace()) {
        case 0:
            cout << "German Shepherd" << endl;
            break;
        case 1:
            cout << "Golden Retriever" << endl;
            break;
        case 2:
            cout << "Labrador Retriever" << endl;
            break;
        case 3:
            cout << "Beagle" << endl;
            break;
        case 4:
            cout << "Yorkshire_Terrier" << endl;
            break;
        case 5:
            cout << "Poodle" << endl;
            break;
        case 6:
            cout << "French Bulldog" << endl;
            break;
        case 7:
            cout << "Rottweiler" << endl;
            break;
        case 8:
            cout << "Dachshund" << endl;
            break;
        case 9:
            cout << "Pug" << endl;
            break;
        default:
            std::cout << "breed is undefined" << "\n";
            break;
    }

    cout << "Mass: " << first_dog.GetMass() << " KG" << endl;
    cout << "Sex: " << first_dog.GetSex() << endl;
    cout << "Color: " << first_dog.GetColor() << endl;
    cout << "Age: " << first_dog.GetAge() << endl;
    cout << "What does the dog say: " << first_dog.WhatDoesSay() << endl;
}
