#include <iostream>
const float CONVERT = 10;
int main()
{
     using namespace std;
     cout << "Enter your height in inches(int):____\b\b\b\b";
     int height;
     cin >> height;
     cout << "You are " << height << " inches or " << height /CONVERT << " feets tall!\n";
     cin.get();
     cin.get();
     return 0;
}     
