#include "Quadrilaterral.h"

Quadrilaterral::Quadrilaterral(short a, short b, short c, short d, short A, short B, short C, short D) {

   this->a = a; this->b = b; this->c = c; this->d = d; this->A = A; this->B = B; this->C = C; this->D = D;

   name = "Четырёхугольник";

   if (A+B+C+D != 360) {
      std::cout << name << " (стороны " << a << " " << b << " " << c << "; " << d << "; " << "углы " << A << ", " << B << ", " << C << ", " << D << ") создан\n";

      throw Exception("Ошибка. Сумма всех сторон должна равняться 360\n");
   };
  
};

Quadrilaterral::Quadrilaterral(short a, short b, short c, short d, short A, short B, short C, short D, const string& name) {

   this->a = a; this->b = b; this->c = c; this->d = d; this->A = A; this->B = B; this->C = C; this->D = D;

   this->name = "Четырёхугольник";

   if ((A + B + C + D) != 360) {
      std::cout << name << " (стороны " << a << " " << b << " " << c << " " << d << "; " << "углы " << A << ", " << B << ", " << C << ", " << D << ") создан\n";

      throw Exception("Ошибка. Сумма всех углов должна равняться 360\n");
   };

};
