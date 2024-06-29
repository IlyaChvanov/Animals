//
// Created by user on 08.03.2024.
//
#include "string"
#include "cstring"
#include "../include/Animal.h"

Animal::Animal() = default;

Animal::Animal(float mass, char *sex_new, string &&color, int age) :
                mass(mass),
                color(color),
                age(age) {
    size_t size_of_text = strlen(sex_new) + 1;
    sex = new char[size_of_text];
    strcpy_s(this->sex, size_of_text, sex_new);
}

Animal::Animal(const Animal &) = default;

Animal::Animal(Animal &&other)  = default;

Animal::~Animal() { delete[] sex; }

Animal &Animal::operator=(const Animal &other) = default;

Animal &Animal::operator=(Animal &&moved)  = default;

string Animal::GetColor() { return color; }

char *Animal::GetSex() const { return sex; }

int Animal::GetAge() const { return age; }

float Animal::GetMass() const { return mass; }

void Animal::SetMass(float new_mass) { mass = new_mass; }

void Animal::SetSex(char *new_sex) {
    size_t size_of_text = strlen(new_sex) + 1;
    sex = new char[size_of_text];
    strcpy_s(this->sex, size_of_text, new_sex);
}

void Animal::SetAge(int new_age) { age = new_age; }

void Animal::SetColor(string &&new_color) { color = new_color; }

Dog::Dog() = default;

Dog::Dog(char *new_name, Breeds breed, float mass, char *new_sex, string &&color, int age) :
        Animal(mass, new_sex, std::move(color), age) {
    size_t size_of_text_s = strlen(new_sex) + 1;
    sex = new char[size_of_text_s];
    strcpy_s(sex, size_of_text_s, new_sex);

    size_t size_of_text = strlen(new_name) + 1;
    name = new char[size_of_text];
    strcpy_s(name, size_of_text, new_name);
}

Dog::~Dog() {
    delete[] name;
    delete[] sex;
}

Dog::Dog(const Dog &) = default;

Dog::Dog(Dog &&other) = default;

Dog &Dog::operator=(const Dog &other) = default;

Dog &Dog::operator=(Dog &&moved) = default;

void Dog::SetRace(Breeds new_breed) { breed = new_breed; }

void Dog::SetName(char *new_name) {
    size_t size_of_text = strlen(new_name) + 1;
    name = new char[size_of_text];
    strcpy_s(this->name, size_of_text, new_name);
}

int Dog::GetRace() { return static_cast<int>(breed); }

char *Dog::GetName() { return name; }

string Dog::WhatDoesSay() { return "AF"; }


Fox::Fox() = default;

Fox::Fox(char *new_name, TypeFox type, float mass, char *new_sex, string &&color, int age) :
                Animal(mass, sex, std::move(color), age) {
    size_t size_of_text_s = strlen(new_sex) + 1;
    sex = new char[size_of_text_s];
    strcpy_s(this->sex, size_of_text_s, new_sex);

    size_t size_of_text = strlen(new_name) + 1;
    name = new char[size_of_text];
    strcpy_s(this->name, size_of_text, new_name);
}

Fox::~Fox() {
    delete[] name;
    delete[] sex;
}

Fox::Fox(const Fox &) = default;

Fox::Fox(Fox &&other) = default;

Fox &Fox::operator=(const Fox &other) = default;

Fox &Fox::operator=(Fox &&moved) = default;

void Fox::SetRace(TypeFox new_type) { type = new_type; }

void Fox::SetName(char *new_name) {
    size_t size_of_text = strlen(new_name) + 1;
    name = new char[size_of_text];
    strcpy_s(this->name, size_of_text, new_name);
}

int Fox::GetRace() { return static_cast<int>(type); }

char *Fox::GetName() { return name; }

string Fox::WhatDoesSay() {
    return "Ring-ding-ding-ding-dingeringeding!\n"
           "Gering-ding-ding-ding-dingeringeding!\n"
           "Gering-ding-ding-ding-dingeringeding!";
}

int Fox::GetNumberRabbitsEaten() const { return numberRabbitsEaten; }

void Fox::SetNumberRabbitsEaten(int new_numberRabbitsEaten) { numberRabbitsEaten = new_numberRabbitsEaten; }

void Fox::SetType(TypeFox new_type) { type = new_type; }

void Fox::Eat() { numberRabbitsEaten++; }
