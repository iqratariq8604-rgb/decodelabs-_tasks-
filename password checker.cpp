#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string password;

    cout << "Enter your password: ";
    cin >> password;

    bool hasUpper = false;
    bool hasLower = false;
    bool hasDigit = false;
    bool hasSymbol = false;

    int length = password.length();

    for (int i = 0; i < password.length(); i++)
{
    char ch = password[i];
    
        if (isupper(ch))
            hasUpper = true;
        else if (islower(ch))
            hasLower = true;
        else if (isdigit(ch))
            hasDigit = true;
        else
            hasSymbol = true;
    }

    int score = 0;

    if (length >= 8)
        score++;

    if (hasUpper)
        score++;

    if (hasLower)
        score++;

    if (hasDigit)
        score++;

    if (hasSymbol)
        score++;

    cout << "\n----- Password Analysis -----" << endl;
    cout << "Length: " << length << endl;
    cout << "Uppercase: " << (hasUpper ? "Yes" : "No") << endl;
    cout << "Lowercase: " << (hasLower ? "Yes" : "No") << endl;
    cout << "Numbers: " << (hasDigit ? "Yes" : "No") << endl;
    cout << "Symbols: " << (hasSymbol ? "Yes" : "No") << endl;

    if (score <= 2)
        cout << "\nPassword Strength: Weak" << endl;
    else if (score <= 4)
        cout << "\nPassword Strength: Medium" << endl;
    else
        cout << "\nPassword Strength: Strong" << endl;

    return 0;
}
