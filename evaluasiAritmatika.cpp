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
    vector<char>::iterator it = find(range.begin(), range.end(), ch);;

    return it - range.begin() < (long int) range.size();
}

string removeWhitespace(string str){

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