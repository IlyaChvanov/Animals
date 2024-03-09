//
// Created by user on 08.03.2024.
//
#include "iostream"
#include "string"
#include "cstring"
#include "../include/Animal.h"
using namespace std;
Animal:: Animal()=default;
Animal::Animal(float mass, char *sex_new, string&& color, int age)
{
    this->mass = mass;
    int size_of_text = strlen(sex_new) + 1;
    sex = new char[size_of_text];
    strcpy_s(this->sex, size_of_text, sex_new);
    this->color = color;
    this->age = age;
}
Animal::Animal(const Animal&)=default;
Animal::Animal(Animal&& other)=default;

Animal:: ~Animal()
{
    delete[] sex;
}

string Animal::GetColor()
{
    return color;
}
char* Animal::GetSex()
{
    return sex;
}

