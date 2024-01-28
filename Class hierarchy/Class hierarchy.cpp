#include <iostream>
#include <windows.h>

#include "Figure.h"
#include "Triangle.h"
#include "Right_Triangle.h"
#include "Isosceles_Triangle.h"
#include "Equilateral_Triangle.h"
#include "Quadrilaterral.h"
#include "Rectangle_1.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombs.h"

#include "Exception.h"

using std::cout;
using std::cin;
using std::string;



void print_info1(Figure* p) {

   cout << p->get_name() << "\n";
   cout << "Стороны: " << "a=" << p->get_a() << " b=" << p->get_b() << " c=" << p->get_c() << "\n";
   cout << "Углы: " << "A=" << p->get_A() << " B=" << p->get_B() << " C=" << p->get_C() << "\n\n";

}

void print_info2(Figure* p) {

   cout << p->get_name() << "\n";
   cout << "Стороны: " << "a=" << p->get_a() << " b=" << p->get_b() << " c=" << p->get_c()
      << " d=" << p->get_d() << "\n";
   cout << "Углы: " << "A=" << p->get_A() << " B=" << p->get_B() << " C=" << p->get_C()
      << " D=" << p->get_D() << "\n\n";

}

int main()
{
   SetConsoleCP(1251);
   SetConsoleOutputCP(1251);

   try {
      Triangle first_triangle(10, 20, 30, 50, 50, 70);
      print_info1(&first_triangle);
   }
   catch(const Exception& err){
      cout << err.what() << std::endl;
   }
   catch (const std::exception&)   {
       cout << "Something wrong" << std::endl;
   }

   try {
      Right_Triangle second_triangle;
      print_info1(&second_triangle);
   }
   catch (const Exception& err) {
      cout << err.what() << std::endl;
   }
   catch (const std::exception&) {
      cout << "Something wrong" << std::endl;
   }

   try {
      Isosceles_Triangle third_triangle;
      print_info1(&third_triangle);
   }
   catch (const Exception& err) {
      cout << err.what() << std::endl;
   }
   catch (const std::exception&) {
      cout << "Something wrong" << std::endl;
   }

   try {
      Equilateral_Triangle forth_triangle;
      print_info1(&forth_triangle);
   }
   catch (const Exception& err) {
      cout << err.what() << std::endl;
   }
   catch (const std::exception&) {
      cout << "Something wrong" << std::endl;
   }
   
   try {
      Quadrilaterral first_q(10, 20, 30, 40, 50, 60, 70, 80);
      print_info2(&first_q);
   }
   catch (const Exception& err) {
      cout << err.what() << std::endl;
   }
   catch (const std::exception&) {
      cout << "Something wrong" << std::endl;
   }

   try {
      Rectangle_1 second_q;
      print_info2(&second_q);
   }
   catch (const Exception& err) {
      cout << err.what() << std::endl;
   }
   catch (const std::exception&) {
      cout << "Something wrong" << std::endl;
   }

   try {
      Square third_q;
      print_info2(&third_q);
   }
   catch (const Exception& err) {
      cout << err.what() << std::endl;
   }
   catch (const std::exception&) {
      cout << "Something wrong" << std::endl;
   }
   
   try {
      Parallelogram forth_q;
      print_info2(&forth_q);
   }
   catch (const Exception& err) {
      cout << err.what() << std::endl;
   }
   catch (const std::exception&) {
      cout << "Something wrong" << std::endl;
   }
  
   try {
      Rhombs fith_q;
      print_info2(&fith_q);
   }
   catch (const Exception& err) {
      cout << err.what() << std::endl;
   }
   catch (const std::exception&) {
      cout << "Something wrong" << std::endl;
   }
  

   return 0;
}