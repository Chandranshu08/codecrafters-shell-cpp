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
   if (name.substr(0,4) == "echo"){
     std:: cout << name.substr(5);
   }
   if (name == "exit") {
     break;}
   if (name != "exit") {
   std:: cout << name << ": command not found\n";
}
}
}
