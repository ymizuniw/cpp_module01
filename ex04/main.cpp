#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <fstream>
#include "print_wrapper.hpp"

// size_t post = text.find(pattern);
//std::ifstream inputFile("file_path");
//if (inputFile.is_open())
//while (std::getline(inputFile, line))
//inputFile.close;
//else print_err();
//append(str, start, end);, append(str), append(num, char), append(str, len);

//ofstream outputfile(path);
//outputfile<<"text";
//outputfile.close();

//if (pos!=std::string::npos)
//{}
//open original file, open copy file, read original file, find pattern in original file, replace and write to copy file.

std::string process_line(std::string line, std::string target, std::string subset)
{
    //find subset in target and append str loop.
    size_t start = 0;
    size_t found = 0;
    std::string tmp;
    std::string processed_line;

    while (1)
    {
        found = line.find(target, start);
        if (found!=std::string::npos)
        {
            tmp = line.substr(start, found - start);
            processed_line.append(tmp);
            processed_line.append(subset);
            start = found + target.length(); 
        }
        else
        {
            tmp = line.substr(start);
            processed_line.append(tmp);
            break ;
        }
    }
    return (processed_line);
}

bool get_line_loop(std::string &result, std::string filename, std::string target, std::string subset)
{
    std::string line;
    std::ifstream input_file(filename);

    if (!input_file.is_open())
    {
        std::cerr << "open file failed." << std::endl;
        return (0);
    }
    while(std::getline(input_file, line))
    {
        result += process_line(line, target, subset);
        result += "\n";
    }
    input_file.close();
    return (1);
}

bool ft_replace(std::string filename, std::string target, std::string subset)
{
    std::string replaced;
    std::string out_file_name = filename + ".replace";
    std::ofstream out_file(out_file_name);

    if (!out_file.is_open())
    {
        std::cerr << "open file failed." << std::endl;
        return (0);
    }
    out_file << replaced;
    if (!get_line_loop(replaced, filename, target, subset))
        return (0);
    return(1);
}

int main(int argc, char **argv)
{
    if (argc!=4)
    {
        print_msg("usage: <filename> s1 s2");
        return (1);
    }
    if (argv[1][0]=='\0')
    {
        print_err("file name is empty.");
        return (1);
    }
    if (argv[2][0]=='\0')
    {
        print_err("s1 is empty.");
        return (1);
    }
    if (argv[3][0]=='\0')
    {
        print_err("s2 is empty.");
        return (1);
    }
    if (!ft_replace(argv[1], argv[2], argv[3]))
        return (1);
    return (0);
}
