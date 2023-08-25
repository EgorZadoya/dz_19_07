#include <iostream>
#include <vector>

using namespace std;

class Conteiner {
protected:
    vector <int> stack;
    int max;
    int current;
public:
    Conteiner() : max{0}, current {0}{}
    virtual void push(int value) = 0;
    virtual void pop() = 0;
    virtual void show() = 0;
};

class Stack : public Conteiner {
public:
    Stack() : Conteiner(){}
    bool is_empty() { return current == 0; }
    bool is_full() { return current == max; }
    void push(int value) {
        stack.push_back(value);
        max++;
        current++;
    }
    void pop() {
        stack.pop_back();
        max--;
        current--;
    }
    void show() {
        for (int i = 0; i < stack.size(); i++) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
};

class Queue : public Conteiner {
public:
    Queue() : Conteiner() {}
    bool is_empty() { return current == 0; }
    bool is_full() { return current == max; }
    void push(int value) {
        stack.insert(stack.begin(),value);
        max++;
        current++;
    }
    void pop() {
        stack.pop_back();
        max--;
        current--;
    }
    void show() {
        for (int i = 0; i < stack.size(); i++) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Conteiner* c1 ;
    c1 = new Queue;
    c1->push(12);
    c1->push(11);
    c1->push(10);
    c1->show();
    c1->pop();
    c1->show();



    delete c1;
}