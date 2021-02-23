#include "first.cpp"

#ifndef FIRST_ONE
#define FIRST_ONE

bool welcome_message(int);
double number();
char symbol();
void printResult(double,char,double);

namespace constants
{
    constexpr double gravity { 9.8 };   
}

double distance_fallen(double,double,int,int);

#endif // end FIRST_ONE
