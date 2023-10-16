#include <iostream>

int main() {
    start:
    std::cout<<"Menu:"<<std::endl;
    std::cout<<"0-exit"<<std::endl;
    std::cout<<"1-addition"<<std::endl;
    std::cout<<"2-subtraction"<<std::endl;
    std::cout<<"3-multiplication"<<std::endl;
    std::cout<<"4-division"<<std::endl;
    std::cout<<"5-remaining"<<std::endl;
    int chose;
    int exit=0;
    int addition=1;
    int subtraction=2;
    int multiplication=3;
    int division=4;
    int remaining=5;
    std::cout<<"What do you choose?(0,1,2,3,4,5):";
    std::cin>>chose;

    if(chose==0){
        std::cout<<"Thanks for choosing us<3"<<std::endl;
        goto start;
    }
    if(chose==1){
        float a;
        float b;
        std::cout<<"Enter a:";
        std::cin>>a;
        std::cout<<"Enter b:";
        std::cin>>b;
        double result=a+b;
        std::cout<<"Your result is:"<<result<<std::endl;
        std::cout<<"If you want to continue enter 1?:";
        int back_to_menu=1;
        std::cin>>back_to_menu;
        if(back_to_menu==1){
            goto start;
        }


    }
    if(chose==2) {
        float a;
        float b;
        std::cout << "Enter a:";
        std::cin >> a;
        std::cout << "Enter b:";
        std::cin >> b;
        double result = a - b;
        std::cout << "Your result is:" << result << std::endl;
        std::cout << "If you want to continue enter 1?:";
        int back_to_menu = 1;
        std::cin >> back_to_menu;
        if (back_to_menu == 1) {
            goto start;
        }
    }
    if(chose==3) {
        float a;
        float b;
        std::cout << "Enter a:";
        std::cin >> a;
        std::cout << "Enter b:";
        std::cin >> b;
        double result = a * b;
        std::cout << "Your result is:" << result << std::endl;
        std::cout << "If you want to continue enter 1?:";
        int back_to_menu = 1;
        std::cin >> back_to_menu;
        if (back_to_menu == 1) {
            goto start;
        }
    }
    if(chose==4) {
        float a;
        float b;
        division:
        std::cout << "Enter a:";
        std::cin >> a;
        std::cout << "Enter b:";
        std::cin >> b;
        if(b==0){
            std::cout<<"Number b must be bigger than 0, pls change your input."<<std::endl;
            goto division;
        }
        double result = a / b;
        std::cout << "Your result is:" << result << std::endl;
        std::cout << "If you want to continue enter 1?:";
        int back_to_menu = 1;
        std::cin >> back_to_menu;
        if (back_to_menu == 1) {
            goto start;
        }
    }
    if(chose==5) {
        float a;
        float b;
        remaining:
        std::cout << "Enter a:";
        std::cin >> a;
        std::cout << "Enter b:";
        std::cin >> b;
        if(b==0){
            std::cout<<"Number b must be bigger than 0, pls change your input."<<std::endl;
            goto remaining;
        }
        double result= (int)a % (int)b;
        std::cout << "Your result is:" << result << std::endl;
        std::cout << "If you want to continue enter 1?:";
        int back_to_menu = 1;
        std::cin >> back_to_menu;
        if (back_to_menu == 1) {
            goto start;
        }
    }



    return 0;
}
