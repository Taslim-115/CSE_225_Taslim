#include <iostream>
#include <stack>
#include <string>
#include <sstream>


using namespace std;

// Class to check if parentheses are balanced
class ParenthesesChecker {
public:
    // Function to check if parentheses are balanced
    static bool isBalanced(const string& parentheses) {
        stack<char> stack;
        for (char ch : parentheses) {
            if (ch == '(') {
                stack.push(ch);
            } else if (ch == ')') {
                if (stack.empty()) {
                    return false;
                } else {
                    stack.pop();
                }
            }
        }
        // If stack is empty, parentheses are balanced
        return stack.empty();
    }
};

int main() {

    // Test cases


    string s = " 10 5  ++  6 8 9 ";
    stringstream  ss (s);
    string token;
    while (ss >> token ){
         cout << token << endl;
    }


    return 0;
}



