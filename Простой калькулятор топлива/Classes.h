#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

using namespace std;
class Cars
/**
* ���� ������:
*
* @param r - ������;
* @param h - ������;
* @param k - ������ �������;
* @param V - ����� ����;
* @param S - ������
*
* ������ ������:
*
* @param Cars - ����������� ���������� ������ ��� ��������� �������� �������, ������ � ������� �������;
* @param set_r_h_k - ������ ��� ��������� ���� ������������� ��������;
* @param volume_tank - ����� ���������� ������ ���� � ����������� ��� � �������� ������������� �����;
* @param square_tank - ����� ���������� ������� � ����������� ��� � �������� ������������� �����;
* @param print - ����� ������ ������ � �������
*/
{
    float r,h,k,V,S; // r - ������, h - ������, k - ������ �������, V - ����� ����, S - ������
public:
    Cars(int r,int h,int k)
    {
        set_r_h_k(r,h,k);
    }
    void set_r_h_k(int r1,int h1,int k1) // ������ ��� �������, ������ � ������� �������
    {
        r=r1;
        h=h1;
        k=k1;
    }
    float volume_tank()
    {
        V=M_PI*(r*r)*h; // ������� ���������� ������
        return V;
    }
    float square_tank()
    {
        S=(V/k)*100; // ������� ���������� �������
        return S;
    }
    void print()
    {
        cout<<"����� ���� ����� "<<V<<" ������";
        cout<<endl<<"������ ����� "<<S<<" ��";
    }
};
#endif // CLASSES_H_INCLUDED
