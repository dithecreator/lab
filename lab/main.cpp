//
//  main.cpp
//  lab
//
//  Created by Дима on 10.10.23.
//

#include <iostream>

#include "Exception.hpp"
#include "DivideByZero.hpp"
#include "IndexException.hpp"
using namespace std;

int main()
{
   
    double numerator = 0.0;
    double denominator = 0.0;

    try
    {
        cout << "Enter a numerator: ";
        cin >> numerator;

        cout << "Enter a denominator: ";
        cin >> denominator;

        if (denominator == 0.0)
            throw DivideByZero("Divide by zero");

        cout << "Result = " << numerator / denominator << endl;


        int mas[3]{ 1, 2, 3 };

        for (int i = 0; i < 5; i++)
        {
            if (i <= 3)
            {
                throw IndexException("No index");    //исключение типа IndexException
            }
            cout << mas[i] << endl;
        }
        cout << endl;
    }
    catch (DivideByZero exception)
    {
        cout << exception.GetMessage() << endl;
    }
    catch (IndexException exception)
    {
        cout << exception.GetMessage() << endl;
    }

}
