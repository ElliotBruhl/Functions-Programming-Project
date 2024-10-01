#include <iostream>

void displayResults(double& rate1, double& rate2) {
  
}
void calcRates(double& price1, double& price2, double& price3, double& rate1, double& rate2) { //take in prices and put resulting rates in rate1 and rate2
  
}
void getPrices(double& price1, double& price2, double& price3) { //pass by reference (rather than passing a copy) to change values in main
  std::cout << "Enter the price of item 1: ";
  std::cin >> price1;
  std::cout << "Enter the price of item 2: ";
  std::cin >> price2;
  std::cout << "Enter the price of item 3: ";
  std::cin >> price3;

  calcRates(price1, price2, price3);
}

int main() {
  
  double price1, price2, price3;
  getPrices(price1, price2, price3);
  
  double rate1, rate2;
  calcRates(rate1, rate2);
  
  displayResults(rate1, rate2);
  
  return 0;
}