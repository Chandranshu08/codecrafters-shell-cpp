#include <iostream>
#include <string>

int main() {
  // Flush after every std::cout / std:cerr
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;
  
  while (true) {
   std::cout << "$ ";
   std:: string name;
   std:: string input;
   

    std::getline(std::cin, input);
   if (input.substr(0,4) == "echo"){
     std:: cout << input.substr(5) << std::endl ;
   }

   else if (input == "exit") {
     break;}

  else if (name != "exit" ) {
   std:: cout << input << ": command not found\n";
   }
 


}
}
