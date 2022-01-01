#include<stdio.h>
#include<stdlib.h>

//union

int Union(int a[],int b[],int c[],int m,int n)
{
	int i,j,f,k=0;
	for(i=0;i<m+n;i++)
	{
		 c[i]=0;
	}
	for(i=0;i<m;i++)
	{
		 c[k]=a[i];
		k++;
	}
	for(i=0;i<n;i++)
	{
	f=0;
		for(j=0;j<m;j++)
		{
			if(b[i]==a[j])
			{
				f=1;
				break;
			}
		}
		if(f==0)
		{
			 c[k]=b[i];
			k++;
		}
	}

  //Displying union set 

      printf("{");
	    for(int i=0;i<k;i++)
	    printf(" %d ",c[i]);
	    printf("}\n");
  
  return 0;
}

// Intersection 

int Intersection(int a[],int b[],int c[],int m,int n)
{
	int i,j,f,k=0;
	for(i=0;i<m+n;i++)
	{
		c[i]=0;
	}
	for(i=0;i<n;i++)
	{
		f=1;
		for(j=0;j<n;j++)
		{
			if(a[i]==b[j])
			{
				f=0;
				break;
			}
		}

	if(f==0)
	{
		c[k]=a[i];
		k++;
	}
	}

//Displying Intersection set 

      printf("{");
	    for(int i=0;i<k;i++)
	    printf(" %d ",c[i]);
	    printf("}\n");
  
  return 0;
} 

//Difference

int Difference(int a[],int b[],int c[],int m,int n)
{
	int i,j,k=0,f;
	for(i=0;i<m+n;i++)
	{
		c[i]=0;
	}
	for(i=0;i<m;i++)
	{
		f=0;
		for(j=0;j<n;j++)
		{
			if( a[i]==b[j])
			{
				f=1;
				break;
			}
		}
		if(f==0)
		{	
			c[k]= a[i];
			k++;
		}
	}
//Displying Difference set 

      printf("{");
	    for(int i=0;i<k;i++)
	    printf(" %d ",c[i]);
	    printf("}\n");
  
  return 0;
}

//Symm_Difference

int Symm_Difference(int a[],int b[],int c[],int m,int n)
{
	int i,j,k=0,f;
	for(i=0;i<m+n;i++)
	{
		c[i]=0;
	}
	for(i=0;i<m;i++)
	{
		f=0;
		for(j=0;j<n;j++)
		{
			if(a[i]==b[j])
			{
				f=1;
				break;
			}
		}
		if(f==0)
		{
			c[k]=a[i];
			k++;
		}
	}
	for(i=0;i<n;i++)
	{
		f=0;
		for(j=0;j<m;j++)
		{
			if(b[i]==a[j])
			{	
				f=1;
				break;
			}
		}
		if(f==0)
		{
			c[k]=b[i];
			k++;
		}
	}

//Displying Symm_Difference set 

      printf("{");
	    for(int i=0;i<k;i++)
	    printf(" %d ",c[i]);
	    printf("}\n");
  
  return 0;
}

int main()
{
	int a[100],b[100],c[100],m,n,k;
	int ch;

  //creating set 1

    printf("\n*******Creating first Set*******");
      printf("\n\nEnter no. of elements:");
	    scanf("%d",&n);
	    printf("\nEnter %d set of elements:",n);
	    for(int i=0;i<n;i++)
	    scanf("%d",&a[i]);

  //Displying set 1
      printf("\nSET 1:"); 
      printf("{");
	    for(int i=0;i<n;i++)
	    printf(" %d ",a[i]);
	    printf("}\n");
    
    // creating  set 2

		printf("\n*******Creating second Set*******");
	    printf("\n\nEnter no. of elements:");
	    scanf("%d",&m);
	    printf("\nEnter %d set of elements:",m);
	    for(int i=0;i<m;i++)
	    scanf("%d",&b[i]);
    
    //Displying set 2

      printf("\nSET 2:");
      printf("{");
	    for(int i=0;i<m;i++)
	    printf(" %d ",b[i]);
	    printf("}\n");
    

	do
	{
    printf("\n*********************************");
		printf("\n\n1.Union\n2.Intersection\n3.Difference\n4.Symmentric Difference\n5.Quit\n\nEnter your choice:");
		scanf("%d",&ch);
    
    

	switch(ch)
	{
		case 1:
      printf("\n*********************************");
			printf("\n\nUnion set:");
			Union(a,b,c,m,n);	
			break;
			
		case 2:
      printf("\n*********************************");
			printf("\n\nIntersection Set:");
      Intersection(a,b,c,m,n);
			break;

		case 3:
      printf("\n*********************************");
			printf("\n\nDifference Set :");
		  Difference(a,b,c,m,n);
			break;

		case 4:
      printf("\n*********************************");
			printf("\n\nSymmentric Difference Set:");
      Symm_Difference(a,b,c,m,n);
			break;

		case 5:exit(0);

		default:
			printf("\n!! Invalid Choice !!");
			break;

	}}while(ch!=5);
}
