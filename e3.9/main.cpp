/*
 •• E3.9
 A compass needle points a given number of degrees away from North, measured clockwise. Write a program that reads the angle and prints out the nearest compass direction; one of N, NE, E, SE, S, SW, W, NW. In the case of a tie, prefer the nearest principal direction (N, E, S, or W).
 */

#include <iostream>

using namespace std;

int main()
{
    cout << "enter degree: ";
    float degree;
    cin >> degree;
    
    if (degree > 90 && degree < 180)
    {
        cout << "NW";
    }
    else if (degree > 180 && degree < 270)
    {
        cout << "SW";
    }
    else if (degree > 270 && degree < 360)
    {
        cout << "SE";
    }
    else if (degree > 0 && degree < 90)
    {
        cout << "NE";
    }
    else if (degree == 0 || degree == 360)
    {
        cout << "E";
    }
    else if (degree == 90)
    {
        cout << "N";
    }
    else if (degree == 180)
    {
        cout << "W";
    }
    else if (degree == 270)
    {
        cout << "S";
    }
    cout << endl;
}
