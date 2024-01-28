#include "Right_Triangle.h"


Right_Triangle::Right_Triangle() : Triangle(10, 20, 30, 50, 50, 80, "Прямоугольный треугольник") {
	name = "Прямоугольный треугольник";
	if (C != 90) {
		std::cout << name << " (стороны " << a << " " << b << " " << c << "; " << "углы " << A << ", " << B << ", " << C << ") создан\n";
		throw Exception("Ошибка создания фигуры. Причина: угол C не равен 90\n");
	}
	
};