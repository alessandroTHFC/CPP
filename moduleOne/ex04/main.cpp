#include <iostream>
#include <fstream>

std::string replace(std::string line, std::string target, std::string swaps);
///takes 3 arguments, a file name and two strings, first string being what you want to replace;
///second string being what you will replace it with;
int main(int argc, char **av)
{
    std::string line;
    std::string fileName = av[1];//takes the file name
    fileName.append(".replace");//appends replace to the end
    std::string target = av[2];//sets av2 to target string
    std::string swaps = av[3];//sets av3 to string that will be used as swap;

    if (argc != 4)
    {
        std::cout << "Invalid amout of Arguments fool" << std::endl;
        return(1);
    }
    std::ifstream   inputFile(av[1]);//inputs target string
    if(!inputFile.is_open())
    {
        std::cout << "File can't be opened" << std::endl;
        return(1);
    }
    std::ofstream   outputFile(fileName.c_str(), std::ios::out); //sets output location to replacefile
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
    while(targetPos != std::string::npos) //npos meants until end of string;
    {
        line.erase(targetPos, target.length());//erases from start of target string to its length;
        line.insert(targetPos, swaps);//inserts from target start pos new string;
        targetPos = line.find(target);
    }
    return(line);
}