#include <iostream>
#include "Skital.h"
#include <string>
using namespace std;

void checkskit(string Text, const int key, const int chto)
{
    try {
        string SkitalText;
        Swap Skital (key);
        if(chto == 0)
            SkitalText = Skital.decrypt(Text);
        if(chto == 1)
            SkitalText = Skital.encrypt(Text);
        cout << endl << endl;
    } catch (const cipher_error & e) {
        cerr<<"Error: "<<e.what()<<endl;
    }
}
int main()
{
    string text1;
    int chto;
    int kluch;
    cout << "Введите фразу для дешивровки - ";
    cin >> text1;
    cout << endl;
    cout << "Введите ключ - ";
    cin >> kluch;
    cout << "Хотите ли вы зашифровать или дешифровать текст ? [1/0]" << endl;
    cin >> chto;
    cout << endl;
    checkskit(text1,kluch,chto);
    return 0;
}
