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
	string input;
	getline(cin,input);
	
	vector<string> infix = convertToInfix(removeWhitespace(input));
	vector<string> postfix = convertToPostfix(infix);
	cout << evaluateOperation(postfix) << endl;
	
	return 0;
}

bool check(char ch, vector<char> range){
    vector<char>::iterator it = find(range.begin(), range.end(), ch);;

    return it - range.begin() < (long int) range.size();
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
    if(op == "%" || op == "*" || op == "/"){
        result = 3;
    }else if(op == "+" || op == "-"){
        result = 4;
    }
}

vector<string> convertToPostfix(vector<string> infix){

}

double evaluateOperation(vector<string> postfix){

}

double doOperation(double a, double b, string op){
	double result;
    if(op == "+"){
        result = b + a;
    }else if(op == "-"){
        result = b - a;
    }else if(op == "*"){
        result = b * a;
    }else if(op == "/"){
        result = b / a;
    }else if(op == "%"){
        result = (int) b % (int) a;
    }
    
    return result;
}
