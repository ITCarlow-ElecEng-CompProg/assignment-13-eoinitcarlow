//preprocessor directives
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

//Main Function
int main()
{
    //Variable Declarations
    long int checkPrime, i, j;

    //creating and outputting on text file
	ofstream primeNumber( "primeNumber.txt", ios::out );

	//default, file will not open if issue
	if ( !primeNumber )
	{
		cerr << "File could not be opened!" << endl;
		exit( 1 );
	}

	//outputting text to both command window and text file
    cout << "Check if a Number is Prime\n\n" << endl;;
    primeNumber << "Check if a Number is Prime\n\n" << endl;;

    //prompting user to enter value
    cout << "Enter number to be checked :\t" << endl;
    //storing value under checkPrime
    cin >> checkPrime;


    //for loop to check each value from 2 upto number entered
    for(i=2; i<=checkPrime; i++)
    {

            //for loop to check if number is prime
            for (j = 2; j <= i; j++)
            {
            if (i % j == 0)
            break;
            }
            if (j == i)
            {
            //displaying prime numbers on command window and text file
            cout << "\n" << i << " is a prime number.\n" ;
            primeNumber << "\n" << i << " is a prime number.\n" ;
            }
    }


	primeNumber.close();

    return 0;
}



