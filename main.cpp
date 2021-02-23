#include <iostream>
#include "first.h"

using namespace std;

int main()
{
    welcome_message(1);

    /*
    Question #3

    Write the following program: The user is asked to enter 2 floating point numbers (use doubles). 
    The user is then asked to enter one of the following mathematical symbols: +, -, *, or /. 
    The program computes the answer on the two numbers the user entered and prints the results. 
    If the user enters an invalid symbol, the program should print nothing.

    Example of program:

    Enter a double value: 6.2
    Enter a double value: 5
    Enter one of the following: +, -, *, or /: *
    6.2 * 5 is 31
    */

    double x{ number() };
    double y{ number() };
    char operation{ symbol() };

    printResult(x, operation, y);

    /*
    Question #4

    Write a short program to simulate a ball being dropped off of a tower. To start, the user 
    should be asked for the height of the tower in meters. Assume normal gravity (9.8 m/s2), and 
    that the ball has no initial velocity (the ball is not moving to start). Have the program output 
    the height of the ball above the ground after 0, 1, 2, 3, 4, and 5 seconds. The ball should not go
    underneath the ground (height 0).
    

    Your program should include a header file named constants.h that contains a symbolic constant to 
    hold the value of gravity (9.8).

    Use a function to calculate the height of the ball after x seconds. The function can calculate how 
    far the ball has fallen after x seconds using the following formula: 
    distance fallen = gravity_constant * x_seconds2 / 2

    Sample output:

    Enter the height of the tower in meters: 100
    At 0 seconds, the ball is at height: 100 meters
    At 1 seconds, the ball is at height: 95.1 meters
    At 2 seconds, the ball is at height: 80.4 meters
    At 3 seconds, the ball is at height: 55.9 meters
    At 4 seconds, the ball is at height: 21.6 meters
    At 5 seconds, the ball is on the ground.

    Note: Depending on the height of the tower, the ball may not reach the ground in 
    5 seconds -- that’s okay. We’ll improve this program once we’ve covered loops.
    Note: The ^ symbol isn’t an exponent in C++. Implement the formula using multiplication 
    instead of exponentiation.
    Note: Remember to use double literals for doubles, eg. 2.0 rather than 2.
    */

    
    cout << "Enter the height of the tower in meters: ";
    double meters{};
    cin >> meters;
    
    int zero_sec=pow(0,2);
    int one_sec=pow(1,2);
    int two_sec=pow(2,2);
    int three_sec=pow(3,2);
    int four_sec=pow(4,2);
    int five_sec=pow(5,2);

    if( distance_fallen(meters, constants::gravity, zero_sec, 2) <= 0 )
    {
        cout << "At 0 seconds, the ball is on the ground." << '\n' << endl;
    }
    else
    {
        cout << "At 0 seconds, the ball is at height: " << distance_fallen(meters, constants::gravity, zero_sec, 2) << " meters" << '\n';

            if( distance_fallen(meters, constants::gravity, one_sec, 2) <= 0 )
            {
                cout << "At 1 seconds, the ball is on the ground." << '\n' << endl;
            }
            else
            {
                 cout << "At 1 seconds, the ball is at height: " << distance_fallen(meters, constants::gravity, one_sec, 2) << " meters" << '\n';

                 	if( distance_fallen(meters, constants::gravity, two_sec, 2) <= 0 )
                	{
                		cout << "At 2 seconds, the ball is on the ground." << '\n' << endl;
           			}
            		else
            		{
                 		cout << "At 2 seconds, the ball is at height: " << distance_fallen(meters, constants::gravity, two_sec, 2) << " meters" << '\n';

							if( distance_fallen(meters, constants::gravity, three_sec, 2) <= 0 )
                			{
                				cout << "At 3 seconds, the ball is on the ground." << '\n' << endl;
           					}
            				else
            				{
                 				cout << "At 3 seconds, the ball is at height: " << distance_fallen(meters, constants::gravity, three_sec, 2) << " meters" << '\n';
							
									if( distance_fallen(meters, constants::gravity, four_sec, 2) <= 0 )
                					{
                						cout << "At 4 seconds, the ball is on the ground." << '\n' << endl;
           							}
            						else
            						{
                 						cout << "At 4 seconds, the ball is at height: " << distance_fallen(meters, constants::gravity, four_sec, 2) << " meters" << '\n';
									
											if( distance_fallen(meters, constants::gravity, five_sec, 2) <= 0 )
                							{
                								cout << "At 5 seconds, the ball is on the ground." << '\n' << endl;
           									}
            								else
            								{
                 								cout << "At 5 seconds, the ball is at height: " << distance_fallen(meters, constants::gravity, five_sec, 2) << " meters" << '\n';
											}
									}
							}
					}
            }
    }
    

    return 0;
}