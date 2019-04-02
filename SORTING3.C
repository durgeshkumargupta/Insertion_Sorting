/* insertion Short */
#include<stdio.h>
#include<conio.h>
#define max 5
void main()
{
      int nm[max],i,j,temp;
      clrscr();
      for(i=0;i<max;i++)
      {
	printf("Enter data=[%d]=",(i+1));
	scanf("%d",&nm[i]);
	  for(j=0;j<i;j++)
	  {
	    if(nm[j]>nm[i])
	    {
	      temp=nm[j];
	      nm[j]=nm[i];
	      nm[i]=temp;
	    }
	  }
       }
       printf("Sorting data=");
       for(i=0;i<max;i++)
       printf("%3d",nm[i]);
getch();
}




