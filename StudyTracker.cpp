#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <limits>
#include "ToDo.hpp"
#include <fstream>
#include <filesystem>

using namespace std;

void menu() 
{
    cout << "[1] View task list \n";
    cout << "[2] View pending tasks \n";
    cout << "[3] View completed tasks \n";
    cout << "[4] View completed tasks \n";
}

int obtainOption()
{
    int option;
    cout << "Insert you option: ";
    cin >> option;

    if (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    return option;
}

void viewAllTasks()
{

}

void viewPendingTasks()
{

}

void viewCompletedTasks()
{

}

int main()
{
   menu ();
   int optionSelected = obtainOption();

   while (optionSelected != 4)
   {
        switch (optionSelected)
        {
        case 1:
             viewAllTasks();
            break;

        case 2:
             viewPendingTasks();
            break;
        
        case 3:
             viewCompletedTasks();
            break;
        
        
        default:
             cout << "Invalid input. Please insert a valid option. \n";
            break;
        }

    menu ();
    optionSelected = obtainOption();

   }

   cout << "Saving data... \n";
   cout << "Till your next study session!\n";
   return 0;
   
}