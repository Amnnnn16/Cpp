#include<iostream>
int main(){
    int yr;
    std::cout<<"Enter year"<<std::endl;
    std::cin>>yr;
    if((yr%400==0)||((yr%4==0)&&(yr%100!=0))){
        std::cout<<"leap year"<<std::endl;}
    else{
    std::cout<<" not a leap year"<<std::endl;}

    }
