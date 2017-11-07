#include <stdio.h>
#include <iostream>

using namespace std;
int main()
{
    //int answer = 0; 
    string text = "";
   // char buchstabe;
    
    std::cout <<"Bist du die Mutter von Maris? " << std::endl;
   // std::cin >> buchstabe;
    getline(cin, text);

if(text[0] == 'j' && text[1] == 'a')
//if (text=="ja")
    std::cout << " Du hast den tollsten Sohn der Welt " << std::endl;
else if  (text[0] == 'n' && text[1] == 'e' && text[2] == 'i' && text[3] == 'n') 
    std::cout << " Tut mir leid für dich :`( " << std::endl;
else 
    std::cout << " Bitte nur mit ja oder nein antworten" << std::endl; 
    
   return 0;
}
