#include<iostream>
using namespace std;
int main(){
int intvar=24;
float floatvar=42.4234;
cout<<"intvar="<<intvar<<endl;
cout<<"floatvar="<<floatvar<<endl;
cout<<"float(intvar)="<<float(intvar)<<endl;
cout<<"int(floatvar)="<<int(floatvar)<<endl;
return 0;
}
/* output:

intvar=24
floatvar=42.4234
float(intvar)=24
int(floatvar)=42

*/
