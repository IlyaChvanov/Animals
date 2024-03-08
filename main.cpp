#include "iostream"
using namespace std;
//top-level const: сам объект - константа
//bot-level const: объект, на который указывает объект - константа
int main()
{
   int i = 0;
   int* const p1 = &i;//p1 нельзя изменить - const верхнего уровня
   const int* p2 = &i;//i нельзя изменить - const нижнего уровня
   const int& r1 = i;
   const int* const p3 = p2;


    return  0;
}

