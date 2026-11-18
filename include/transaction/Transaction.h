#include<string>
#include <cstdint>

class Transaction{//класс
private:
    int id;
    std::int64_t amount;
    std::string description;

public:
    Transaction(int id, std::int64_t amount,std::string description){// конструктор чтобы делать так Transaction(2,10,сорок4)
        this->id = id;
        this->amount = amount;
        this->description = description;
    }


    //можно иначе Transaction(int id, std::int64_t amount, std::string description) : id(id), amount(amount), description(description){}
};