#include <iostream>
#include <fstream>
#include "../head/Stack.h"

using namespace std;

/**
 * Unit tests the {@code Stack} data type.
 *
 * @param args the command-line arguments
 */
int main() {
    ifstream file("./data/tobe.txt");
    Stack<string> stack;
    string tmp;
    while (file >> tmp) {
        if (tmp != "-") stack.push(tmp);
        else if (!stack.isEmpty()) cout << stack.pop() << " ";
    }
    cout << "(" << stack.size() << " left on stack)" << endl;
}
// adding some more problems like implementing stack using queue
/* Program to implement a stack  
using two queue */
#include <bits/stdc++.h> 
using namespace std; 
  
class Stack { 
    queue<int> q1, q2; 
    int curr_size; 
  
public: 
    Stack() 
    { 
        curr_size = 0; 
    } 
  
    void pop() 
    { 
        if (q1.empty()) 
            return; 
  
        // Leave one element in q1 and 
        // push others in q2. 
        while (q1.size() != 1) { 
            q2.push(q1.front()); 
            q1.pop(); 
        } 
  
        // Pop the only left element 
        // from q1 
        q1.pop(); 
        curr_size--; 
  
        // swap the names of two queues 
        queue<int> q = q1; 
        q1 = q2; 
        q2 = q; 
    } 
  
    void push(int x) 
    { 
        q1.push(x); 
        curr_size++; 
    } 
  
    int top() 
    { 
        if (q1.empty()) 
            return -1; 
  
        while (q1.size() != 1) { 
            q2.push(q1.front()); 
            q1.pop(); 
        } 
  
        // last pushed element 
        int temp = q1.front(); 
  
         
        q1.pop(); 
   
        q2.push(temp); 
  
        // swap the two queues names 
        queue<int> q = q1; 
        q1 = q2; 
        q2 = q; 
        return temp; 
    } 
  
    int size() 
    { 
        return curr_size; 
    } 
}; 
  
 
int main() 
{ 
    Stack s; 
    s.push(1); 
    s.push(2); 
    s.push(3); 
    s.push(4); 
  
    cout << "current size: " << s.size() 
         << endl; 
    cout << s.top() << endl; 
    s.pop(); 
    cout << s.top() << endl; 
    s.pop(); 
    cout << s.top() << endl; 
    cout << "current size: " << s.size() 
         << endl; 
    return 0; 
} 
