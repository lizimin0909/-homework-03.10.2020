#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::string s, fname, f1name;
    std::cout << "Enter the name of source file:";
    std::cin >> fname;
    std::cout << "Enter the name of destination file:";
    std::cin >> f1name;
    try {
        std::ifstream inFile(fname);
        std::ofstream toFile(f1name);
        if (!inFile) throw "Can not read file";
        if (!toFile) throw "Can not create file";

        char ch;
        while ((ch = inFile.get()) != EOF)
        {
            toFile.put(ch);
        }
        std::cout << "Copy completed successfully!";
        inFile.close();
    }
    catch (const char* error) {
        std::cout << "Error! " << error << "!" << std::endl;
        system("pause");
        return 1;
    }
    return 0;
}