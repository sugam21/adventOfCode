#include <fstream>
#include <iostream>
#include <string>
#include <vector>

int main(int argc, char *argv[]) {
  std::vector<std::string> lines;
  std::vector<int> ans;
  std::ifstream file("day2.txt");
  if (file.is_open()) {
    std::string line;
    while (std::getline(file, line)) {
      lines.push_back(line);
    }
    file.close();
  }

  int id;
  int blue;
  int green;
  int red;

  for (int j = 0; j < lines.size(); j++) {
    std::string s = lines[j];
    id = 0;
    blue = 0;
    green = 0;
    red = 0;
    std::string temp = "";

    for (int i = 0; i < s.length(); i++) {
      if (isdigit(s[i])) {
        if (id == 0) {
          temp += s[i];
          if (std::isdigit(s[i + 1])) {
            continue;
          } else {
            id = stoi(temp);
            temp = "";
          }
        } else {
          temp += s[i];
        }
      } else {
        if (s.substr(i + 1, 5) == "green") {
          green += stoi(temp);
          /* std::cout << " G: " << green << std::endl; */
        } else if (s.substr(i + 1, 4) == "blue") {
          blue += stoi(temp);
          /* std::cout << " B: " << blue << std::endl; */
        } else if (s.substr(i + 1, 3) == "red") {
          red += stoi(temp);
          /* std::cout << " R: " << red << std::endl; */
        }
        temp = "";
      }
    }
    std::cout << "id-> " << id << std::endl;
    std::cout << "green-> " << green << " blue -> " << blue << " red-> " << red
              << std::endl;

    if (red <= 12 && blue <= 14 && green <= 13) {
      ans.push_back(id);
    }
  }
  int sol = 0;
  for (int x : ans) {
    /* sol += x; */
    std::cout << x << std::endl;
  }
  /* std::cout << sol << std::endl; */

  return 0;
}
