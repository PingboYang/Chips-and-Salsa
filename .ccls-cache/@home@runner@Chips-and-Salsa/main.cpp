#include <iostream>
#include<vector>
#include<iomanip>
using namespace std;

const int SIZE=5;
string typeOfSalsa[SIZE]={"mild","medium","sweet","hot","zesty"};
void printMonthSold(string typeOfSalsa[SIZE],vector <int>);
string largestSold(string typeOfSalsa[SIZE],vector <int>);
string lowestSold(string typeOfSalsa[SIZE],vector <int>);
int totalSold(string typeOfSalsa[SIZE],vector <int>);
int main() {
  
  vector<int>monthSold;
  int soldQuantity;
  for(int i=0;i<SIZE;i++){
    cout<<"\nPlease enter how many of the "<<typeOfSalsa[i]<<" "<<"sold last month: ";
    cin>>soldQuantity;
    while(soldQuantity<0){
      cout << "The quantity sold can not be negative number: ";
      cin >>soldQuantity;
    }
    monthSold.push_back(soldQuantity);
  }
  cout<<"_____________________________________________";
  printMonthSold(typeOfSalsa,monthSold);
  cout<<"\n\n_____________________________________________";
  cout<<"\nThe total sold for last month is: "<<totalSold(typeOfSalsa,monthSold);
  cout<<"\nThe largest sold type is: "<<largestSold(typeOfSalsa,monthSold);
  cout<<"\nThe lowest sold type is: "<<lowestSold(typeOfSalsa,monthSold);
  
  
  
  
  
}
void printMonthSold(string typeOfSalsa[SIZE],vector <int>s){
  cout<<"\nType of salsa"<<setw(20)<<"Quantity Sold";
  for(int i=0;i<SIZE;i++){
    cout<<"\n"<<typeOfSalsa[i]<<setw(20)<<s[i];
  }
}
string largestSold(string typeOfSalsa[SIZE],vector <int>s){
  int largestSold=s[0];
  string largestSoldName=typeOfSalsa[0];
  for(int i=0;i<SIZE; i++){
    if(s[i]>largestSold){
      largestSold=s[i];
      largestSoldName=typeOfSalsa[i];
    }
    
  }
  return largestSoldName;
}
string lowestSold(string typeOfSalsa[SIZE],vector <int>s){
  int lowestSold=s[0];
  string lowestSoldName=typeOfSalsa[0];
  for(int i=0;i<SIZE; i++){
    if(s[i]<lowestSold){
      lowestSold=s[i];
      lowestSoldName=typeOfSalsa[i];
    }
    
  }
  return lowestSoldName;
}
int totalSold(string typeOfSalsa[SIZE],vector <int>s){
  int totalSold=0;
  for(int i=0;i<SIZE; i++){
    totalSold+=s[i];
    }
    return totalSold;
  }
  

