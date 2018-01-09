#include <stdio.h>
int main()
{
  int n1,n2,i,rem;
  scanf("%d",&n1);
  scanf("%d",&n2);
  for(i=n1+1;i<n2;i++)
  {
      rem=i%2;
      if(rem==0)
      {
          printf("%d",i);
      }
  }
  

    return 0;
}
