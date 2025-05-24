#include<iostream>
void sum(int a,int b);
int main()
{
        int x;
        int y;
        cout<<"Enter the value of x and y"<<endl;
        cin>>x>>y;
        sum(x,y);
        return 0;
}
void sum(int a,int b)
{
  int add;
  add=a+b;
  cout<<"The sum of the two number"<<add<<endl;
}
