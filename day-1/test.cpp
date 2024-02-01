#include <fstream>
#include <iostream>
#include <string>
#include <vector>

int main() {
  std::ifstream file("day1.txt");
  std::vector<std::string> lines;

  if (file.is_open()) {
    std::string line;
    while (std::getline(file, line)) {
      lines.push_back(line);
    }
    file.close();
  } else {
    std::cout << "Unable to open the file!" << std::endl;
  }
  // Printing out the line from the vector
  for (const auto &line : lines) {
    std::cout << line << std::endl;
  }
  return 0;
}
