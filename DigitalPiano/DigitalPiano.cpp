#include <iostream>
#include <map>
#include <string>
#include <Windows.h> 
#include <conio.h>
#include <cctype>
#include <array>

using namespace std;

map<char, int> piano_keys = {
    {'Q', 261.63},
    {'W', 277.18},
    {'E', 293.66},
    {'R', 311.13},
    {'T', 329.63},
    {'Y', 349.23},
    {'U', 369.99},
    {'I', 415.3},
    {'O', 440},
    {'A', 466.16},
    {'S', 493.88},
    {'D', 523.25},
    {'F', 554.37},
    {'G', 587.33},
    {'H', 622.25},
    {'J', 659.25},
    {'Z', 698.46},
    {'X', 739.99},
    {'C', 783.99},
    {'V', 830.61},
    {'B', 880},
    {'N', 932.33},
    {'M', 987.77}
};


int main()
{
    cout << "Welcome to the digital piano!" << endl;
    cout << "Press a key to play a note, or press 'P' to quit." << endl;
    cout << "Keys: \n";
    for (const auto& elem : piano_keys)
    {
        cout << elem.first << " ";
    }

    char key;
    while (true)
    {
        key = _getch();
        if (toupper(key) == 'P')
        {
            break;
        }

        if (piano_keys.count(toupper(key)) > 0)
        {
            Beep(piano_keys[toupper(key)], 65);
        }
        else
        {
            cout << "Invalid key" << endl;
        }
    }

    return 0;
}
