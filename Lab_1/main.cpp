/*
* ������ୠ� ࠡ�� �1
* ��⠭���� � �������⢮ � �।�� ࠧࠡ�⪨ Qt Creator
* ��᫥������� �������ਥ� C++ � IDE Qt Creator
*
* Developer: ��᪮�类� ����ᥩ
*/


#include <iostream> //������砥� ������⥪� �����-�뢮��
#include <iomanip> //������砥� ������⥪� ��������஢
using namespace std; //������砥� ����࠭�⢮ ���� �⠭���⭮� ������⥪� STL

int main()
{

//������� 1
#if 0
����� ��㯯� 318, 䠪���� ���
���ࠡ��稪�: 1.��᪮�类� ����ᥩ
����� ������୮� ࠡ��� 1
#endif

//������� 2
    cout << setw(70) << "*****                    �����                    *****\n\n" << endl;
    cout << setw(90) << "�������: ���. ��ࠧ������" << endl;
    cout << setw(57) << "��㯯�: 318" << endl;
    cout << setw(94) << "��㤥��: ��᪮�类� ����ᥩ\n" << endl;
    cout << setw(49) << "���� 2025\n" << endl;
    //������ 䠩�� Lab_1 debug: 65kb, release: 52kb

//������� 3
  // ����� �1
    float DistanceMovements, TimeMovements, SpeedMovements;
    cout << "���᫥��� ᪮��� ��אַ��������� ��������: \n";
    cout << "������ ����ﭨ� (� �����) - ";
    cin >> DistanceMovements;
    cout << "������ �६� (� ᥪ㭤��) - ";
    cin >> TimeMovements;
    SpeedMovements = DistanceMovements / TimeMovements;
    cout << "������� (�/�) = " << fixed << setprecision(2) << SpeedMovements << endl << endl;
  // ����� �2
    float StartAcceleration, EndAcceleration, TimeAcceleration, Acceleration;
    cout << "���᫥��� �᪮७��: \n";
    cout << "������ ��砫��� ᪮���� (�/�) - ";
    cin >> StartAcceleration;
    cout << "������ ������� ᪮���� (�/�) - ";
    cin >> EndAcceleration;
    cout << "������ �६� (� ᥪ㭤��) - ";
    cin >> TimeAcceleration;
    Acceleration = (EndAcceleration - StartAcceleration) / TimeAcceleration;
    cout << "�᪮७�� = " << fixed << setprecision(2) << Acceleration << endl << endl;
  // ����� �3
    float LenghtCircle;
    double RadiusCircle;
    const double Pi = 3.141592653589793;
    cout << "���᫥��� ࠤ��� ��㣠: \n";
    cout << "������ ����� ���㦭��� - ";
    cin >> LenghtCircle;
    RadiusCircle = LenghtCircle / (2*Pi);
    cout << " = " << fixed << setprecision(4) << RadiusCircle << endl << endl;
    return 0;
}


