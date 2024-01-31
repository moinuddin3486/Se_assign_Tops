/*
7. Write a C++ program to implement a class called Date that has private
member variables for day, month, and year. Include member functions to
set and get these variables, as well as to validate if the date is valid*/


#include <iostream>
using namespace std;
class valid
{
    int day, month, year;

public:
    void getdata(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
    }
    void chek()
    {
        if (day < 32)
        {
            if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
            {
                if (day < 32)
                {
                    cout << "Date is valid:";
                }
                else
                {
                    cout << "Invalid day:";
                }
            }
            else if (month == 4 || month == 6 || month == 9 || month == 11)
            {
                if (day <= 30)
                {
                    cout << "Date is valid :";
                }
                else
                {
                    cout << "Invalid day";
                }
            }
            else if (month == 2)
            {
                if (year % 4 == 0)
                {
                    if (month == 2)
                    {
                        if (day <= 29)
                        {
                            cout << "Valid date : Leap year";
                        }
                        else
                        {
                            cout << "Invalid day";
                        }
                    }
                    else
                    {
                        cout << "Invalid month";
                    }
                }

                else if (year % 4 != 0)
                {
                    if (month == 2)
                    {
                        if (day <= 28 )
                        {
                            cout << "Valid date";
                        }
                        else
                        {
                            cout << "Invalid day";
                        }
                    }
                    else
                    {
                        cout << "Invalid day";
                    }
                }
                else
                {
                    cout << "Invalid year";
                }
            }

            else
            {
                cout << "Envalid month:";
            }
        }
        else
        {
            cout << "Invalid day";
        }
    }
};
int main()
{
    valid v1;
    v1.getdata(28, 2, 2022);
    v1.chek();
}