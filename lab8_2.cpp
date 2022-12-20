#include <iostream>
#include<string>
using namespace std;

int main(){
    int num;
    string day;
    string sy;
    string mov;
    string name;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?" << "\n";
    getline(cin,name);
    cout << "?????: ";
    cout << "Fahsai: Wow!!! " << name << " is a really cool name." << "\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?" << "\n";
    cin >> num;
    cin.ignore();
    cout << name << ": ";
    string str = to_string(num);
    string first = str.substr(0,2);
    int firt_int = stoi(first);
    cout << "Fahsai: I think you may be GEAR " << firt_int - 12 << ". I have a free movie ticket for you." << "\n";
    cout << "Fahsai: Let's go to the cinema together!!!" << "\n";
    cout << "Fahsai: What movie do you want to watch?" << "\n";
    getline(cin,mov);
    cout << name << ": ";
    cout << "Fahsai: So....which day are you free to go with me?\n";
    getline(cin,day);
    cout << name << ": ";
    cout << "Fahsai: " << day << "....that is OK!!! I'm looking forward to watching " << mov << " with you.\n";
    getline(cin,sy);
    cout << name << ": ";
    cout << "Fahsai: 555+ see you " << day << ". Bye Bye \\(^ ^)/";
}