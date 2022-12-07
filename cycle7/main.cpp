#include <iostream>

using namespace std;

int main() {
double pricePerPage;
int numPages;
double totalPrice;

std::cout << "Enter price per page: ";
std::cin >> pricePerPage;

std::cout << "Enter number of pages: ";
std::cin >> numPages;

totalPrice = pricePerPage * numPages;
std::cout << "Total price for all pages is:" << totalPrice << std::endl;

return 0;
}
