//
// Created by user on 08.03.2024.
//
#include "iostream"
#include "string"
#ifndef ANIMALS_ANIMALS_H
#define ANIMALS_ANIMALS_H
using namespace std;

class Animal {
public:
    Animal();
    Animal(float mass, char* sex_new, string&& color, int age);
    Animal(const Animal& other);
    Animal(Animal&& other);
    virtual ~Animal();

    float GetMass();
    char* GetSex();
    int GetAge();
    string GetColor();
    void SetMass();
    void SetSex();
    void SetAge();
    void SetColor();

    virtual string WhatDoesSay();
protected:
    float mass{0};
    char* sex{nullptr};
    string color{""};
    int age{0};
};

class Dog:: Animal()

#endif //ANIMALS_ANIMALS_H
