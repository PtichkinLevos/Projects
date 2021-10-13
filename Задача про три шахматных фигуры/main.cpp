#include <iostream>
#include <cmath>

using namespace std;

/**
 * @mainpage ������� ��������
**/
void help()
/**
 * @brief ������� ������ �� ����� ������ ����
**/
{
    cout<<"���������� �������� �� ������� : ������, �����, ����"<<endl;
    cout<<"������� ����� ���������:"<<endl;
    cout<<"1) ���� ���������� � ����� �� ������ A,B,C,D,E,F,G,H"<<endl;
    cout<<"2) ����� ����� �������� ����� �� 1 �� 8"<<endl;
    cout<<"����� ����� ���������� ���������� ������ Enter ��� ����� ��������� ����������"<<endl;
    cout<<"���������� ����� �� ������ ���������"<<endl;
}
void errors_coord(int x)
/**
 * @brief ������� ������ ������
 * @param x � ����� ������
**/
{
    if(x==1)
    {
        cout<<"���������� �� ������, ���������� ������ � ������ ��� ���������� �������: /help"<<endl;
    }
    if(x==2)
    {
        cout<<"���������� ���������� ������ � �����, ������� ������� ���������� ����� ������: "<<endl;
    }
    if(x==3)
    {
        cout<<"���������� ���������� ������ � �����, ������� ���������� ����� ������: "<<endl;
    }
    if(x==4)
    {
        cout<<"���������� ���������� ����� � �����, ������� ���������� ����� ������: "<<endl;
    }
}
int translate_y(char y) //������� �������������� c������ � ����� �����, ��� � - ����� �������
/**
 * @brief ������� �������������� c������ � ����� �����
 * @param � - ����� �������
**/
{
    if(y=='1')
    {
        return 1;
    }
    if (y=='2')
    {
        return 2;
    }
    if (y=='3')
    {
        return 3;
    }
    if (y=='4')
    {
        return 4;
    }
    if (y=='5')
    {
        return 5;
    }
    if (y=='6')
    {
        return 6;
    }
    if (y=='7')
    {
        return 7;
    }
    if (y=='8')
    {
        return 8;
    }
}
int translate_x(char x)
/**
 * @brief ������� �������������� c������ � ����� �����
 * @param x - ����� ������
**/
{
    if(x=='A')
    {
        return 1;
    }
    if (x=='B')
    {
        return 2;
    }
    if (x=='C')
    {
        return 3;
    }
    if (x=='D')
    {
        return 4;
    }
    if (x=='E')
    {
        return 5;
    }
    if (x=='F')
    {
        return 6;
    }
    if (x=='G')
    {
        return 7;
    }
    if (x=='H')
    {
        return 8;
    }
}
int check_x(char x)
/**
 * @brief ������� �������� �������� ������� � �� ������������ � ��������� ���� � ���������� �������������� � �������� ��������
 * @param x - ����� ������
**/
{
    if(x=='A'||
            x=='B'||
            x=='C'||
            x=='D'||
            x=='E'||
            x=='F'||
            x=='G'||
            x=='H')
    {
        return translate_x(x);
    }
    else
    {
        /**@return return -1; @n
         *         � ������ �������������� �������
        **/
        return -1;
    }
}
int check_y(char y)
/**
 * @brief ������� �������� �������� ������� y �� ������������ � ��������� ���� � ���������� �������������� � �������� ��������
 * @param y - ����� �������
**/
{
    if(y=='1'||
            y=='2'||
            y=='3'||
            y=='4'||
            y=='5'||
            y=='6'||
            y=='7'||
            y=='8')
    {
        return translate_y(y);
    }
    else
    {
        /**@return return -1; @n � ������ �������������� �������
        **/
        return -1;
    }
}
void input_coord(int &Kx,int &Ky,int &Lx,int &Ly,int &Sx,int &Sy,string &main_string)
/**
 * @brief ������� ����� ��������� ��� �����, � ��������� ������������ ��������� � ����������� ����� �����
 * @param k - �������, ������������ ���� ��� �����
 * @param Kx,Ky - ���������� ������
 * @param Lx,Ly - ���������� �����
 * @param Sx,Sy - ���������� �����
 * @param main_string - ������ ����� ���������� ���� ������� /help
**/
{
    for(int k=0; k!=3; k++)
    {
        cin>>main_string;
        if(main_string=="/help")
        {
            help(); //����� ������� �������
            k--; //����� �� ������ ����� ����� � ������� �������� � �����
            continue;
        }
        if(k==0)
        {
            Kx=check_x(main_string[0]); //�������� ������� �� x � �������������� � � �����
            Ky=check_y(main_string[1]); //�������� ������� �� y � �������������� � � �����
        }
        if(Kx==(-1)||Ky==(-1)||main_string.length()>2) //�������� �� ������ �������������� �������� ���������� ��������
        {
            errors_coord(1); //����� ������� ������, ��� 1 - ������ �������� ����������
            k--;
            continue;
        }
        if(k==1)
        {
            Lx=check_x(main_string[0]);
            Ly=check_y(main_string[1]);
            if(Lx==(-1)||Ly==(-1)||main_string.length()>2)
            {
                errors_coord(1);
                k--;
                continue;
            }
            if(Kx==Lx&&Ky==Ly) //�������� �� ������ ��������� ���������� ������ � �����
            {
                errors_coord(2); //����� ������� ������, ��� 2 - ������ ��������� ���������� ����� � ������
                k--;
                continue;
            }
        }
        if(k==2)
        {
            Sx=check_x(main_string[0]);
            Sy=check_y(main_string[1]);
            if(Sx==(-1)||Sy==(-1)||main_string.length()>2)
            {
                errors_coord(1);
                k--;
                continue;
            }
            if(Kx==Sx&&Ky==Sy)
            {
                errors_coord(3); //����� ������� ������, ��� 3 - ������ ��������� ���������� ����� � ������
                k--;
                continue;
            }
            if(Lx==Sx&&Ly==Sy)
            {
                errors_coord(4); //����� ������� ������, ��� 4 - ������ ��������� ���������� ����� � �����
                k--;
                continue;
            }
        }
    }
}
bool danger_ladya(int &Kx,int &Ky,int &Lx,int &Ly,int &Sx,int &Sy)
/**
 * @brief ������� ����������� ��������� ��� ������ �� ������� �����
 * @param Kx,Ky - ���������� ������
 * @param Lx,Ly - ���������� �����
 * @param Sx,Sy - ���������� �����
**/
{
    if(Kx==Lx||Ky==Ly) //������� ��������� ��������� ����� � ������ �� x, ���� �� �
    {
        if(Sx==Kx||Sy==Ky) //������� ��������� ��������� ����� � ������ �� x, ���� �� �
        {
            if((sqrt(pow(Kx-Lx,2)+pow(Ky-Ly,2)))<(sqrt(pow(Kx-Sx,2)+pow(Ky-Sy,2))))
            //������� �������� ���������� ����� ������ � ������, ������ � ������
            {
                return 1;
            }
            if((Sx<Kx&&Lx>Kx)||(Sx>Kx&&Lx<Kx)||(Sy>Ky&&Ly<Ky)||(Sy<Ky&&Ly>Ky))
            //������� �������� ����������������� ���� ���������
            {
                return 1;
            }
            return 0;
        }
        else
        {
            return 1;
        }
    }
    return 0;
}
bool func_sing(int &Kx,int &Ky,int &Lx,int &Ly,int &Sx,int &Sy)
/**
 * @brief ������� ����������� ��������� ����� � ����� ������������ ������ � ����� �������� ��� � ������
 * @param Kx,Ky - ���������� ������
 * @param Lx,Ly - ���������� �����
 * @param Sx,Sy - ���������� �����
**/
{
    if(Sx>Kx&&Sy>Ky&&Lx>Kx&&Ly>Ky) //������� �������� ��������� ����� � ����� � 1 ��������
    {
        return 1;
    }
    if(Sx<Kx&&Sy>Ky&&Lx<Kx&&Ly>Ky) //������� �������� ��������� ����� � ����� � 2 ��������
    {
        return 1;
    }
    if(Sx<Kx&&Sy<Ky&&Lx<Kx&&Ly<Ky) //������� �������� ��������� ����� � ����� � 3 ��������
    {
        return 1;
    }
    if(Sx>Kx&&Sy<Ky&&Lx>Kx&&Ly<Ky) //������� �������� ��������� ����� � ����� � 4 ��������
    {
        return 1;
    }
    return 0;
}
bool danger_slon(int &Kx,int &Ky,int &Lx,int &Ly,int &Sx,int &Sy)
/**
 * @brief ������� ����������� ��������� ��� ������ �� ������� �����
 * @param Kx,Ky - ���������� ������
 * @param Lx,Ly - ���������� �����
 * @param Sx,Sy - ���������� �����
**/
{
    if(func_sing(Kx,Ky,Lx,Ly,Sx,Sy)) //������� ��������� ����� � ����� � ����� ��������
    {
        if(abs(Sx-Kx)==abs(Sy-Ky)) //������� ��������� ����� � ������ �� ����� ���������
        {
            if(abs(Sx-Lx)==abs(Sy-Ly)) //������� ��������� ����� � ����� �� ����� ���������
            {
                if(sqrt(pow(Sx-Kx,2)+pow(Sy-Ky,2))<sqrt(pow(Lx-Kx,2)+pow(Ly-Ky,2)))
                //������� �������� ���������� ����� ������ � ������, ������ � ������
                {
                    return 1;
                }
            }
            else
            {
                return 1;
            }
        }
        return 0;
    }
    if(abs(Sx-Kx)==abs(Sy-Ky)) //������� ��������� ����� � ������ �� ����� ���������
    {
        return 1;
    }
    return 0;
}
void result_output(bool &DL,bool &DS)
/**
 * @brief ������� ������ ��������� ���������� ������������ ������
 * @param DL � ��������� �� �����
 * @param DS � ��������� �� �����
**/
{
    if(DL==1)
    {
        cout<<"���������: ";
        cout<<"��� �� �����"<<endl;
    }
    if(DS==1)
    {
        cout<<"���������: ";
        cout<<"��� �� �����"<<endl;
    }
    if(DS==0&&DL==0)
    {
        cout<<"���������: ";
        cout<<"��� ����"<<endl;
    }
}
int main()
{
    setlocale(LC_ALL,"RUSSIAN");
    /**
     * <b>����������� ���������� � ���������:</b>
     * @code int Kx,Ky,Lx,Ly,Sx,Sy; @endcode
     * Kx,Ky - ���������� ������, Lx,Ly - ���������� �����, Sx,Sy - ���������� �����
     * @code bool DL,DS; @endcode
     * ��������� �� �����, DS - ��������� �� �����
     * @code string main_string; @endcode
     * ������ ����� ��������� @n
     * <b>����� �������:</b>
     * @code
     *  input_coord(Kx,Ky,Lx,Ly,Sx,Sy,main_string);
     *  DL=danger_ladya(Kx,Ky,Lx,Ly,Sx,Sy);
     *  DS=danger_slon(Kx,Ky,Lx,Ly,Sx,Sy);
     *  result_output(DL,DS);
     * @endcode
    **/
    int Kx,Ky,Lx,Ly,Sx,Sy; //Kx,Ky - ���������� ������, Lx,Ly - ���������� �����, Sx,Sy - ���������� �����
    bool DL,DS; //DL - ��������� �� �����, DS - ��������� �� �����
    string main_string; //������ ����� ���������
    input_coord(Kx,Ky,Lx,Ly,Sx,Sy,main_string); //������� ����� ��������
	DL=danger_ladya(Kx,Ky,Lx,Ly,Sx,Sy); //������������ DL ��������� ������ ������� ����������� ��������� ��� ������ �� �����
    DS=danger_slon(Kx,Ky,Lx,Ly,Sx,Sy); //������������ DS ��������� ������ ������� ����������� ��������� ��� ������ �� �����
    result_output(DL,DS); //������� ������ ��������� ���������� ������������ ������
    system("pause");
    return 0;
}
