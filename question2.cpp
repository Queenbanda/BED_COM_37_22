#include <iostream>
#include <cstdlib> 
#include <ctime>   

int main() {
    srand(time(0));
    int daysUntilExpiration = rand() % 12;
    switch (daysUntilExpiration) {
        case 0:
            std::cout << "Your subscription has expired." << std::endl;
            break;
        case 1:
            std::cout << "Your subscription expires within a day!\n";
            std::cout << "Renew now and save 20%!" << std::endl;
            break;
        case 2:
        case 3:
        case 4:
        case 5:
            std::cout << "Your subscription expires in " << daysUntilExpiration << " days.\n";
            std::cout << "Renew now and save 10%!" << std::endl;
            break;
        default:
            if (daysUntilExpiration <= 10) {
                std::cout << "Your subscription will expire soon. Renew now!" << std::endl;
            } else {
                std::cout << "You have an active subscription." << std::endl;
            }
            break;
    }

    return 0;
}