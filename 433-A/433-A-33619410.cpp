#include <iostream>
using namespace std;

int main()
{
  int n,i,x,one=0,two=0;
  cin>>n;
  for (i=0;i<n;i++){
    cin>>x;
    if (x==100)
      one++;
    else
      two++;
  }
  if (two%2==0){
    if (one%2==0)
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;
  }
  else{
    if ((one-2)%2==0 && one>=2)
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;
  }
  return 0;
}