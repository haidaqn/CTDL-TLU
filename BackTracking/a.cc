#include <iostream>
using namespace std;
int c = 0;
int fibo(int n) {
  if (n == 1 || n == 2)
    return 1;
  return fibo(n - 2) + fibo(n - 1);
}
void THN(int N, string c1, string c2, string c3)
{
  if (N == 1)
  {
    c++;
    cout<<c<<": "<<c1<<" --> "<<c3<<endl;
  }
  else{
    THN(N-1, c1, c3, c2);
    THN(1, c1, c2, c3);
    THN(N-1, c2, c1, c3);
  }
}
void InMang(int a[], int N)
{
  for(int i = 0; i<N; i++)
  {
    if (a[i]<=9)
      cout<<a[i];
    else{
      cout<<char('A' + a[i] - 10);
    }
  }
  cout<<endl;
}
void GenHX(int i, int N, int a[])
{
  if (i > N-1)
  {
    InMang(a, N);
  }
  else
  {
    for(int k = 0; k<= 15; k++)
    {
      a[i] = k;
      GenHX(i+1, N, a);
    }
  }
}
void GenTP(int i, int N, int a[])
{
  if (i > N-1)
  {
    InMang(a, N);
  }
  else
  {
    for(int k = 0; k<= 9; k++)
    {
      a[i] = k;
      GenTP(i+1, N, a);
    }
  }
}
void Gen(int i, int N, int a[])
{
  if (i > N-1)
  {
    InMang(a, N);
  }
  else
  {
    a[i] = 0;
    Gen(i+1, N, a);
    a[i] = 1;
    Gen(i+1, N, a);
  }
}
int main() 
{ 
  //THN(4, "Coc 1", "Coc 2", "Coc 3");
  int N = 2;
  int a[100];
  //Gen(0, N, a);
  //GenTP(0, N, a);
  GenHX(0, N, a);
}