#include <bits/stdc++.h>
#include "StackType.cpp"

using namespace std;

int prec(string c) {
    if (c == "/" || c == "*")
        return 2;
    else if (c == "+" || c == "-")
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
        StackType<string> stack;
        getline(cin, s);
        stringstream ss2(s);
        string ch;

        while (ss2 >> ch) {


            //cout << ch << endl;

            if (ch == "(") {
                stack.Push(ch);

            } else if (ch == ")") {
                while (stack.Top() != "(") {
                    p = p + " " + stack.Top();
                    stack.Pop();
                }
                stack.Pop();
            } else if (ch == "+" || ch == "-" || ch == "*" || ch == "/") {
                while (!stack.IsEmpty() && prec(ch) <= prec(stack.Top())) {
                    p = p + " " + stack.Top();
                    stack.Pop();
                }
                stack.Push(ch);
            } else {
                p = p + " " + ch;
            }
        }

        // pop all the remaining elements from the stack
        while (!stack.IsEmpty()) {
            p = p + " " +stack.Top();
            stack.Pop();
        }

        //cout << p << endl;

        int countOperand, countOperator;
        countOperator = countOperand = 0;

        stringstream ss1(p);
        string tok;
        while (ss1 >> tok)
        {
            if (tok == "+" || tok == "-" || tok == "*" || tok == "/" )
                    countOperator++;
                else
                    countOperand++;
        }
//            for (char ch: p) {
//                if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '(' || ch == ')')
//                    countOperator++;
//                else
//                    countOperand++;
//
//            }

        bool flag = false;
        if (countOperand == countOperator + 1) flag = true;

        if (flag) {
            StackType<double> stk;
            stringstream ss(p);
            for (char ch: p) {
                if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {


                }
            }
            string token;
            while (ss >> token) {
                if (token == "+" || token == "-" || token == "*" || token == "/") {
                    double a, b;
                    b = stk.Top();
                    stk.Pop();
                    a = stk.Top();
                    stk.Pop();
                    const char *c = token.c_str();
                    switch (*c) {

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
                    stk.Push(stoi(token));
                }
            }

            cout << stk.Top() << endl;
        } else {
            cout << "Invalid expression" << endl;
        }


    }


    return 0;
}
