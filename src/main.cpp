/*
 Amerike university
 Author: Julio López
 Practica #: 7
 Fecha: 28/02/25
 Description: This program shall ask the user a number from  to 15, a name with no more than 10 characters, and a number divisble by 7
*/

#include <iostream>
using namespace std;
int main(){
int N;
string name = "abcdefghijk";
int by7 = 6;

while (N<5 || N>15)
{
    cout << "Write a number between 1 to 15 ";
    cin >> N;
}


while(name.length()>10)
{
    cout << "Write your name in less than 10 letters ";
    cin >> name;
}
while(by7 % 7!=0)
{
    cout << "Choose a number thhat can be divided by 7 ";
    cin >> by7;
}
return 0;
}