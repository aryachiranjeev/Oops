#include<iostream>
using namespace std;
class person{

char name[200];
int age;
public:
void getdata(void);
void displaydata(void);
};

void person::getdata(void){
cout<<"enter name";
cin>>name;
cout<<"enter age";
cin>>age;
}

void person::displaydata(void){
cout<<"name is:"<<name;
cout<<"age is:"<<age;
}

int main(){
person p;
p.getdata();
p.displaydata();
return 0;
}
