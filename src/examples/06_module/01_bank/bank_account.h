//bank_account.h

class BankAccount
{
public:
    int get_balance(){return balance;}
    void deposit(int amount);
    void withdrawl(int amount);


private:
    int balance{0};
};
