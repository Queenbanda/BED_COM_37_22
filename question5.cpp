#include <iostream>
#include <cmath>

using namespace std;

double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}

double calculateRectangleArea(double length, double width) {
    return length * width;
}

double calculateSquareArea(double side) {
    return side * side;
}

int main() {
    char choice;

    do {
        cout << "Choose a shape to calculate the area:\n";
        cout << "1. Triangle\n";
        cout << "2. Rectangle\n";
        cout << "3. Square\n";
        cout << "4. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case '1': {
                double base, height;
                cout << "Enter the base of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                double area = calculateTriangleArea(base, height);
                cout << "Area of the triangle: " << area << endl;
                break;
            }
            case '2': {
                double length, width;
                cout << "Enter the length of the rectangle: ";
                cin >> length;
                cout << "Enter the width of the rectangle: ";
                cin >> width;
                double area = calculateRectangleArea(length, width);
                cout << "Area of the rectangle: " << area << endl;
                break;
            }
            case '3': {
                double side;
                cout << "Enter the side length of the square: ";
                cin >> side;
                double area = calculateSquareArea(side);
                cout << "Area of the square: " << area << endl;
                break;
            }
            case '4':
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid input. Please enter a valid choice." << endl;
                break;
        }
    } while (choice != '4');

    return 0;
}