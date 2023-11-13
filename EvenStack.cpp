#include "EvenStack.h"

using namespace std;

EvenStack::EvenStack() {}

// Check for empty stack
bool EvenStack::empty() const
{
    return stackContainer.empty();
}

// Get number of elements in stack
size_t EvenStack::size() const
{
    return stackContainer.size();
}

// get top elements of stack
int EvenStack::top() const
{
    if (!stackContainer.empty())
    {
        return stackContainer.top();
    }

    else
    {
        cerr << "Stack is empty. Unable to retrieve the top element." << endl;
        return -1;
    }
}

// Function pushing numbers onto stack
void EvenStack::push(int value)
{
    if (value % 2 == 0)
    {
        stackContainer.push(value);
    }
    else
    {
        cerr << "Error - can only push even numbers" << endl;
        cout << "Removing the following:  " << endl;
    }
}

// Function to pop the top element
void EvenStack::pop()
{
    if (!stackContainer.empty())
    {
        stackContainer.pop();
    }
    else
    {
        cerr << "Error: Attempted to pop from an empty stack." << endl;
    }
}

// Function pushing even numbers
void EvenStack::getEvenNumbers(const stack<int>& inputStack)
{
    stack<int> tempStack = inputStack;
    stack<int> evenNumbers; // Auxiliary stack to store even numbers in reverse order

    // Find and store even numbers in reverse order
    while (!tempStack.empty())
    {
        int current = tempStack.top();
        tempStack.pop();

        if (current % 2 == 0)
        {
            evenNumbers.push(current);
        }
    }

    // Push even numbers back onto the main stack to preserve order
    while (!evenNumbers.empty())
    {
        stackContainer.push(evenNumbers.top());
        evenNumbers.pop();
    }
}

// Function emptying stack elements
void EvenStack::emptyStack()
{
    while (!stackContainer.empty())
    {
        int current = stackContainer.top();
        cout << current << " ";
        stackContainer.pop();
    }
    cout << endl;
}
