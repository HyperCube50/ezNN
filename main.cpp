#include <iostream>
#include "Eigen/Dense"

int main() {
    std::cout << "hello world" << std::endl;
    Eigen::Matrix<float, 3, 3> test;
    test.setZero();
    
    std::cout << test << std::endl;

    return 0;
}