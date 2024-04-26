#include <iostream>
#include <cstdlib> 
#include <ctime>   

int main() {
    srand(time(0));
    int daysUntilExpiration = rand() % 12;

    std::cout<< "Expiration: " << std::endl;
    if (daysUntilExpiration <= 10) {
        std::cout << "Your subscription will expire soon. Renew now!" << std::endl;
    } else if (daysUntilExpiration <= 5) {
        std::cout << "Your subscription expires in " << daysUntilExpiration << " days.\n";
        std::cout << "Renew now and save 10%!" << std::endl;
    } else if (daysUntilExpiration == 1) {
        std::cout << "Your subscription expires within a day!\n";
        std::cout << "Renew now and save 20%!" << std::endl;
    } else if (daysUntilExpiration == 0) {
        std::cout << "Your subscription has expired." << std::endl;
    } else {
        std::cout << "You have an active subscription." << std::endl;
    }

    return 0;
}