#include <iostream>
#include <cmath>

bool welcome_message(int x)
{
    if(x == true)
    {
        std::cout << " \"Bible is significant part of my life.\" " << '\n' << std::endl;
    }
    else;
    return false; 
}

double number()
{
    std::cout << "Enter a double value: ";
    double x{};
    std::cin >> x;

    return x;
}

char symbol()
{   
    std::cout << "Enter one of the following: +, -, *, /: ";
    char z{};
    std::cin >> z;

    return z;
}

void printResult(double x, char operation, double y)
{
    if(operation == '+')
        {
            std::cout << x << " + " << y << " is " << x + y << '\n' << std::endl;
        }
        else if(operation == '-')
        {
            std::cout << x << " - " << y << " is " << x - y << '\n' << std::endl;
        }
        else if(operation == '*')
        {
            std::cout << x << " * " << y << " is " << x * y << '\n' << std::endl;
        }
        else if(operation == '/')
        {
            std::cout << x << " / " << y << " is " << x / y << '\n' << std::endl;
        }
}

double distance_fallen(double m, double x, int y, int z)
{   
    return m-(x*y/z);
}