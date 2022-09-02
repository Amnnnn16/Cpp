#include <iostream>
void armstrong(int n){

    int t,r,s=0;
    t=n;
while(t!=0){
     r=t%10;
     s=s+r*r*r;
     t=t/10;


}
if(s==n){
    std::cout<<n<<"  is armstrong number"<<std::endl;
}
else{
    std::cout<<n<<"  is not a armstrong number"<<std::endl;
}

}
int main(){
    int n;
    std::cout<<"Enter your number"<<std::endl;
    std::cin>>n;
    armstrong(n);
    }
