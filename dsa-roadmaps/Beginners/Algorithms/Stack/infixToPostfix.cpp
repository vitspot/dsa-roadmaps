#include <iostream>
#include <string>

using namespace std;

string infix, postfix = "";
char stack[100], ch;
int top = -1, i, temp;

bool isOperator(char);
bool isOperand(char);
int comparision(char);
void push(char);
char pop();

int main()
{
    cout << "Enter the infix expression ? " << endl;
    getline(cin, infix);
    for (i = 0; i < infix.length(); i++)
    {
        if (infix[i] == ' ')
        {
            continue;
        }
        else if (isOperand(infix[i]))
        {
            postfix += infix[i];
        }
        else if (infix[i] == '(')
        {
            push(infix[i]);
        }
        else if (infix[i] == ')')
        {
            while ((temp = pop()) != '(')
            {
                postfix += temp;
            }
        }
        else if (infix[i] == '{')
        {
            push(infix[i]);
        }
        else if (infix[i] == '}')
        {
            while ((temp = pop()) != '{')
            {
                postfix += temp;
            }
        }
        else if (infix[i] == '[')
        {
            push(infix[i]);
        }
        else if (infix[i] == ']')
        {
            while ((temp = pop()) != '[')
            {
                postfix += temp;
            }
        }
        else if (isOperator(infix[i]))
        {
            while (comparision(stack[top]) >= comparision(infix[i]))
            {
                temp = pop();
                postfix += temp;
            }
            push(infix[i]);
        }
    }
    while (top != -1)
    {
        temp = pop();
        postfix += temp;
    }
    cout << "Postfix expression: " << postfix << endl;
    return 0;
}

bool isOperator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^' || ch == '$')
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isOperand(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int comparision(char ch)
{
    if (ch == '+' || ch == '-')
    {
        return 1;
    }
    else if (ch == '*' || ch == '/')
    {
        return 2;
    }
    else if (ch == '^' || ch == '$')
    {
        return 3;
    }
    else
    {
        return 0;
    }
}

void push(char ch)
{
    top = top + 1;
    stack[top] = ch;
}

char pop()
{
    if (top == -1)
    {
        return -1;
    }
    else
    {
        return stack[top--];
    }
}
