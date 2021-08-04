#include <iostream>
#include <vector>
using namespace std;

int main () {


vector <double> operations{};
char item{};

do {
cout <<"\n.............."<< endl;

cout << "P-print numbers" << endl;
cout <<"A-add numbers" << endl;
cout <<"M-display the average" << endl;
cout <<"S-display the smallest" << endl;
cout<<"L-display the largest" << endl;
cout << "Q- quit" << endl;



cout << "enter your choice" << " " ;
cin >> item;

if(item == 'P' || item == 'p')
   if(operations.size() == 0)
     cout << "the list is empty" << endl;
   else {
     cout << "[";
     for (auto num: operations)
       cout << num << " " ;
     cout << "]" << endl;
   }
else if (item == 'A'|| item == 'a'){
  double add_number{};
  cout << "enter a number";
  cin >> add_number;
  operations.push_back(add_number);
  cout << add_number << "added" << endl;
}
else if (item == 'M' || item == 'm'){
  if (operations.size()== 0)
    cout << "unable to calculate the mean" << endl;
  else {
     double sum_op{};
     double average_op{};
     for (auto i: operations)
        sum_op += i;
     average_op = sum_op/operations.size();
     cout << "The average is " << average_op;
  }
}
else if (item == 'S' || item == 's'){
  if (operations.size() == 0)
    cout << "unable to determine the smallest" << endl;
  else {
    double smallest = operations.at(0);
    for (auto num: operations)
      if (num < smallest)
        smallest = num;
    cout << " the smallest number in the list is " << smallest;
  }
} 
else if (item == 'L' || item == 'l'){
  if (operations.size() == 0)
   cout << "unable to determine the largest" << endl;
  else {
    double largest= operations.at(0);
    for (auto i:operations)
     if (i > largest)
      largest = i;
    cout << "the largest number in the list is " << largest;
  }
}
else if (item == 'Q'|| item == 'q'){
  cout << "Good bye!!!" << endl;
} else{
  cout << "Uknown option, please try again!" << endl;
}
} while (item != 'Q'&& item != 'q');
  
     





    return 0;
}