#include "Isosceles_Triangle.h"


Isosceles_Triangle::Isosceles_Triangle() : Triangle(10, 20, 10, 50, 60, 50, "�������������� �����������") {

   name = "�������������� �����������";
   std::cout << name << " (������� " << a << " " << b << " " << c << "; " << "���� " << A << ", " << B << ", " << C << ") ������\n";

   if (a != c || A != C) {
   
      throw Exception("������. ������� �, � � ���� �, � ������ ���� �����\n");
   };
   
  
};