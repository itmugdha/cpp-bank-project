#include <iostream>
#include <string>
using namespace std;
class Bank{
private:
string name;
long long ac;
long long bala=0;
public:
Bank()
{
}

Bank(string n,long long a,long long b){
name=n;
ac=a;
bala=b;

}
void set_name(string m){
name=m;
}
void set_ac(long long n){
ac=n;
}
long long get_balance(){

return bala;
}

long long deposit(long long am){

if(am<0){
cout<<"Invalid balance ";
return bala;
}
else{

bala+=am;
return bala;
}
}
long long withdraw( long long w){
if(w<=0){
cout<<"invalid amount" ;
return bala;
}

if(w>bala){
cout<<"insufficient balance ";
return bala;
}
else{
bala-=w;

return bala;
}
}
void display (){
cout<<"Name is : "<<name<<endl;
cout<<"Account Number is : "<<ac<<endl;
cout<<"Account balance : "<< bala<<endl;
}
void input()
{
cout<<"Enter your name :";

cin.ignore();
getline(cin,name);
cout<<"Enter your Account number 5 digit 20xxx:";
cin>>ac;
set_name(name);
set_ac(ac);
}
};
int main(){

cout<<"Welcome to ABC Bank";
Bank b;
int option=0;
long long amount;
while(option !=6 )
{
cout << "\n--- Bank Menu ---\n";
cout << "1. Create account\n";
cout << "2. Check Balance\n";
cout << "3. Deposit\n";
cout << "4. Withdraw\n";
cout << "5. Display Account Info\n";
cout << "6. Exit\n";
cout << "Select an option: ";
cin >> option;
switch(option){
case 1:
cout<<"Create account\n";
b.input();
break;
case 2:
cout<<"Check Balance\n"<<b.get_balance()<<endl;

break;  
    case 3:  
    cout<<"Enter ammount to Deposit : ";  
    cin>>amount ;  
    b.deposit(amount);  
    cout<<"Deposit successfully >>>>>";  
    break;  
    case 4:  
    cout<<"Enter ammount to Withdraw :";  
    cin>>amount;  
    b.withdraw(amount);  
    break;  
    case 5:  
    cout<<"Display Account Info\n";  
    b.display();  
    break;  
    case 6:  
    cout << "Exiting program...\n";  
        break;  
    default:  
        cout << "Invalid option! Try again.\n";  
    }

}

return 0;
}
