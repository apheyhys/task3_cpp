#include <fstream>
#include <iostream>

char *readfile(const char *filename) {
    std::ifstream file_input(filename, std::ios::binary | std::ios::ate);
    if(!file_input)
    {
        std::cout<<"Cannot open input file\n";
        return reinterpret_cast<char *>(1);
    }

    std::ifstream file_input2(filename);

    const int MAX = 80;

    char * arr;

    arr = new char[MAX];

    file_input2.get(arr, 80, EOF);
    std::cout << "Файл прочитан" << std::endl;

    file_input.close();
    file_input2.close();

    return arr;
}
