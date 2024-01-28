#include "Triangle.h"

Triangle::Triangle(short a, short b, short c, short A, short B, short C) {
   name = "�����������";
   this->a = a; this->b = b; this->c = c; this->A = A; this->B = B; this->C = C;
   if (A + B + C != 180) {
      std::cout << name << " (������� " << a << " " << b << " " << c << "; " << "���� " << A << ", " << B << ", " << C << ") ������\n";
      throw Exception("������ �������� ������. �������: ����� ����� �� ����� 180\n");
   }
}
Triangle::Triangle(short a, short b, short c, short A, short B, short C, const string& name) {
   this->name = name;
   this->a = a; this->b = b; this->c = c; this->A = A; this->B = B; this->C = C;
   if (A + B + C != 180) {
      std::cout << name << " (������� " << a << " " << b << " " << c << "; " << "���� " << A << ", " << B << ", " << C << ") ������\n";
      throw Exception("������ �������� ������. �������: ����� ����� �� ����� 180\n");
   }
}

