#include <fstream>
#include <iostream>
#include <string>
#include <vector>

int main(int argc, char *argv[]) {
  // This is for accessing the data and storing into vectors.
  std::ifstream file("day1.txt");
  std::vector<std::string> lines;
  if (file.is_open()) {
    std::string line;
    while (std::getline(file, line)) {
      lines.push_back(line);
    }
    file.close();
  }
  // This is for accessing the stored data and calculating the value
  int ans = 0;
  for (int j = 0; j < lines.size(); j++) {
    std::string s = lines[j];
    std::string first = "";
    std::string second = "";
    int temp = 0;
    for (int i = 0; i < s.length(); i++) {
      if (isdigit(s[i])) {
        if (first == "") {
          first = s[i];
        } else {
          second = s[i];
        }
      }
    }
    if (second == "") {
      second = first;
    }
    temp = stoi(first + second);
    ans += temp;
  }
  std::cout << ans << std::endl;
  return 0;
}
