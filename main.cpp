//when given 3 prices of an item from 3 seperate years, this will calculate the inflation rate and indicate if the rate is increasing or decreasing
#include <iostream>

void displayResults(double& rate1, double& rate2) {
  
  std::cout << "The inflation rate between year 1 and year 2 is " << rate1*100 << "%" << std::endl;
  std::cout << "The inflation rate between year 2 and year 3 is " << rate2*100 << "%" << std::endl;
  
  if (rate1 > rate2)
    std::cout << "The inflation rate is decreasing" << std::endl;
  else if (rate1 < rate2)
    std::cout << "The inflation rate is increasing" << std::endl;
  else
    std::cout << "There was no change in the inflation rate" << std::endl;
}
void calcRates(double& price1, double& price2, double& price3, double& rate1, double& rate2) { //uses (new price-old price)/old price to calculate the rate of change
  if (price1 == 0 || price2 == 0) {
    printf("Error dividing by zero");
    exit(-1);
  }
  rate1 = (price2-price1)/price1;
  rate2 = (price3-price2)/price2;
}
void getPrices(double& price1, double& price2, double& price3) { //pass by reference (rather than passing a copy) to change values in main - makes it possible to return all 3
  std::cout << "Enter the price of the item in the first year: ";
  std::cin >> price1;
  std::cout << "Enter the price of the item in the second year: ";
  std::cin >> price2;
  std::cout << "Enter the price of the item in the third year: ";
  std::cin >> price3;
}

int main() {
  
  double price1, price2, price3;
  getPrices(price1, price2, price3);
  
  double rate1, rate2;
  calcRates(price1, price2, price3, rate1, rate2);
  
  displayResults(rate1, rate2);
  
  return 0;
}