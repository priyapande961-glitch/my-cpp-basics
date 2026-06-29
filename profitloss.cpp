//profit loss
#include <iostream>
using namespace std;
int main() {
   int cp;
   cout<<"enter cost price: " <<endl;
   cin>>cp;
   int sp;
   cout<<"enter selling price here: "<<endl;
   cin>>sp;
   if (sp>cp) cout<<"profit";
   if (cp>sp) cout<<"loss";
  { if (cp==sp) cout<<"none";}
}
