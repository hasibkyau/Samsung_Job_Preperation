#include <stdio.h>
#
int main()
{
      char arr[12][10] = {"January", "February", "March", "April", "May", "June",
      "July", "August", "September", "October", "November", "December"};

      int m;
      scanf("%d",&m);
      printf("%s\n", arr[m-1]);

    return 0;
}

