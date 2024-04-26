#include <iostream>

int main() {
    int userInput;

    // Prompt the user for an integer value between 5 and 10
    std::cout << "Please enter an integer value between 5 and 10: ";

    // Loop until a valid integer between 5 and 10 is entered
    while (true) {
        // Check if the input is a valid integer
        if (!(std::cin >> userInput)) {
            std::cin.clear(); // Clear error flags
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
            std::cout << "Invalid input. Please enter an integer value between 5 and 10: ";
        } else if (userInput < 5 || userInput > 10) {
            std::cout << "Input value must be between 5 and 10. Please try again: ";
        } else {
            break; // Exit the loop if valid input is provided
        }
    }

    // Output statement to inform the user that their input value has been accepted
    std::cout << "Your input value of " << userInput << " has been accepted." << std::endl;

    return 0;
}