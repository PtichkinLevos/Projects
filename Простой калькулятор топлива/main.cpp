#include <iostream>
#include <cmath>
#include "Classes.h"

using namespace std;

int main()
{
    setlocale(LC_ALL,"Russian");
    float r,h,k;
    do
    {
        cout<<"Введите радиус в метрах: ";
        cin>>r;
        if(r<0||r==0)
            cout<<"Такого радиуса не может быть введи ещё раз !"<<endl;
    }
    while(r<0||r==0);
    do
    {
        cout<<"Введите высоту в метрах: ";
        cin>>h;
        if(h<0||h==0)
            cout<<"Такой высоты не может быть введи ещё раз !"<<endl;
    }
    while(h<0||h==0);
    do
    {
        cout<<"Введите расход топлива на 100 км в литрах: ";
        cin>>k;
        if(k<0||k==0)
            cout<<"Такого расхода топлива не может быть введи ещё раз !"<<endl;
    }
    while(k<0||k==0);
    /** Находим объём, пробег и выводим всё на печать. */
    Cars car1(r,h,k); //Объёявляем объект с заданными пользователем параметрами
    car1.volume_tank(); // Находим объём
    car1.square_tank(); // Назодим пробег
    car1.print(); // Выводим на экран объём и пробег
    return 0;
}

