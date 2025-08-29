// #include <iostream>
// using namespace std;

// int main()
// {

//     int num;
//     cout << "How many times you want to print text:";
//     cin >> num;

//     while (num <= 5)
//     {
//         num++;
//         cout << num << "";
//     }
//     cout << endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int i= 1;
//     int n = 3;

//     for (i=1;i<=n;i++){
//         cout <<"hello \n";

//     }
//     cout<< endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {

//     int i= 1;
//     int n = 10;

//     for(i;i<=n;n){
//         cout<< i+ n = n;
//     }

// return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << " Write your n value which need to sum : ";
//     cin >> n;

//     int i = 1;
//     int sum = 0;

//     for (i = 1; i <= n; i++)
//     {
//         sum = sum + i;
//     }
//     cout << sum << endl;

//     return 0;
// }

// calculating sum of 1 to n using while loop

// #include <iostream>
// using namespace std;

// int main()
// {
//     int i = 1;
//      for ( i; i<=10;i++){
//         int sum ;
//         sum+= i;
//         if (i==5){
//             break;
//             cout<<"break"<<endl;
//         }

//         cout<<sum<<endl;
//      }

//     return 0;

// }

#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }

        cout << endl;
    }
    cout << sum << "\n";
    return 0;
}
