#include "Isosceles_Triangle.h"


Isosceles_Triangle::Isosceles_Triangle() : Triangle(10, 20, 10, 50, 60, 50, "Равнобедренный треугольник") {

   name = "Равнобедренный треугольник";
   std::cout << name << " (стороны " << a << " " << b << " " << c << "; " << "углы " << A << ", " << B << ", " << C << ") создан\n";

   if (a != c || A != C) {
   
      throw Exception("ОШИБКА. Стороны а, с и углы А, С должны быть равны\n");
   };
   
  
};