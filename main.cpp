#include <iostream>
#include <cmath>

using namespace std;
int main() {
    //  //Problem1.1
    //  // //for (int i=1;i<=10;i++) {
    //  // // cout<<i<<" ";
    //  //   }

    //Problem1.2
    // int N;
    //     cout<<"Enter the N:";
    // cin>>N;
    //
    // for (int i=1;i<=N;i++) {
    //     cout<<i<<" ";

    //Problem1.3
    // int sum = 0;
    // for (int i = 1; i <= 10; i++) {
    //     sum += i;
    // }
    // cout << sum;

    //Problem1.4
    // int N,sum=0;
    // cout<<"Enter the N:";
    // cin>>N;
    // for (int i = 1; i<=N; i++) {
    //     sum += i;
    // }
    // cout<<sum;

    //Problem1.5
    // int sum=0;
    // for (int i = 1; i<=10; i++) {
    //     sum += i;
    // }
    // cout<<sum/10.0;

    //Problem1.6

    // int sum=0;
    // float N;
    // cin>>N;
    // for (int i=1; i <= N;i++) {
    //     sum += i;
    // }
    // cout<<sum/N;



    //Problem2.1
    // for (int i=1;i<=10;i+=2) {
    //     cout<<i<<" ";
    // }

    //Problem2.2
    // for (int i=2;i<=10;i+=2) {
    //     cout<<i<<" ";
    // }

    //Problem2.3
    // int N;
    // cin>>N;
    // for (int i=1;i<=N;i+=2) {
    //     cout<<i<<" ";

    //Problem2.4

    // int N;
    // cin>>N;
    // for (int i=2;i<=N;i+=2) {
    //     cout<<i<<" ";
    // }

    //Problem2.6
    // int N;
    // cin>>N;
    // for (int i=10;i<=N;i+=10) {
    //     cout<<i<<" ";


    //Problem2.5
    // for (int i=10;i<=100;i+=10) {
    //     cout<<i<<" ";
    // }

    //Problem3
    // int count=0;
    // for (char string='A';string<='Z';string++) {
    // count++;
    //     if (string%5==0)
    //     cout<<endl;
    //     cout<<string<<' ';

    //Problem4;
    // int N, factorial=1;
    // cout<<"Enter the number:";
    // cin>>N;
    //
    // for (int i=N; i>=1; i--) {
    //     factorial *= i;
    //
    // }
    // cout<<factorial;


    //schoolswtich
    // int a,b,result=0,oper;
    // cout<<"Enter the numbers:";
    // cin>>a>>b;
    // cout<<"1:a+b\n2:a-b\n3:a*b\n4:a/b"<<endl;
    // cout<<"Enter the operators:";
    // cin>>oper;
    //
    // switch (oper) {
    //     case 1:
    //         result=a+b;
    //     break;
    //     case 2:
    //     result=a-b;
    //     break;
    //     case 3:
    //         result=a*b;
    //     break;
    //     case 4:
    //     result=a/b;
    //     break;
    //     default:
    //         cout<<"INVALID OPERATORS"<<endl;
    // }
    // cout<<result<<endl;


    //Problem5
    // int class_number,credits,total_credits=0;
    // float grade,total_mark=0;
    // cin>>class_number;
    // for (int i=1;i<=class_number;i++) {
    //     cout<<"Please enter the credits:";
    //     cin>>credits;
    //     total_credits+=credits;
    //     cout<<total_credits;
    // }
    // for (float i=1;i<=class_number;i++) {
    //     cout<<"Please enter the grade: ";
    //     cin>>grade;
    //     total_mark+=credits*grade;
    //     cout<<total_mark;
    // }
    // cout<<total_mark/total_credits;

    //Problem6
    //Problem7
    // int size;
    //
    //
    //     cout << "Enter the size of the square: ";
    //     cin >> size;
    //
    //
    //     for (int i = 0; i < size; i++) {
    //         for (int j = 0; j < size; j++) {
    //             cout << "*";
    //         }
    //         cout << endl;
    //     }
    //

    //Problem8
        // int n;
        // cout << "Enter the number of rows: ";
        // cin >> n;
        //
        // for (int i = 1; i <= n; i++) {
        //     for (int j = 1; j <= i; j++) {
        //         cout << "*";
        //     }
        //     cout << endl;
        // }
    //Problem9
        // int num, i;
        // bool isPrime = true;
        //
        // cout << "Enter a number: ";
        // cin >> num;
        //
        // if (num <= 1) {
        //     isPrime = false;
        // } else {
        //     for (i = 2; i * i <= num; i++) {
        //         if (num % i == 0) {
        //             isPrime = false;
        //             break;
        //         }
        //     }
        // }
        //
        // if (isPrime)
        //     cout << num << " is a prime number." << endl;
        // else
        //     cout << num << " is not a prime number." << endl;

    //Problem10
    //      int n, sum = 0;
    // cout << "Enter the value of n: ";
    // cin >> n;
    //
    // for (int i = 1; i <= n; i++) {
    //         cout << i << " * " << i << " = " << (i * i) << endl;
    //         sum += (i * i);
    //     }
    // cout << "Sum of the series: " << sum << endl;

    //Problem12
    // int n, reversed = 0;
    //
    //     cout << "Enter a number: ";
    //     cin >> n;
    //
    //     cout << "Output: ";
    //     while (n > 0) {
    //         cout << n % 10;
    //         n /= 10;
    //     }
    //     cout << endl;

    //Problem13
// ;       int n;
//
//         cout << "Enter a number: ";
//         cin >> n;
//
//         if (n == 0) {
//             cout << "The depth is 0" << endl;
//         } else {
//             for (int i = 1; i <= n; i++) {
//                 for (int j = 1; j <= i; j++) {
//                     cout << i;
//                 }
//                 cout << endl;
//             }
//         }

    //Problem14
    // long long binary;
    //     int decimal = 0, i = 0, digit;
    //
    //     cout << "Enter a binary number: ";
    //     cin >> binary;
    //
    //
    //     long long temp = binary;
    //     int length = 0;
    //
    //     for (; temp > 0; temp /= 10) {
    //         length++;
    //     }


        // for (temp = binary, i = 0; i < length; temp /= 10, i++) {
        //     digit = temp % 10;
        //     decimal += digit * pow(2, i);
        // }
        //
        // cout << "The decimal number is " << decimal << endl;



        return 0;
    }


