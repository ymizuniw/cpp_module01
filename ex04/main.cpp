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
int process_file(char **argv)
{
    std::string ori_filename = argv[0];
    std::string target = argv[1];
    std::string subset = argv[2];
    std::string new_filename = ori_filename.append(".replace");
    size_t target_pos = 0;
    std::string line;
    std::string result;

    std::ifstream in_file(ori_filename);
    if (!in_file.is_open())
    {
        print_err("open: ");
        return (-1);
    }
    while (std::getline(in_file, line))
    {
        //find pattern
        target_pos = line.find(target);
        if (target_pos!=std::string::npos)
        {
            while (target_pos!=0)
            {
                //find the subset from the line.
                if (target_pos!=std::string::npos)//if found.
                {
                    result.append(line, 0, target_pos - 1);
                    result.append(subset);
                    line.erase(0, target_pos+subset.length());//erase from head to subset found place's last idx.
                }
                else
                    break;
                target_pos = line.find(target);
            }
        }
        else
        {
            result.append(line);
            line.erase(0, line.length());
        }
    }
    in_file.close();
    std::ofstream cp_file(new_filename);
    if (!cp_file.is_open())
    {
        print_err("open: ");
        return (-1);
    }
    cp_file << result << std::endl;
    cp_file.close();
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
    if (process_file(argv)<0)
        return (1);
    return (0);
}
