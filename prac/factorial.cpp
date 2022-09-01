#include <iostream>
int main(){
     int n;

    std::cout<<"Enter number"<<std::endl;
    std::cin>>n;
    int i,f=1;
    for(i=1;i<=n;i++){
        f=f*i;

    }
    std::cout<<"factorial is  "<<f<<std::endl;
    return 0;
}