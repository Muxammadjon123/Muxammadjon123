#include <iostream>
using namespace std;

int main() {
    //Problem1.1
    // int sum=0;
    // for (int i=1;i<=100;i++) {
    //     sum+=i;
    // }
    // cout<<"The sum is:"<<sum;

    //Problem1.2
    // cin>>n;
    //
    //  while  (i<n) {
    //      sum+=i;
    //      i+=1;
    //
    //  }
    //  cout<<"The sum is:"<<sum;    int n,i=1;
    //  int sum=0;
    //  cout<<"Please enter the n:";


   //Problem2
    // int count=0,num=2;
    // while (count<10)  {
    //     bool is_prime = true;
    //     for (int i=2;i*i<=num;i++) {
    //         if (num%i==0) {
    //             is_prime=false;
    //             break;
    //         }
    //     }
    //     if (is_prime) {
    //         cout<<num<<endl;
    //         count++;
    //     }
    //     num++;
    //
    //
    //     }


    //Problem3
    // int n;
    // cout<<"Please enter the n:";
    // cin>>n;
    // while (n !=1) {
    //     cout<<n<<",";
    //     if (n%2==0) {
    //         n/=2;
    //     }
    //     else {
    //         n=3*n+1;
    //     }
    // }
    // cout<<"1"<<endl;

    //Problem4
    // int x;
    // int z=0;
    // cout<<"Please enter the x:";
    // cin>>x;
    // while (x!=0) {
    //     x=x/10;
    //     z++;
    //
    // }
    // cout<<"The number of digits is "<<z;

    //Problem5

    // int x,y;
    // cout<<"Please enter the x:";
    // cin>>x;
    // while (x!=0) {
    //     y=x%10;
    //     cout<<y<<' ';
    //     x=x/10;
    //
    //
    // }

    //Problem6
    // int a, b;
    //
    //     cout << "Enter two positive integers: ";
    //     cin >> a >> b;
    //
    //     if (a <= 0 || b <= 0) {
    //         cout << "Please enter positive integers only." << endl;
    //         return 1;
    //     }
    //
    //     while (b != 0) {
    //         int temp = b;
    //         b = a % b;
    //         a = temp;
    //     }
    //
    //     cout << "The GCD is " << a << endl;

    //Problem7
    // int sum=0;
    // while (sum<=100) {
    //     int n;
    //     cout<<"Please enter the number:";
    //     cin>>n;
    //     sum+=n;
    // }
    // cout<<"Sum exceeded 100!,Total sum is "<<sum;

    //Problem8
    // int previous_balance=500;
    // int withdrawn_amount;
    //
    // while (previous_balance!=0) {
    //     cout<<"Your current balance is:"<<previous_balance<<endl;
    //     cout<<"Please enter the amount:"<<endl;
    //     cin>>withdrawn_amount;
    //     if (withdrawn_amount>previous_balance)
    //         cout<<"Error"<<endl;
    //     if (withdrawn_amount==0)
    //         break;
    //      else
    //         previous_balance-=withdrawn_amount;
    // }
    //
    // cout<<"Your balance in now 0";

    //Problem9
    // char y;
    // do {
    //     cout<<"Please enter the char:"<<endl;
    //     cin>>y;
    //
    //     if (y=='N')
    //         cout<<"Accepted"<<endl;
    //     else
    //         cout<<"Invalid char"<<endl;
    // }
    // while (y!='N');


    //Problem10;

        // int choice;
        //
        // do {
        //     cout << "\nATM Menu:\n";
        //     cout << "1: Withdraw\n";
        //     cout << "2: Deposit\n";
        //     cout << "3: Check Balance\n";
        //     cout << "4: Exit\n";
        //     cout << "Enter your choice: ";
        //     cin >> choice;
        //
        //     switch (choice) {
        //         case 1:
        //             cout << "Processing withdrawal..." << endl;
        //         break;
        //         case 2:
        //             cout << "Processing deposit..." << endl;
        //         break;
        //         case 3:
        //             cout << "Checking balance..." << endl;
        //         break;
        //         case 4:
        //             cout << "Goodbye!" << endl;
        //         break;
        //         default:
        //             cout << "Invalid option. Please try again." << endl;
        //     }
        // } while (choice != 4);

    //Problem11//     while (true) {
    //         cout << "\nMenu:\n";
    //         cout << "1: Add\n";
    //         cout << "2: Subtract\n";
    //         cout << "3: Multiply\n";
    //         cout << "4: Exit\n";
    //         cout << "Enter your choice (1-4): ";
    //         cin >> choice;
    //
    //         if (choice == 4) {
    //             cout << "Goodbye!" << endl;
    //             break;
    //         }
    //
    //         if (choice >= 1 && choice <= 3) {
    //             double num1, num2, result;
    //             cout << "Enter first number: ";
    //             cin >> num1;
    //             cout << "Enter second number: ";
    //             cin >> num2;
    //
    //             if (choice == 1) {
    //                 result = num1 + num2;
    //                 cout << num1 << " + " << num2 << " = " << result << endl;
    //             }
    //             else if (choice == 2) {
    //                 result = num1 - num2;
    //                 cout << num1 << " - " << num2 << " = " << result << endl;
    //             }
    //             else if (choice == 3) {
    //                 result = num1 * num2;
    //                 cout << num1 << " * " << num2 << " = " << result << endl;
    //             }
    //         }
    //         else {
    //             cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
    //         }
    //     }



    //Problem12

    // int password;
    // int original_password=6534;
    //
    // do {
    //     cout<<"Please enter the password:";
    //     cin>>password;
    //     if (original_password!=password) {
    //         cout<<"The password is incorrect"<<endl;
    //     }
    //     else{
    //         cout<<"Access Granted";
    //     break;
    //
    //     }
    // }
    // while (password!=6534);


// /Problem13
//     int n=645;
//     int guess,attempts=0;
//     while (attempts<=10) {
//         cout<<"Enter your number:"<<endl;
//         cin>>guess;
//         if (guess<n) {
//             cout<<"Too low"<<endl;
//             attempts++;
//
//         }
//         else if (guess>n) {
//             cout<<"Too high "<<endl;
//             attempts++;
//         }
//         else
//             cout<<"Your guess is correct"<<endl;
//
//
//         }




    return 0;
}









