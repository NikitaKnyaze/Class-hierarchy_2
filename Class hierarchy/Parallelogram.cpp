#include "Parallelogram.h"

Parallelogram :: Parallelogram() : Quadrilaterral(20, 30, 20, 30, 30, 40, 30, 40, "��������������") {
   name = "��������������";

   if (a != c || d != b || A != C || B != D) {
      std::cout << name << " (������� " << a << " " << b << " " << c << " " << d << "; " << "���� " << A << ", " << B << ", " << C << ", " << D << ") ������\n";

      throw Exception("������� � � �, b � d ������ ���� �����, ���� � � �, � � D ������ ���� �����\n");
   };
};