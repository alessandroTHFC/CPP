#include <iostream>
#include <fstream>

std::string replace(std::string line, std::string target, std::string swaps);

int main(int argc, char **av)
{
    std::string line;
    std::string fileName = av[1];
    std::string target = av[2];
    std::string swaps = av[3];

    if (argc != 4)
    {
        std::cout << "Invalid amout of Arguments fool" << std::endl;
        return(1);
    }
    std::ifstream   inputFile(av[1]);
    if(!inputFile.is_open())
    {
        std::cout << "File can't be opened" << std::endl;
        return(1);
    }
    std::ofstream   outputFile((fileName + ".replace"));
    while(std::getline(inputFile, line))
    outputFile << replace(line, target, swaps) << std::endl;
    inputFile.close();
    outputFile.close();
    return(0);
}

std::string replace(std::string line, std::string target, std::string swaps)
{
    size_t targetPos;

    targetPos = line.find(target);
    while(targetPos != std::string::npos)
    {
        line.erase(targetPos, target.length());
        line.insert(targetPos, swaps);
        targetPos = line.find(target);
    }
    return(line);
}