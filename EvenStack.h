#ifndef EVENSTACK_H
#define EVENSTACK_H

#include <iostream>
#include <stack>

// Declare EvenStack CLass
class EvenStack
{
private:
    std::stack<int> stackContainer;     // Store variables within stack

public:
    EvenStack();

    bool empty() const;
    std::size_t size() const;
    int top() const;
    void push(int value);
    void pop();
    void getEvenNumbers(const std::stack<int>& inputStack);     // Get even numbers from stack
    void emptyStack();  // Output stack elements
};

#endif // EVENSTACK_H

