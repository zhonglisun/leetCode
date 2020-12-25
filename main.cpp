#include <QCoreApplication>
#include <iostream>
#include <vector>

#include "solution.h"

//using namespace  std;

int main(int argc, char *argv[])
{
   QCoreApplication a(argc, argv);
   vector<int> numbers, result;
   numbers.push_back(-2);
   numbers.push_back(-7);
   numbers.push_back(-11);
   numbers.push_back(-15);
   Solution solutions;
   result = solutions.twoSum(numbers, -9);
   solutions.reverse(-88807);
   solutions.reverse(-8887);
   solutions.reverse(-887);
   solutions.reverse(1534236469);
   solutions.reverse(342348);
   return a.exec();
}
