#include <iostream>
#include <string>

int main() {
  // Flush after every std::cout / std:cerr
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;
  
  while (true) {
   std::cout << "$ ";
   std:: string name;
   std:: cin >> name;
   if (name == "exit") {
   std:: cout << name << ": command not found";
   break;
}
}
}
