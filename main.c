#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,k,i,j,s=0,l=1,f,m,h=0,p=1,t,b,temp;
	int a[100][2];
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		for(j=0;j<2;j++)
		{
			a[i][j]=i+1;
		}
	}

	while(n>0)
	{
if(l==1)
{
	
		
		if(h>=k*(2*n-2) && h<k*(2*n-1))
		 {
			temp=b;
			for(f=0;f<n;f++)
			{
				
				if(a[f][0]!=0 && a[f][1]!=0)
				{
					l=0;
					m=f+1;
					
				}
			}
			if(l==1)
		    	{
				if(h<k*(2*n-1))
				{
				while(f!=t-1)
				{
					
					f=t;
					if(h<k*(2*n-1))
					{ 
		        	b=temp;
					while(b<2)
					 {
					 	
						 if(h<k*(2*n-1))
						 {
						if(a[f][b]=0)
						 {
							printf("%d ",a[f][b]);	
							h++;
							s++;
									
							if(s==k)
							{
								printf("\n");
								s=0;
								a[f][b]=0;
							}
						 }
					   }
					   else
					   {
					   	break;
					   }
					b++;
					temp=0;
				}
				}
				else
				{
				break;
				}
				if(f==n)
				{
					f=0;
				}
				f++;
			}
			}
			}
		 }
		if(l==1)
		{
		 if(h==k*(2*n-1))
		 {
		
			for(f=0;f<n;f++)
			{
				if(a[f][1]==f+1 || a[f][0]==f+1)
				{
					m=f+1;
					l=0;
				}
			}
		 }
		}
		if(l==1)
		{
			if(h<k*(2*n-2))
			{
			for(i=0;i<n;i++)
			{
				if(h<k*(2*n-2))
				{
				for(j=0;j<2;j++)
				{
					if(h<k*(2*n-2))
					{
					if(a[i][j]!=0)
					{
						printf("%d ",a[i][j]);
						s++;
						h++;
					
						if(s==k)
						{
							a[i][j]=0;
							printf("\n");
							s=0;
						}
					}
				}
					else
					{
						t=i;
						b=j;
						
						break;
					}
			}
			}
				else
				{
					t=i;
					b=j;
					break;
				}
			}
		}
		else
		{
			t=i;
			b=j;
		}
		
		}
		}
	
else
{
	
	break;
}

	}

	printf("winner:%d",m);

	
	return 0;
}

