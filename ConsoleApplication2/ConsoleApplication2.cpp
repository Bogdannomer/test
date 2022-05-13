// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
#include <iostream>
#include "Header.h"
#include <windows.h> 





using namespace std;
stract ToDoItem

int id 
ToDoItem*AddStruct(ToDoItem* obj, const int amount)
{
    string due_data;
    string description;
}; {
    obj = new ToDoItem[amount + 1];
}
else
{
ToDoItem* tempObj = new ToDoItem[amount + 1];
}
for(int i=0;i<amount;i++)
{
    std::cout << "To do item number :" << Obj[i].id << endl;
    std::cout << "Name:" << Obj[i].name << endl;
    std::cout << "Due date: " << Obj[i].due_date << endl;
    std::cout << "Desription" << Obj[i].description << endl;
    std::cout << "-----------------------------------------/n";


}



void menu(TodoItem* Obr,int& amount)
{
    int choice;
    bool yesOrNo
        while (true)
        {
            cout << "MENU";
            << "|0-show the list   |\n"
                << "|1 -add to do item|\n"
                << "|2 -delete to do item|\n"
                << "|3 -edit to do item|\n"
                << "|4 -clear to do list|\n"
                << "---------------------\n"

                cout << "|--->";
            cin >> choice;
            switch (menu)
            {
            case 0:

                show the list();


            case 1:
                add to do item();


            case 2:
                delete to do item();
            case 3:
                edit to do item();

            case 4:
                clear to do list();








            }
        }
