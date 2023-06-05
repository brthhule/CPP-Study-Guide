// C++ Study Guide.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "StudyCards.h"

std::vector<std::string> printOptionsFile(int optionNum);
bool checkIgnore(std::string newLine, bool ignore, int optionNum);
std::vector <StudyCards> cards;

int main()
{
    std::string userInput = " ";
    printOptionsFile(1);//Print options for Study Guide selection
    std::cin.ignore();
    std::getline(std::cin, userInput);
    //Flashcards, learn, test, match
    
    std::cout << "Hello World!\n";
}

std::vector<std::string> printOptionsFile(int optionNum)
{
    bool ignore = true;
    std::fstream newfile;
    newfile.open("Options.txt", std::ios::in);
    if (newfile.is_open())
    {
        std::string newLine;
        while (std::getline(newfile, newLine))
        {
            ignore = checkIgnore(newLine, ignore, optionNum);
            if (ignore == false)
            {
                if (newLine.substr(0, 13) != "Valid options:")
                {
                    std::cout << newLine;
                }
                else
                {

                }
                
            }
        }
    }

}
bool checkIgnore(std::string newLine, bool ignore, int optionNum)
{
    if (ignore == true)
    {
        if (newLine == "Option " + std::to_string(optionNum) + " start")
        {
            ignore = false;
        }
    }
    else if (ignore == false)
    {
        if (newLine == "Option " + std::to_string(optionNum) + " end")
        {
            ignore = true;
        }
    }
    return ignore;
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
