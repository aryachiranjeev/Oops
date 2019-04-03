#include<iostream>
using namespace std;
int main(){

int size;
cout<<"enter size:";
cin>>size;

//dynamic allocation using new
cout<<"creating an array of size:"<<size<<endl;
int *arr=new int[size];

cout<<"successfully dynamic allocation done"<<endl;

// delete array;

delete arr;
return 0;
}
/*output

enter size:10
creating an array of size:10
successfully dynamic allocation done
*/
