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
    cout << "[4] Close app \n";
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
    string filePath;

    cout << "Please type the file path (ex: C:\\study_tracker\\studytracker.txt):\n)";
    cin.ignore();
    getline(cin, filePath);

    filesystem::path path(filePath);
    filesystem::path directory = path.parent_path();

    if(!filesystem::exists(directory))
    {
        cout << "Error: the directory informed does not exist. Please verify the path. \n";
        return;
    }

    fstream myFile;

    myFile.open(filePath, ios::app);

    if(myFile.is_open())
    {
        // Fzr dps leitura com JSON
    }
    else
    {
        cout << "Error oppening file. Please verify the path provided.\n";
        return;
    }

    cout << "Would you like to add a new task? [Y/N]";
    string newTask;
    cin >> newTask;

    if (newTask == "Y" || "y" || "yes")
    {
        createNewTask();
    }
    else
    {
        return;
    }
    
}

void createNewTask()
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