#include <iostream>

int main() {
    double total,number;
    bool stop = false;
    while(!stop){
        std::string temp1;
        std::cout<<"enter a score"<<std::endl;
        std::cin>>temp1;
        double temp = std::stod(temp1);
        if(temp == 0){
            stop = true;
        }else{
            total +=temp;
            number++;
        }
    }
    if(number!=0) {
        std::cout <<"number of score: "<< number<<" average: "<<total / number;
    }else{
        std::cout<<"0 number of score is entered";
    }

}