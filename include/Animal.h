//
// Created by user on 08.03.2024.
//
#include "iostream"
#include "string"
#ifndef ANIMALS_ANIMALS_H
#define ANIMALS_ANIMALS_H
using namespace std;

class Animal
{
public:
    Animal();
    Animal(float mass, char* sex_new, string&& color, int age);
    Animal(const Animal& other);
    Animal(Animal&& other) noexcept;
    virtual ~Animal();

    Animal& operator=(const Animal& other);
    Animal& operator=(Animal&& moved) noexcept;

    float GetMass()const;
    char* GetSex()const;
    int GetAge()const;
    string GetColor();

    void SetMass(float mass);
    void SetSex(char* new_sex);
    void SetAge(int new_age);
    void SetColor(string&& new_color);

    virtual string WhatDoesSay(){return "";};
protected:
    float mass{0};
    char* sex{nullptr};
    string color;
    int age{0};
};

class Dog: public Animal
{
public:
    enum class Breeds{German_Shepherd, Golden_Retriever, Labrador_Retriever, Beagle, Yorkshire_Terrier, Poodle, French_Bulldog, Rottweiler, Dachshund, Pug};

    Dog();
    Dog(char* name, Breeds breed, float mass, char* sex, string&& color, int age);
    Dog(const Dog& other);
    Dog(Dog&& other)noexcept;
    ~Dog() override;

    Dog& operator=(const Dog& other);
    Dog& operator=(Dog&& moved) noexcept;

    char* GetName();
    int GetRace();

    void SetName(char* new_name);
    void SetRace(Breeds new_breed);
    string WhatDoesSay() override;

private:
    Breeds breed = Breeds::German_Shepherd;
    char* name = nullptr;

};

class Fox: public Animal
{
public:
    enum class TypeFox{Red_Fox, Arctic_Fox, Fennec_Fox, Gray_Fox, Kit_Fox};

    Fox();
    Fox(char* name, TypeFox type, float mass, char* sex, string&& color, int age);
    Fox(const Fox& other);
    Fox(Fox&& other)noexcept;
    ~Fox() override;

    Fox& operator=(const Fox& other);
    Fox& operator=(Fox&& moved) noexcept;

    char* GetName();
    int GetRace();

    void SetName(char* new_name);
    void SetRace(TypeFox new_type);
    string WhatDoesSay() override;

    int GetNumberRabbitsEaten()const;
    void SetNumberRabbitsEaten(int numberRabbitsEaten);
    void SetType(TypeFox new_type);

    void Eat();
private:
    char* name = nullptr;
    TypeFox type = TypeFox::Red_Fox;
    int numberRabbitsEaten = 0;
};
#endif //ANIMALS_ANIMALS_H
