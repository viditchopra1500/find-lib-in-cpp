#include "./../lib/game.h"
#include <stdio.h> 
#include <dirent.h> 
#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cout<<"Give file to search:";
	cin>>str;
	cout<<"Give relative path from this file of the directory you want to search the file in:";
	char s[100];
	cin>>s;
	cout<<"The relative path for the file you wanted to search from the current directory\n";
	foo(s,str);
}