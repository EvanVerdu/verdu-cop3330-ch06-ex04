#include "iostream"
#include "vector"

/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Evan Verdu
 */

/*
 Define a class Name_value that holds a string and a value. Rework exercise 19 in Chapter 4 to use a vector<Name_value> instead of two vectors

19. Write a program where you first enter a set of name-and-value pairs, such
as Joe 17 and Barbara 22. For each pair, add the name to a vector called
names and the number to a vector called scores (in corresponding positions, so that if names[7]=="Joe" then scores[7]==17). Terminate input
with NoName 0. Check that each name is unique and terminate with an
error message if a name is entered twice. Write out all the (name,score)
pairs, one per line

*/

class name_value {
    public:
      std::string name;
      int value;
};



int main(){

    int i = 0;
    int k = 0;
    std::string name;
    int value;
    std::vector<name_value> list;
    name_value object;

    while (i == 0){

        std::cout << "Please enter a name and a value (Name value, format): \n";
        std::cout << "Enter 'NoName 0' to exit:";
        std::cin >> name;
        std::cin >> value;

        if (name.compare("NoName") == 0 && value == 0){
            exit (EXIT_FAILURE);
        }

        for (int j = 0; j<list.size(); j++){ //Checks if name is in use, if it is goes back to top of loop.
            if(name == list[j].name){
                std::cout << "\n That name is already in use. Exiting... \n\n"; 
                exit (EXIT_FAILURE);
            }
        }
        
        object.name = name;
        object.value = value;

        list.push_back(object); //enters a new object to the list.

        for (int j = 0; j<list.size(); j++){ //Prints the list
            std::cout << list[j].name << " " << list[j].value << "\n"; 
        }
    }

    return 0;
}

