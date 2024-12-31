#include <iostream>
//iknow its misspelled
class Stove
{
    private:
        int tempature = 0;
    public:

    int getTempature()
    {
        return tempature;
    }
    void setTempature(int Tempature)
    {
        this->tempature = Tempature;
    }

};

int main()
{
    Stove stove;

    std::cout << stove.getTempature();

    return 0;
}