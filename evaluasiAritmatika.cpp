#include <bits/stdc++.h>
using namespace std;

bool check(char ch, vector<char> range);
vector<string> convertToInfix(string input);
string removeWhitespace(string str);
int checkPrecedence(char op);
vector<string> convertToPostfix(vector<string> infix);
double doOperation(double a, double b, string op);
double evaluateOperation(vector<string> postfix);

int main(){

}

bool check(char ch, vector<char> range){

}

string removeWhitespace(string str){
	vector<char> op = {'+','*','/','-','%','(',')'};

	string::iterator i = str.begin();
	string result;

	while(i != str.end()){
		if(isdigit(*i) || check(*i,op)){
			result.push_back(*i);
		}

		i++;
	}

	return result;
}

vector<string> convertToInfix(string input){

}

int checkPrecedence(string op){

}

vector<string> convertToPostfix(vector<string> infix){

}

double evaluateOperation(vector<string> postfix){

}

double doOperation(double a, double b, string op){
	
}