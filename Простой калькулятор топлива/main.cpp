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
        cout<<"������� ������ � ������: ";
        cin>>r;
        if(r<0||r==0)
            cout<<"������ ������� �� ����� ���� ����� ��� ��� !"<<endl;
    }
    while(r<0||r==0);
    do
    {
        cout<<"������� ������ � ������: ";
        cin>>h;
        if(h<0||h==0)
            cout<<"����� ������ �� ����� ���� ����� ��� ��� !"<<endl;
    }
    while(h<0||h==0);
    do
    {
        cout<<"������� ������ ������� �� 100 �� � ������: ";
        cin>>k;
        if(k<0||k==0)
            cout<<"������ ������� ������� �� ����� ���� ����� ��� ��� !"<<endl;
    }
    while(k<0||k==0);
    /** ������� �����, ������ � ������� �� �� ������. */
    Cars car1(r,h,k); //���������� ������ � ��������� ������������� �����������
    car1.volume_tank(); // ������� �����
    car1.square_tank(); // ������� ������
    car1.print(); // ������� �� ����� ����� � ������
    return 0;
}

