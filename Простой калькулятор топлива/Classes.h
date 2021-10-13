#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

using namespace std;
class Cars
/**
* Поля класса:
*
* @param r - радиус;
* @param h - высота;
* @param k - расход топлива;
* @param V - объём бака;
* @param S - пробег
*
* Методы класса:
*
* @param Cars - конструктор вызывающий сеттер для установки значений радиуса, высоты и расхода топлива;
* @param set_r_h_k - сеттер для установки выше перечисленных значений;
* @param volume_tank - метод вычисления объёма бака и возвращение его в качестве вещественного числа;
* @param square_tank - метод вычисления пробега и возвращение его в качестве вещественного числа;
* @param print - метод печати объёма и пробега
*/
{
    float r,h,k,V,S; // r - радиус, h - высота, k - расход топлива, V - объём бака, S - пробег
public:
    Cars(int r,int h,int k)
    {
        set_r_h_k(r,h,k);
    }
    void set_r_h_k(int r1,int h1,int k1) // Сеттер для радиуса, высоты и расхода топлива
    {
        r=r1;
        h=h1;
        k=k1;
    }
    float volume_tank()
    {
        V=M_PI*(r*r)*h; // Формула вычисления объёма
        return V;
    }
    float square_tank()
    {
        S=(V/k)*100; // Формула вычисления пробега
        return S;
    }
    void print()
    {
        cout<<"Объём бака равен "<<V<<" литров";
        cout<<endl<<"Пробег равен "<<S<<" км";
    }
};
#endif // CLASSES_H_INCLUDED
