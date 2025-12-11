#ifndef SEDFILE_HPP
#define SEDFILE_HPP

#include <fstream>
#include <iostream>
#include <string>

class SedFile {
private:
  std::ifstream &ifs_;
  std::ofstream &ofs_;
  std::string const &needle_;
  size_t needle_len_;
  std::string const &replace_;
  std::string process_line(std::string const &line);

public:
  SedFile(std::ifstream &ifs, std::ofstream &ofs, const std::string &needle,
          const std::string &replace);
  int process_input(void);
};

#endif
