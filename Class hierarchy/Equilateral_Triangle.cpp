#include "Equilateral_Triangle.h"


Equilateral_Triangle :: Equilateral_Triangle() : Triangle(30, 30, 30, 60, 60, 60, "�������������� �����������") {
   name = "�������������� �����������";
   if (a != c || a!=b || A!=60 || A != C && A!=B) {
      std::cout << name << " (������� " << a << " " << b << " " << c << "; " << "���� " << A << ", " << B << ", " << C << ") ������\n";

      throw Exception("������. ��� ������� ������ ���� �����, ��� ���� ������ ���� ����� 60\n");
   };
      
};