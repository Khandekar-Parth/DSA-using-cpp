// is code using if else conditionals

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;

//     cout << " Enter Your Number:  ";
//     cin >> n;

//     if (n >= 0)
//     {
//         cout << "Positive : " << n;
//     }
//     else
//     {
//         cout << "Negative : " << n;
//     }

//     return 0;
// }

// Problems:

// Are your eligible for licene using ifelse

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << " Enter Your Age: ";
//     cin >> n;

//         if (n >= 18)
//     {
//         cout << "You are eligilbe for license.";
//     }
//     else
//     {
//         cout << "You are not elibile for license \n Due to your age is less than 18";
//     }

//     return 0;
// }


// Is Number is Odd or even finding using  if else

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"Enter your Number ";
//     cin>>n;

//     if(n%2 == 0){
//         cout << " Number is even.";
//     }
//     else{
//         cout << " Number is Odd.";
        
//     }

//     return 0;
// }

// checking your Grades using marks


#include <iostream>
using namespace std;

int main(){
  int mark;
  cout<<"Enter Your Marks: ";
  cin>> mark ;

  if( mark >= 90){
    cout << " Your Grade Is A";
  }
  else if(mark <= 90 && mark >= 80){
    cout << " Your Grade is B";
  }
  else if(mark <= 80 && mark >= 60){
     cout << " Your Grade is c";
  }
  else{
     cout << " Your Grade is d";
  }


}
