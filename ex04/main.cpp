#include <iostream>
#include <string>
#include <fstream>
#include <print_utils.hpp>
#include <SedFile.hpp>

// Create a program that takes three parameters in the following order: a filename and
// two strings, s1 and s2.
// It must open the file <filename> and copy its content into a new file
// <filename>.replace, replacing every occurrence of s1 with s2.

int main(int argc, char **argv)
{
    if (argc != 4)
        return (1);
    if (!argv[1] || !argv[2] || !argv[3])
        return (1);
    if (argv[1][0] == '\0' || argv[2][0] == '\0')
        return (1);

    std::string filename = argv[1];
    std::string needle = argv[2];
    std::string replace = argv[3];
    std::ifstream ifs;
    std::ofstream ofs;

    char const *in_filename_to_open = filename.c_str();
    ifs.open(in_filename_to_open, std::ios_base::in);
    if (!ifs)
    {
        std::cerr << "file could not be opened." << std::endl;
        return (1);
    }
    std::string file_name_replaced = filename + ".replace";
    char const *out_file_name_to_open = file_name_replaced.c_str();
    ofs.open(out_file_name_to_open, std::ios_base::out | std::ios_base::trunc);
    if (!ofs)
    {
        std::cerr << "file could not be opened." << std::endl;
        return (1);
    }
    SedFile sed(ifs, ofs, needle, replace);
    if (sed.process_input() < 0)
        return (1);
    return (0);
}
