//print the array and display the total tea served
#include<iostream>
using namespace std;

int totalservedchai(int chai[],int size)
{
   int total=0;
   for(int i=0;i<size;i++)
   {
    total += chai[i];
   }
    return total;
}

int main()
{
    int servedchai[7]={45,40,56,50,60,45,60};

    int total = totalservedchai(servedchai,7);
    cout << "total served chai is: " <<totalservedchai(servedchai,7);
    return 0;
}