#include "Parallelogram.h"

Parallelogram :: Parallelogram() : Quadrilaterral(20, 30, 20, 30, 30, 40, 30, 40, "Параллелограмм") {
   name = "Параллелограмм";

   if (a != c || d != b || A != C || B != D) {
      std::cout << name << " (стороны " << a << " " << b << " " << c << " " << d << "; " << "углы " << A << ", " << B << ", " << C << ", " << D << ") создан\n";

      throw Exception("Стороны а и с, b и d должны быть равны, углы А и С, В и D должны быть равны\n");
   };
};