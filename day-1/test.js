const fs = require("fs");

function processFile(filename) {
  let first;
  let second;
  let temp;
  let ans = 0;
  const lines = fs.readFileSync(filename, "utf8").split("\n");
  lines.forEach((line) => {
    first = "";
    second = "";
    temp = "";
    for (let i = 0; i < line.length; i++) {
      if (line[i] >= "0" && line[i] <= "9") {
        if (first == "") {
          first = line[i];
        } else {
          second = line[i];
        }
      }
    }
    if (second == "") {
      second = first;
    }
    temp = first + second;
    ans += parseInt(temp);
  });
  console.log(ans);
  return ans;
}

const filename = "day1.txt";
const sum = processFile(filename);
// console.log(sum);
