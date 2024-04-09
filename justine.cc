#include <iostream>;
#include <chrono>;
#include <thread>;


int add(int num1, int num2){
    return num1+num2;

}

int subtract(int num1, int num2){
    return num1-num2;

}

int multiply(int num1, int num2){
    return num1*num2;

}

int divide(int num1, int num2){
    return num1/num2;

}

int main() {
    int num1;
    int num2;
    int ops;
    int result;

    std::cout << "My first C++ program" << std::endl;

    std::cout << "Enter a number: " << std :: endl;
    std::cin >> num1;

    std::cout << "Enter a number: " << std :: endl;
    std::cin >> num2;

    if (ops==1){
        int result= add(num1,num2);

    }else if (ops==2){
        int result= subtract(num1,num2);

    }else if (ops==3){
        int result= multiply(num1,num2);

    }else if (ops==4){
        int result= divide(num1,num2);

    }else{
        std::cout << "You did not pick an Operator" <<std::endl;
        int result=0;
    }

    

    std:: cout << "The result of adding the two is: " << result <<std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(3000));
    return 0;
}
