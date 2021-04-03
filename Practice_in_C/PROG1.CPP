//to display even no.s without repitition stored in 2 arrays//
#include<conio.h>
#include<iostream.h>
void main()
{int i,j,k=0,arr1[5]={0},arr2[5]={0},arr3[10]={0},N;
clrscr();
cout<<"to display even no.s without repitition stored in 2 arrays\n";
cout<<"Elements of array 1:"<<endl;
for(i=0;i<5;i++)
	{cout<<"Enter the no.(-999 to stop):";
	cin>>arr1[i];
	if(arr1[i]==-999)
	break;
	}                      //scanning values in array1//
cout<<"Elements of array 2:"<<endl;
for(i=0;i<5;i++)
	{cout<<"Enter the no.(-999 to stop):";
	cin>>arr2[i];
	if(arr2[i]==-999)
	break;
	}                      // scanning values in array2//

for(i=0;arr1[i]!=0;i++)
	{if(arr1[i]%2==0)
		{for(j=0;j<k;j++)
			{if(arr1[i]==arr3[j])//to check whether value is repeated//
			break;}
		if(k==j)
		{arr3[k]=arr1[i];
		k++;}
		}
	}
for(i=0;arr2[i]!=0;i++)
	{if(arr2[i]%2==0)
		{for(j=0;j<k;j++)
			{if(arr2[i]==arr3[j])
			break;}
		if(k==j)
		{arr3[k]=arr2[i];
		k++;}
		}
	}

cout<<"arr3 is:\n";

for(i=0;arr3[i]!=0;i++)
{cout<<arr3[i]<<endl;
}

getch();
}