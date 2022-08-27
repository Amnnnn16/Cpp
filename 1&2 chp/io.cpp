#include <iostream>
#include <string>
int main(){
    std::string fname;
    std::string name;
    int age;
    // std::cout<<"Enter you name and age respectively"<<std::endl;
    // std::cin>>name>>age;
    // std::cout<<"hello "<<name<<"  you are "<<age<<"years old"<<std::endl;

// std::cerr<<"std::cerr output: SOMETHING WENT WRONG"<<std::endl;
// std::clog<<"std::clog output: This is a log message"<<std::endl;
  std::cout<<"Enter you full name and age respectively"<<std::endl;
  std::getline(std::cin,fname);
  std::cin>>age;
 std::cout<<"hello "<<fname<<"  you are "<<age<<" years old"<<std::endl;
}