#include "Equilateral_Triangle.h"


Equilateral_Triangle :: Equilateral_Triangle() : Triangle(30, 30, 30, 60, 60, 60, "Равносторонний треугольник") {
   name = "Равносторонний треугольник";
   if (a != c || a!=b || A!=60 || A != C && A!=B) {
      std::cout << name << " (стороны " << a << " " << b << " " << c << "; " << "углы " << A << ", " << B << ", " << C << ") создан\n";

      throw Exception("ОШИБКА. Все стороны должны быть равны, все углы должны быть равны 60\n");
   };
      
};