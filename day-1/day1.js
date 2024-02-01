const fs = require("fs");
const arr = [];
let first;
let second;
let ans = 0;
let temp;
fs.readfile("day1.txt", "utf8", (err, data) => {
  if (err) {
    console.error("error reading file", err);
    return;
  }
  const lines = data.split("\n");
  arr.push(lines);

  for (let i = 0; i < arr.length; i++) {
    first = "";
    second = "";
    let str = arr[i];
    for (let j = 0; j < str.length; j++) {
      console.log(str.length);
      if (str[j] >= "0" && str[j] <= "9") {
        if (first == "") {
          first = str[j];
        } else {
          second = str[j];
        }
      }
    }
    if (second == "") {
      second = first;
    }
    temp = first + second;
    ans += parseint(temp);
  }
  console.log(ans);
});

// for (let i = 0; i < s.length; i++) {
//   if (s[i] >= "0" && s[i] <= "9") {
//     if (first == "") {
//       first = s[i];
//     } else {
//       second = s[i];
//     }
//   }
// }
// if (second == "") {
//   second = first;
// }
// temp = first + second;
// ans = parseInt(temp);
