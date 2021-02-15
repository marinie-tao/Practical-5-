// Ex. 1  function that check whether a given string contains only digits (i.e. only characters that correspond- ing to numbers)

#include <iostream>
using namespace std;

// declare a void only_digits function taking 2 arguments
// first argument --> string str --> is the word that the user will enter
// second arguemnt --> length n --> is the length of the string
void only_digits (string str, int n)
{
    for (int i=0; i<n; i++)
    {
        if (str.at(i)>='0' && str.at (i)<= '9')
        {
            cout << "The " << i+1 << "th character is a digit: " << str[i] << endl;
        }
    }
}

int main ()
{
    string str; // declaration of string str
    cout << "Enter a string to check if it contains digits: ";
    cin >> str; // assign a string to str
    int length = str.length (); // declaration and initialization of length as lenght of the string

    only_digits(str, length); //function call
    return 0;

}


