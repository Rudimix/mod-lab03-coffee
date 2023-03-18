#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Automata {
public:
    Automata();
    enum State {
        OFF,
        WAIT,
        ACCEPT,
        CHECK,
        COOK
    };
    void on();
    void off();
    void coin(int money);
    void printMenu();
    void choice(int item);
    void cancel();
    void cook();
    void finish();
    Automata::State getState();
    int getCash();
private:
    State state;
    vector<string> menu;
    vector<int> prices;
    int cash;
    int choice_;
    int current_price;
};
