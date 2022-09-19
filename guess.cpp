#include <iostream>
#include <cstdlib>
#include <time.h>
int guessNumber;
int secretNumber;
int noofguess=0;
int limit;

 void guesser(){
while(secretNumber != guessNumber && noofguess!=limit){
    std::cout<<"Enter guess "<<std::endl;
    std::cin>>guessNumber;
    noofguess++;

    if(secretNumber<guessNumber)
    std::cout<<"Lower \n";
    else if (secretNumber>guessNumber)
    {
        std::cout<<"Higher \n";
    }
    
}
if(secretNumber==guessNumber)
std::cout<<"you win";
else if(secretNumber!=guessNumber)
std::cout<<"you loose ";


/*if(noofguess=limit)
std::cout<<"you loose \n";
else if(noofguess != limit)
std::cout<<"you win";*/


}

int main(){
    srand(time(0));
    secretNumber=rand()%99;
    limit=10;
    guesser();

}