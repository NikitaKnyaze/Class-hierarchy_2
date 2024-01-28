#include "Triangle.h"

Triangle::Triangle(short a, short b, short c, short A, short B, short C) {
   name = "Треугольник";
   this->a = a; this->b = b; this->c = c; this->A = A; this->B = B; this->C = C;
   if (A + B + C != 180) {
      std::cout << name << " (стороны " << a << " " << b << " " << c << "; " << "углы " << A << ", " << B << ", " << C << ") создан\n";
      throw Exception("Ошибка создания фигуры. Причина: сумма углов не равна 180\n");
   }
}
Triangle::Triangle(short a, short b, short c, short A, short B, short C, const string& name) {
   this->name = name;
   this->a = a; this->b = b; this->c = c; this->A = A; this->B = B; this->C = C;
   if (A + B + C != 180) {
      std::cout << name << " (стороны " << a << " " << b << " " << c << "; " << "углы " << A << ", " << B << ", " << C << ") создан\n";
      throw Exception("Ошибка создания фигуры. Причина: сумма углов не равна 180\n");
   }
}

