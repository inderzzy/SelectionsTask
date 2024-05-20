#include <iostream>

int main() {

    int x;
    float a, b, y;
    int counter = 6;

    while (counter < 1)  
    {
        // I am taking user input as choice for calculation
        std::cout << "enter 1. add, 2. substract 3. multiply 4. divide\n";
        std::cin >> x;

        std::cout << "please enter 1st number\n";
        std::cin >> a;

        std::cout << "please enter 2nd number\n";
        std::cin >> b;
        
        switch(x) {
            case 1 :
                y = a + b;
                std::cout << "The answer is: " << y;
                break; 
                
            case 2 :
                y = a - b;
                std::cout << "The answer is: " << y;
                break;  

            case 3 :
                y = a * b;
                std::cout << "The answer is: " << y;
                break;

            case 4 :
                y = a / b;
                std::cout << "The answer is: " << y;
                break;
                
            default :
                std::cout << "Your program has ended";
        } //end of switch
        counter = counter + 1;
    }
}
