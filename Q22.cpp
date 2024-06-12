#include <iostream>
#include <string>

int main() {
    float average;
    std::string grade;
    bool isConditional = false;

    std::cout << "Enter the average score: ";
    std::cin >> average;

    if (average >= 17) {
        grade = "A";
    } else if (average >= 14) {
        grade = "B";
    } else if (average >= 12) {
        grade = "C";
    } else {
        grade = "D";
    }

    if (average < 10) {
        isConditional = true;
    }

    std::cout << "Grade: " << grade << std::endl;
    
    if (isConditional) {
        std::cout << "Conditional status: Yes" << std::endl;
    } else {
        std::cout << "Conditional status: No" << std::endl;
    }

    return 0;
}