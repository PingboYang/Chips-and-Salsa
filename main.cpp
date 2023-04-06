#include <iostream>
#include<vector>
using namespace std;

int main() {
  const int SIZE=5;
  vector<int>monthSold;
  int soldQuantity;
  string typeOfSalsa[SIZE]={"mild","medium","sweet","hot","zesty"};
  for(int i=0;i<SIZE;i++){
    cout<<"\nPlease enter how many of the "<<typeOfSalsa[i]<<" "<<"sold last month";
    cin>>soldQuantity;
    monthSold.push_back(soldQuantity);
  }
  
}