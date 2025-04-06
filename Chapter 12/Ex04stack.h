#ifndef STACK_H_
#define STACK_H_

typedef unsigned int Item;

class Stack{
private:
    enum {MAX=10};
    Item *pitems;
    int size;
    int top;
public:
    Stack(int n=MAX);
    Stack(const Stack &s);
    ~Stack();
    bool isempty() const;
    bool isfull() const;
    bool push(const Item &item);
    bool pop(Item &item);
    Stack & operator=(const Stack &s);
};

#endif
