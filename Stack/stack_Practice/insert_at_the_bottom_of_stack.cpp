#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &st, int &element)
{
    // base case
    if (st.empty())
    {
        // stack is empty then push the element at thbe bottom
        st.push(element);
        return;
    }

    // 1 case solution
    int temp = st.top();
    st.pop();

    // recursive call
    insertAtBottom(st, element);

    // backtracking
    st.push(temp);
}

void reverseStack(stack<int> &st)
{
    // base case
    if (st.empty())
    {
        return;
    }

    // 1 case solution'
    int temp = st.top();
    st.pop();

    // recursive call
    reverseStack(st);

    // backtracking
    insertAtBottom(st, temp);
}

// insert at sorted stack

void insertAtSorted(stack<int> &st, int &element)
{
    // base case
    if (st.empty() || st.top() < element)
    {
        st.push(element);
        return;
    }

    // 1 case solution
    int temp = st.top();
    st.pop();

    // recursive call
    insertAtSorted(st, element);

    // backtracking
    st.push(temp);
}

void sorttheStack(stack<int> &st)
{
    // base case
    if (st.empty())
    {
        return;
    }

    // 1 case solution
    int temp = st.top();
    st.pop();

    // recursive call
    sorttheStack(st);

    // backtracking
    insertAtSorted(st, temp);
}

void printstack(stack<int> &st)
{
    int size = st.size();
    cout << "stack is : " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main()
{

    stack<int> st;
    st.push(10);

    st.push(30);
    st.push(20);
    st.push(2);
    // int element = 300;

    // insertAtBottom(st, element);

    // let's print the stack
    // printstack(st);

    // reverse stack
    //  reverseStack(st);

    // print stack after reverse;

    // let's insert in an sorted stack
    //  int element = 24;
    //  insertAtSorted(st, element);

    // sort the stack
    sorttheStack(st);
    printstack(st);

    return 0;
}