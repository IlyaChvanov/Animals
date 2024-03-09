#include "iostream"
#include "string"
#include "../include/Animal.h"
using namespace std;

int main()
{
    char sex[] {"female"};
    Animal fox(1, sex, "red", 12);
    cout<< fox.GetColor()<<endl;
    cout<< fox.GetSex()<<endl;
    return  0;
}

