#include<iostream>
#include<cmath>
using namespace std;

class Stack
{
	public:
		int top=-1;
		char Stack[100];
		int StackInt[100];
		
		
		void push(char val)
		{
			top++;
			Stack[top]=val;
		}
		void pushInt(int val)
		{
			top++;
			StackInt[top]=val;
		}
		void pop()
		{
			top--;
		}
		int popInt()
		{
			return StackInt[top--];
		}
	    int empty()
	    {
	    	return top=-1;
		}
};

Stack j;

int precedence(char c)
{
	if (c=='^'){
		return 4;
	}
	else if(c=='*'||c=='/')
	{
		return 3;
	}
	else if(c=='+'|| c=='-')
	{
		return 2;
	}
	else{
		return 1;
	}
}
string InfixToPostfix(string s)
{
	string res;
	for (int i=0;i<s.size();i++)
	{
		if (s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z'){
			res+=s[i];
		}
		else if(s[i]=='(')
		{
			j.push(s[i]);
		}
		else if (s[i]==')')
		{
			while(j.Stack[j.top]!='(')
			{
				res+=j.Stack[j.top];
				j.pop();
			}
			j.pop();
		}
	else{
		while(!j.empty()&&precedence(j.Stack[j.top])>=precedence(s[i])){
			if(j.Stack[j.top]=='^'&&precedence(j.Stack[j.top])==precedence(s[i]))
			{
				break;
			}
			res+=j.Stack[j.top];
			j.pop();
		}
		j.push(s[i]);
	}
}
while(!j.empty())
{
	res+=j.Stack[j.top];
	j.pop();
	
}
return res;
}
