#include <bits/stdc++.h>
#include "StackType.cpp"
using namespace std;

int prec(char c) {
    if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}


int main() {


    //For now just focus on converting the expression from infix to postfix
    string s;
    int t = 4;
    while (t--) {

        string p;
        StackType<char> stack;

        getline(cin, s);

        for (char ch: s) {

            if (ch == ' ') {
                continue;
            } else if (ch == '(') {
                stack.Push(ch);
                p += " ";
            } else if (ch == ')') {
                p += " ";
                while (stack.Top() != '(') {
                    p = p + " " + stack.Top() + " ";
                    stack.Pop();
                }
                stack.Pop();
            } else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
                p += " ";
                while (!stack.IsEmpty() && prec(ch) <= prec(stack.Top())) {
                    p = p + " " + stack.Top() + " ";
                    stack.Pop();
                }
                stack.Push(ch);
            } else if (isdigit(ch)) {
                p += ch;
            }
        }

        // pop all the remaining elements from the stack
        while (!stack.IsEmpty()) {
            p = p + " " + stack.Top();
            stack.Pop();
        }


        int countOperand, countOperator;
        countOperator = countOperand = 0;

        stringstream ss(p);
        string tok;
        while (ss >> tok) {
            if (tok == "+" || tok == "-" || tok == "*" || tok == "/")
                countOperator++;
            else
                countOperand++;
        }

        bool flag = false;
        if (countOperand == countOperator + 1) flag = true;

        if (flag) {
            StackType<double> stk;
            stringstream ss2(p);

            string token;
            while (ss2 >> token) {
                if (token == "+" || token == "-" || token == "*" || token == "/") {

                    double b = stk.Top();stk.Pop();
                    double a = stk.Top();stk.Pop();
                    switch (token[0]) {

                        case '+':
                            stk.Push(a + b);
                            break;
                        case '-':
                            stk.Push(a - b);
                            break;
                        case '*':
                            stk.Push(a * b);
                            break;
                        case '/':
                            stk.Push(a / b);
                            break;
                    }

                } else {
                    stk.Push(stod(token));
                }
            }

            cout << stk.Top() << endl;
        } else {
            cout << "Invalid expression";
        }

    }

    return 0;
}
