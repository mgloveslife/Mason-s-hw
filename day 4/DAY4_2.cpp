//
// Created by 10373 on 2022/12/23.
//
#include <iostream>

 int main()
 {
// create a type definition
 typedef unsigned short USHORT;

 // set up width and length
 USHORT width = 26;
 USHORT length = 40;
 USHORT height=7;
 // create an unsigned short initialized with the
 // result of multiplying width by length
 USHORT area = width * length * height;

 std::cout << "Width: " << width << "\n";
 std::cout << "Length: " << length << "\n";
     std::cout << "Height: " << height << "\n";
 std::cout << "Area: " << area << "\n";
 return 0;
 }