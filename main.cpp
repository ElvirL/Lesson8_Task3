/*
������� 3. ���������� �������
��� ����� �������
�� ������ ������� ������ �� ������������ ������� ���������� ������� ��� �����. �� ������, ��� ����� ����� ��������� ������ �� �������� 
5 �� � ������� �� ��������� ����, ������ ������� � ������ ������ ���� ����������, ����� ������� �� ��� ���� ������� ���. 
��� ������������ ������� � ��� � ���������� ��������� ���������� ������ � ����� ������������� ���������������� ����� ��������.

��� ����������� ������-��������� �������� ���������, ������� �� �������� �������� ��������� ������ ����������, ������� ������� 
�� ���� ����� ����������, ����� �� �� ��� ��������� ����� ��� ������� � ���� �����, �� ������������ ����� ������� � ���� ������. 
��� ������ ������ ���� �� �������� ������ ��� ������������� ����. ������� ������ � ������������ �����. ���������� �������� �����.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    setlocale(LC_ALL,"Russian");
    float x,y,z;
    cout << "������� ������� ������:" << endl;
    cout << "X: ";
    cin >> x;
    cout << "Y: ";
    cin >> y;
    cout << "Z: ";
    cin >> z;

    if (x < 5 || y < 5 || z < 5){
        cout << "����������� ������ ������ ������ ���� 5x5x5 ��.";
    } else {
        int count_cubes;
        count_cubes = (int)(x/5) * (int)(y/5) * (int)(z/5);
        

        cout << "�����:" << endl;
        cout << "�� ����� ������ ����� ���������� " << count_cubes << " �������." << endl;
        cout << "�� ��� ����� ��������� ����� �� " << pow((int)cbrt(count_cubes),3) <<" �������." << endl;

    }

}