#include <SedFile.hpp>

SedFile::SedFile(std::ifstream &ifs, std::ofstream &ofs,std::string const &needle, std::string const &replace): ifs_(ifs), ofs_(ofs), needle_(needle), needle_len_(needle.length()), replace_(replace)
{
    ;
}

int    SedFile::process_input(void)
{
    std::string map_line;
    std::string line;

    while (std::getline(ifs_, line)){
        map_line = process_line(line);
        ofs_ << map_line << std::endl;
    }
    return (0);
}

std::string  SedFile::process_line(std::string const &line)
{
    std::string map_line;
    size_t start_pos = 0;
    size_t needle_pos = 0;

    while (start_pos<line.length())
    {
        needle_pos = line.find(needle_, start_pos);
        if(needle_pos==line.npos)
        {
            map_line.append(line.substr(start_pos));
            return (map_line);
        }
        map_line.append(line.substr(start_pos, needle_pos - start_pos));
        map_line.append(replace_);
        start_pos = needle_pos + needle_len_;
    }
    return (map_line);
}
