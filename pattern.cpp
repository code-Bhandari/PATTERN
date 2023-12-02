#include <iostream>

using namespace std;

int main()
{
    for (int i = 0 ; i<=5 ; i++)
    {
       for(int j = i ; j<=5;j++)
       {
          cout<<"*";
       }
       cout<<" "<<endl;
    }
    return 0;
}

******
*****
****
***
**
*

int main()
{
   int n = 5;
    for (int i = 0 ; i<n ; i++)
    {
       for(int j = 0 ; j<=i ; j++)
       {
          cout<<"*";
       }
       cout<<" "<<endl;
    }
    return 0;
}

*
**
***
****
*****
******

#include <iostream>

using namespace std;

int main()
{
   int n = 5,k= 0;
    for (int i = 1 ; i<=n ; i++)
    {
       for(int j = 1 ; j<=n-i ; j++)
       {
          cout<<" ";
       }
          while(k=1;k<=2*i-1;k++){
             cout<<"*";
          }
       
       cout<<endl;
    }
    return 0;
}

    *
   ***
  *****
 *******
*********

#include <iostream>

using namespace std;

int main()
{
   int n = 5;
    for (int i = n ; i>=1 ; --i)
    {
       for(int s=0;s<n-i;++s)
       cout<<" ";
       for(int j=i;j<=2*i-1;++j)
       cout<<"* ";
       for(int j=0;j<i-1;++j)
       cout<<"* ";
       cout<<" "<<endl;
    }
    return 0;
}
//you can use this code also.
#include<iostream>
using namespace std;
int main()
{
    n=10;
    for(i=n;i<=1;i++)
    {
        for(j=1;j<=n-i;j++)
            cout<<" ";
    }
    for(k=1;k<=2*i-1;k++)
    {
        cout<<"*";
    }
    cout<<endl;
    
    return 0;
}


*******
 *****
  ***
   *

******************************REVISION**************************
int n=5;
    for (int k = 1; k <= n; k++)
  {
    for (int c = 1; c <= n-k; c++)
      printf(" ");

    for (int c = 1; c <= k; c++)
      printf("*");

    printf("\n");
  }
   for (int k = 1; k <= n-1; k++)
  {
    for (int c = 1; c <= k; c++)
      printf(" ");

    for (int c = 1; c <= n-k; c++)
      printf("*");

    printf("\n");
  }
     
  //////////   
 int n=5;
    for (int k = 1; k <= n; k++)
  {
    for (int c = 1; c <= n-k; c++)
      printf(" ");

    for (int c = 1; c <= 2*k-1; c++)
      printf("*");

    printf("\n");
  }
     
      for (int k = 1; k <= n-1; k++)
  {
    for (int c = 1; c <= k; c++)
      printf(" ");

    for (int c = 1; c <= 2*(n-k)-1; c++)
      printf("*");

    printf("\n");
  }

//////
   for(int i =0;i<6;i++){
      for(int j = 6;j>i;j--){
      printf("*");
   }
   printf("\n");
   
   }

   ///////
   int a[10],n=6;
    printf("Hello World");
    for(int i = 0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    for(int i = n-1; i>=0;i-- ){
       printf("%d",a[i]);
    }

    return 0;
*/

