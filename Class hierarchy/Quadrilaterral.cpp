#include "Quadrilaterral.h"

Quadrilaterral::Quadrilaterral(short a, short b, short c, short d, short A, short B, short C, short D) {

   this->a = a; this->b = b; this->c = c; this->d = d; this->A = A; this->B = B; this->C = C; this->D = D;

   name = "��������������";

   if (A+B+C+D != 360) {
      std::cout << name << " (������� " << a << " " << b << " " << c << "; " << d << "; " << "���� " << A << ", " << B << ", " << C << ", " << D << ") ������\n";

      throw Exception("������. ����� ���� ������ ������ ��������� 360\n");
   };
  
};

Quadrilaterral::Quadrilaterral(short a, short b, short c, short d, short A, short B, short C, short D, const string& name) {

   this->a = a; this->b = b; this->c = c; this->d = d; this->A = A; this->B = B; this->C = C; this->D = D;

   this->name = "��������������";

   if ((A + B + C + D) != 360) {
      std::cout << name << " (������� " << a << " " << b << " " << c << " " << d << "; " << "���� " << A << ", " << B << ", " << C << ", " << D << ") ������\n";

      throw Exception("������. ����� ���� ����� ������ ��������� 360\n");
   };

};
