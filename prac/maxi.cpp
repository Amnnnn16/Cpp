#include <iostream>
int main(){
    int a[5]={1,7,9,11,4};
    int max =0;
    int i;
    for(i=0;i<sizeof(a);i++){
        if(a[i]>max){
            max=a[i];}

    }
    std::cout<<"Maximum number is "<<max<<std::endl;
    return 0;
}