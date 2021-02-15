#include <iostream>
using namespace std;
//define a function check_pairs taking 2 arguments a string a and its length "n".
// the function check if pairs of characters occur twice in a string.

void check_pairs (string str, int n)
{
    string d = " ";  // initialize a string "d"
    for (int i=0; i <n-2; i++)
    {
        for (int j= 2+i; j<n; j++)
        {
            if (str[i] == str[j] and str[i+1] == str[j+1])
            {
                d= str.substr(i,2);
                cout << d << "";
            }
        }
    }
}

//Pt2. check pair with zero-terminated array of characters
void check_pairs_c_style(char a[], int n)
{
    for(int i=0 ; i<n-2; i++)
    {
        for(int j=2+i; j<n; j++)
        {
            if(a[i]==a[j] and a[i+1]==a[j+1])
            {
                cout << a[i] << a[i+1] << " ";
            }
        }
    }
}

int main(){

    string str = " "; //initialize a string "a"
    cout << "Enter a string of characters: ";
    cin >> str;

    int n = str.length(); //initialize an integer "n" with the length of string "a"
    cout << "The following pairs occur twice: ";
    check_pairs(str, n); //call the function check_paris on string a and its length n
    cout << endl;

    int n2;
    char str2[n2];
    cout << endl; 
    cout << "Enter the size of the array: ";
    cin >> n2;

    for(int i=0; i<=n2;i++)
    {
        if(i<n2){
            cout << "Enter element " << i+1 << ": ";
            cin >> str2[i];
        }
        else if(i==n2)
        {
            str2[i] = '\0';
        }
    }
    cout << str2 << endl;
    cout << "The following pairs occur twice: "; 
    check_pairs_c_style(str2, n2);
    cout << endl; 

    return 0;
}

