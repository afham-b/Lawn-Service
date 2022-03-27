//Afham Bashir. 9.13.19
//Lawn Service 
#include <iostream>
#include <iomanip> // allows the use of manipulators that will be needed for setprecision or setw
using namespace std;

const int mow_area=4000;  //4000 square yeards, a constant that can be changed to represent the area that the lawn service charges by. Set to Integer for the calculation of mowing price.  
const double mowing_rate=34.95;// constant that $rate the lawn service charges for their set mowing area. 
const double fertilizing_rate=39.95; //constant $rate the lawn service has set for how much they charge for fertilizing 
const double planting_rate=54.95; // constant $rate the lawn service has set for how much they charge for each tree planted. Any of the above constants can be changed by the lawn service and will be reflected in the final prices. 

int main() {
  int area_lawn_sqyd;      //an integer assigned to the square yards the customer wants cut
  int n_fertilizing;       //varaible to contain the number of desired fertilizing applications
  int n_treesplanted;      //intger variable for the numbers for trees the customer wants planted

  double cost_mowing;       //for price of the area being mowed with respect to the price constant
  double cost_fertilzing;   //price of fertilization applications, with respect to the fertilizing rate const
  double cost_treesplanted; //price for the number of trees planted, with respect to the the const planting rate
  double cost_total;        //the total costs including the area mowed, trees planted, and any fertilization. 

  cout<< "Welcome to Tom & Jerry's Lawn Service."<<endl;  //displayed at top of program
  cout<< endl;                                            //puts an extra line
  cout<< "Enter square yards being mowed: ";              //prompts for the entry of square yards to be input
  cin >> area_lawn_sqyd;                                  //assings value to varaible for area being mowed 
  cout<< "Enter number of fertilizing applications: ";    //prompts entry for number of fertilization applications
  cin >> n_fertilizing;                                   //assigns value to varaibel for number of fertilization
  cout<< "Enter the number of trees to be planted: ";     //asks for number of trees customer wants planted 
  cin >> n_treesplanted;                                  //assings value to variable for number for trees planted
  cout<< endl;                                            // adds in extra line 

  cost_mowing=(((area_lawn_sqyd-1)/mow_area)+1)*mowing_rate;  //calculates the cost of mowing by taking the area of lawn being mowed, subtracts 1. then divides by constant area the lawn service charges by and then adds one, and finally mulitplies by the constant mowing rate the lawn service charger for per a constant area 
  cost_fertilzing=n_fertilizing*fertilizing_rate;   // calcuates the cost of fertilizing by taking the number of fertilization applications and multilying it by the constant fertilizing rate the service charges by. 
  cost_treesplanted=n_treesplanted*planting_rate; // calculates the cost for the number of trees being planted by multilying the variable constaining the number of trees being planted and multilying it by the constant tree planting rate preset by the lawn serive. 
  cost_total=cost_mowing+cost_fertilzing+cost_treesplanted; // the total cost of all services desired by adding the variables for cost of mowing area, the cost of fertilizing, and the cost of all trees planted. 

  cout<<fixed<<setprecision(2); // program will output to only 2 decimals places due to the context of cuurency   
  cout<< "Price of Mowing:      $" <<setw(15)<<cost_mowing<<endl;        // outputs the cost of mowing, with setw serving to aligning the outputs all toegether so the user can more easily read the information. 
  cout<< "Price of Fertilizing: $" <<setw(15)<<cost_fertilzing<<endl;   //outputs cost of fertilizing
  cout<< "Price of Trees:       $" <<setw(15)<<cost_treesplanted<<endl; //outputs cost of planting trees 
  cout<< "Grand Total:          $" <<setw(15)<<cost_total<<endl;  //adds up the costs of all services and displays a grand total. 
  return 0;
}