#include<iostream>
int main(){
    int n;
    bool is_prime {true};
    std::cout<<"Enter number to be checked"<<std::endl;
    std::cin>>n;

    for(int i=2;i<n;i++){

        if(n%i==0)
            is_prime=false;
        

    }
 if(is_prime)
    std::cout<<n<<" is prime number"<<std::endl;
else
     std::cout<<n<<" is not a prime number"<<std::endl;

}