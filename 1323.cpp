#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stack>
using namespace std;
bool omit(char* s, int l) {
  if (l == 0)return true;
  for (int i = 0; i < l; i++) {
    if (s[i] != ' ')return false;
  }
  return true;
}
void op(char* s, int l) {
  int i;
  stack<char> con;
  for (i = 0; i < l / 2; i++)con.push(s[i]);
  if (l % 2 != 0)con.push(s[i++]);
  while (!con.empty()) {
    cout<<con.top();
    con.pop();
  }
  for (; i < l; i++)con.push(s[i]);
  while (!con.empty()) {
    cout<<con.top();
    con.pop();
  }
  cout<<endl;
}
int main() {
  char s1[100], s2[100];
  int l1, l2, i;
  stack<char> con;
  while (gets(s1)) {
    gets(s2);
    l1 = strlen(s1);
    l2 = strlen(s2);
    if (!(omit(s2, l2)))op(s2, l2);
    if (!(omit(s1, l1)))op(s1, l1);
  }
  system("pause");
  return 0;
}
