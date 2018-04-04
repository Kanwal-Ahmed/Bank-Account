#include <iostream>
using namespace std;
class bankacc
{
  private:
  int accno;
  int balance;

  public:
  bankacc()
  {
    this->accno = 123456;
    this->balance = 1000000000;
  }
  void display()
  {
    cout << "                                             " << endl;
    cout << "I am a bank account!!!" << endl;
    cout << "My acount number is   " << this->accno << endl;
    cout << "Current balance in my account is  " << this->balance << endl;
    cout << endl;
  }
};