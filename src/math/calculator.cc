#include "calculator.hh"

void Add(double& a, double& b, double& result) {
    result = (double)(a + b);
}

void Divide(double& a, double& b, double& result) {
    if (b == 0) {
        std::cout << "Falha ao tentar dividir por 0." << std::endl;
    } else {
        result = (double)(a / b);
    }
}

void Multiply(double& a, double& b, double& result) {
    result = (double)(a * b);
}

void Subtract(double& a, double& b, double& result) {
    result = (double)(a - b);
}