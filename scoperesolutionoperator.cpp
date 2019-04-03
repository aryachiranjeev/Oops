#include<iostream>
using namespace std;

int m=10;  //global m

int main(){

int m=20; //local m to main
{
int k=m;
int m=30; //local m to inner block

cout<<"in inner block:"<<endl;
cout<<"k="<<k<<"\n";
cout<<"m="<<m<<"\n";

cout<<"::m="<<::m<<"\n"; //prints global m

}

cout<<"in outer block:"<<endl;
cout<<"m="<<m<<endl;
cout<<"::m="<<::m<<endl;  // again prints global m
return 0;


}


/*output:
in inner block:
k=20
m=30
::m=10
in outer block:
m=20
::m=10

*/
