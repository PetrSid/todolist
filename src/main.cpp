#include <iostream>
#include <fstream>
#include <string>

/*
    1. Подробно расписать прицнип работы программы
    2. поделить программу на струтуры для эвиктивного написание программы

*/

int main()
{
    std::ofstream write_in_file;
    write_in_file.open("TestFileName.txt");

    std::string str;
    std::string temp_str;

    while(true) 
    {
        getline(std::cin, temp_str);
        str += temp_str;
    }
    write_in_file << str;

    return 0;
}