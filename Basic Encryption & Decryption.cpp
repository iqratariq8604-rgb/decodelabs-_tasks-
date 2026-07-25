#include <iostream>
#include <string>

using namespace std;

int main()
{
    string text;
    int key;

    cout << "===== Basic Encryption & Decryption =====" << endl;

    cout << "Enter text: ";
    getline(cin, text);

    cout << "Enter key (1-25): ";
    cin >> key;

    string encrypted = "";
    string decrypted = "";

    // Encryption
    for (int i = 0; i < text.length(); i++)
    {
        char ch = text[i];

        if (ch >= 'A' && ch <= 'Z')
        {
            ch = ((ch - 'A' + key) % 26) + 'A';
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            ch = ((ch - 'a' + key) % 26) + 'a';
        }

        encrypted += ch;
    }

    // Decryption
    for (int i = 0; i < encrypted.length(); i++)
    {
        char ch = encrypted[i];

        if (ch >= 'A' && ch <= 'Z')
        {
            ch = ((ch - 'A' - key + 26) % 26) + 'A';
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            ch = ((ch - 'a' - key + 26) % 26) + 'a';
        }

        decrypted += ch;
    }

    cout << "\nOriginal Text  : " << text << endl;
    cout << "Encrypted Text : " << encrypted << endl;
    cout << "Decrypted Text : " << decrypted << endl;

    return 0;
}
