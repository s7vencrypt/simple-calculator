#include "math/calculator.hh"

int main() {
    std::cout << "==================================================\n"<< std::endl;
    std::cout << "                   CALCULATOR                   "<< std::endl;
    std::cout << "==================================================\n\n\n"<< std::endl;

    int option;

    while (true) {

        std::cout << "[+] Choose one of the options below: \n";
        std::cout << "[!] 0: Exit\n";
        std::cout << "[!] 1: Add\n";
        std::cout << "[!] 2: Divide\n";
        std::cout << "[!] 3: Multiply\n";
        std::cout << "[!] 4: Subtract\n";
        std::cout << "[+] Enter the option number: \n";
        std::cin >> option;
    
        switch (option) {
            case 0: { 
                return 0;
            }
            case 1: {
                double num1;
                std::cout << "[*] Enter the first number: ";
                std::cin >> num1;
    
                double num2;
                std::cout << "[*] Enter the second number: ";
                std::cin >> num2;
    
                double result = 0;
    
                Add(num1, num2, result);
                std::cout << "[+] Result: " << result << "\n\n";
                break;
            }
            case 2: {
                double num1;
                std::cout << "[*] Enter the first number: ";
                std::cin >> num1;
    
                double num2;
                std::cout << "[*] Enter the second number: ";
                std::cin >> num2;
    
                double result = 0;
    
                Divide(num1, num2, result);
                std::cout << "[+] Result: " << result << "\n\n";
                break;
            }
            case 3: {
                double num1;
                std::cout << "[*] Enter the first number: ";
                std::cin >> num1;
    
                double num2;
                std::cout << "[*] Enter the second number: ";
                std::cin >> num2;
    
                double result = 0;
    
                Multiply(num1, num2, result);
                std::cout << "[+] Result: " << result << "\n\n";
                break;
            }
            case 4: {
                double num1;
                std::cout << "[*] Enter the first number: ";
                std::cin >> num1;
    
                double num2;
                std::cout << "[*] Enter the second number: ";
                std::cin >> num2;
    
                double result = 0;
    
                Subtract(num1, num2, result);
                std::cout << "[+] Result: " << result << "\n\n";
                break;
            }
            default: std::cout << "[-] Unknown option\n";
        }
    }

    return 0;
}