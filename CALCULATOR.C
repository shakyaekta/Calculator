#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <math.h>
#include <string.h>
#include <time.h>

void sc()
{
	start:
	system("cls");
	system("color 74");
	printf("\t\t***SIMPLE CALCULATOR***\n");
	printf("Use '+' for add\n");
	printf("Use '-' for subtract\n");
	printf("Use '*' for multiplication\n");
	printf("Use '/' for division\n");
	printf("Use '!' for factorial\n");
	printf("Use '%%' for percentage\n");
	printf("Use 'enter key' to get total\n");
	printf("Use 'tab+enter button' for switch to another calculator\n");
	printf("Use 'c'or 'C' to clear all\n");
	printf("\n\n\t\tSTART\n\n");
	int s;
	int b,i;
	char ch='0';
	scanf("%d",&s);
	while(ch!='\t')
	{
		if(ch=='c'||ch=='C'){
		 system("cls");
		 goto start;	
		}
		scanf("%c",&ch);
		switch(ch)
		{
			case '+':scanf("%d",&b);s=s+b;break;
			case '-':scanf("%d",&b);s=s-b;break;
			case '*':scanf("%d",&b);s=s*b;break;
			case '/':scanf("%d",&b);s=s/b;break;
			case '%':s=s/100;break;
			case '!':for(i=s-1;i>0;i--)
			        {
			        	s=s*i;
					}break;
			default: printf("= %d",s);
		}
	}
}
void kf()
{
	system("color f2");
	float f,k;
	char s='0';
		while(s!='\t')
		{
			system("cls");
			printf("\t\t\tKELVIN  TO FAHRENHEIT\n");
			//kelvin to fahrenheit
			printf("K = ");
			scanf("%f",&k);
			f=(k-273.15)*9/5+32;
			printf("%0.2f F",f);fflush(stdin);scanf("%c",&s);
		}
}
void fk()
{
	system("color f2");
	float f,k;
	char s='0';
		while(s!='\t')
		{
			system("cls");
			printf("\t\t\tFAHRENHEIT TO KELVIN\n");
			//fahrenheit to kelvin
			printf("F = ");
			scanf("%f",&f);
			k=(f-32)*5/9+273.15;
			printf("%0.2f K",k);fflush(stdin);scanf("%c",&s);
		}
}

void kc()
{
	system("color f2");
	float c,k;
	char s='0';
		while(s!='\t')
		{
			system("cls");
			printf("\t\t\tKELVIN TO CELSIUS\n");
			//Kelvin to celsius
			printf("k = ");
			scanf("%f",&k);
			c=k-273.15;
			printf("%0.2f C",c);fflush(stdin);scanf("%c",&s);
		}
}
void ck()
{
	system("color f2");
	float c,k;
	char s='0';
		while(s!='\t')
		{
			system("cls");
			printf("\t\t\tCELSIUS TO KELVIN\n");
			//celsius to kelvin
			printf("C = ");
			scanf("%f",&c);
			k=c+273.15;
			printf("%0.2f K",k);fflush(stdin);scanf("%c",&s);
		}
}
void fc()
{
	system("color f2");
	float c,f;
	char s='0';
	while(s!='\t')
		{
			system("cls");
			printf("\t\t\tFAHRENHEIT TO CELSIUS\n");
			//fahrenheit to celsius
			printf("F = ");
			scanf("%f",&f);
			c=(f-32)*5/9;
			printf("%0.2f C",c);fflush(stdin);scanf("%c",&s);
		}
}
void cf()
{
	system("color f2");
	float c,f;
	char s='0';
	while(s!='\t')
		{
			system("cls");
			printf("\t\t\tCELSIUS TO FAHRENHEIT\n");
			//celsius to fahrenheit
			printf("C = ");
			scanf("%f",&c);
			f=c*9/5+32;
			printf("%0.2f F",f);fflush(stdin);scanf("%c",&s);
		}
}
void tc()
{
	char ch='0';
	while(ch!='\t')
	{
	system("cls");
	printf("\t\t\t***TEMPERATURE CONVERTER***\n");
	system("color 05");
	printf("a. celsius to fahrenheit\n");
	printf("b. fahrenheit to celsius\n");
	printf("c. celsius to kelvin\n");
	printf("d. kelvin to celsius\n");
	printf("e. fahrenheit to kelvin\n");
	printf("f. kelvin to fahrenheit\n");
	scanf("%c",&ch);
		switch(ch)
		{
			case 'a':cf();break;//celsius to fahrenheit
			case 'b':fc();break;//fahrenheit to celsius
			case 'c':ck();break;//celsius to kelvin
			case 'd':kc();break;//kelvin to celsius
			case 'e':fk();break;//fahrenheit to kelvin
			case 'f':kf();break;//kelvin to fahrenheit
			default: printf("You Enter Wrong Input");
		}
	system("cls");
	}
	
}
void db()
{
	//Decimal to Binary;
	system("color 04");
	char ch='0';
	while(ch!='\t')
	{
		system("cls");
			int a,i=0,n,b=0;
		printf("\t\t\t***Decimal to Binary***\n");
		printf("Decimal no_ = ");
		scanf("%d",&a);
		while(a!=0)
		{
			n=a%2;
			b=b+pow(10,i)*n;
			a=a/2;
			i++;
		}
		printf("Binary no_ = %d",b);
		fflush(stdin);scanf("%c",&ch);
	}
}
void bd()
{
		//Binary to Decimal;
	system("color 04");
	char ch='0';
	while(ch!='\t')
	{
		start:
		system("cls");
			int a,i=0,n,b=0;
		printf("\t\t\t***Binary to Decimal***\n");
		printf("Binary no_ = ");
		scanf("%d",&a);
		while(a!=0)
		{
			n=a%10;
			if(n<2)
			{
				b=b+pow(2,i)*n;
				a=a/10;
				i++;
			}
			else
			{
				printf("This number is not in binary");
				a=0;getch();
				goto start;
			}
		}
		printf("Decimal no_ = %d",b);
		fflush(stdin);scanf("%c",&ch);
	}
}
void dh()
{
	//Decimal to Hexadecimal
	system("color 04");
	char ch='0';
	while(ch!='\t')
	{
		system("cls");
			int a,i=0,n,j=0;
		printf("\t\t\t***Decimal to Hexadecimal***\n");
		printf("Decimal no_ = ");
		scanf("%d",&a);
		n=a;
		while(a!=0)
		{
			a=a/10;
			i++;
		}
		a=n;n=0;char b[i];
		while(a!=0)
		{
			n=a%16;
			if(n<10)
			{
				b[j]=n;
				j++;
			}
			else
			{
				n=n-10;
				int x;
				for(x='a';x<'a'+n;x++);
				b[j]=x;
				j++;	
			}
			a=a/16;
		}
		printf("Hexadecimal no_ = ");
		for(i=j-1;i>=0;i--)
		{
			if(b[i]<10)
			printf("%d",b[i]);
			else
			printf("%c",b[i]);
		}
		fflush(stdin);scanf("%c",&ch);
	}
}
void hd()
{
	//Hexadecimal to Decimal
	system("color 04");
	char ch='0';
	while(ch!='\t')
	{
		start:
		system("cls");
		char a[20];
		int n,i,b=0,j=0;
		printf("\t\t\t***Hexadecimal to Decimal***\n");
		printf("HexaDecimal no_ = ");
		scanf("%s",&a);
		n=strlen(a);
		for(i=n-1;i>=0;i--)
		{
			if(a[i]>=48&&a[i]<=57)
			{
				a[i]=a[i]-48;
				b=b+pow(16,j++)*a[i];
			}
			else if(a[i]>=65&&a[i]<=70)
			{
				a[i]=a[i]-65+10;
				b=b+pow(16,j++)*a[i];
			}
			else if(a[i]>=97&&a[i]<=102)
			{
				a[i]=a[i]-97+10;
				b=b+pow(16,j++)*a[i];
			}
			else
			{
				printf("this is not a hexadecimal number");
				getch();
				goto start;
			}
		}
		printf("Decimal no_ = %d",b);
	
		fflush(stdin);scanf("%c",&ch);
	}
}
void hb()
{
	//Hexadecimal to Binary
	system("color 04");
	char ch='0';
	while(ch!='\t')
	{
		start:
		system("cls");
		char a[20];
		int n,i,b=0,j=0;
		printf("\t\t\t***Hexadecimal to Binary***\n");
		printf("HexaDecimal no_ = ");
		scanf("%s",&a);
		n=strlen(a);
		for(i=n-1;i>=0;i--)
		{
			if(a[i]>=48&&a[i]<=57)
			{
				a[i]=a[i]-48;
				b=b+pow(16,j++)*a[i];
			}
			else if(a[i]>=65&&a[i]<=70)
			{
				a[i]=a[i]-65+10;
				b=b+pow(16,j++)*a[i];
			}
			else if(a[i]>=97&&a[i]<=102)
			{
				a[i]=a[i]-97+10;
				b=b+pow(16,j++)*a[i];
			}
			else
			{
				printf("this is not a hexadecimal number");
				getch();
				goto start;
			}
		}printf("Decimal no_ = %d\n",b);j=0;
		n=0;i=0;
		while(b!=0)
		{
			n=b%2;
			j=j+pow(10,i)*n;
			b=b/2;
			i++;
		}
		printf("Binary no_ = %d\n",j);
	
		fflush(stdin);scanf("%c",&ch);
	}
}
void bh()
{
	//Binary to HexaDecimal
	system("color 04");
	char ch='0';
	while(ch!='\t')
	{
		start:
		system("cls");
		int a;
		int n=0,i=0,b=0,j=0;
		printf("\t\t\t***Binary to Hexadecimal***\n");
		printf("Binary no_ = ");
		scanf("%d",&a);
		while(a!=0)
		{
			n=a%10;
			if(n<2)
			{
				b=b+pow(2,i)*n;
				a=a/10;
				i++;
			}
			else
			{
				printf("This number is not in binary");
				a=0;getch();
				goto start;
			}
		}
		printf("Decimal no_ = %d\n",b);
		n=b;i=0;
		while(b!=0)
		{
			b=b/10;
			i++;
		}
		b=n;n=0;char c[i];
		while(b!=0)
		{
			n=b%16;
			if(n<10)
			{
				c[j]=n;
				j++;
			}
			else
			{
				n=n-10;
				int x;
				for(x='a';x<'a'+n;x++);
				c[j]=x;
				j++;	
			}
			b=b/16;
		}
		printf("Hexadecimal no_ = ");
		for(i=j-1;i>=0;i--)
		{
			if(c[i]<10)
			printf("%d",c[i]);
			else
			printf("%c",c[i]);
		}
		fflush(stdin);scanf("%c",&ch);
	}
}
void ns()
{
	char ch='0';
	while(ch!='\t')
	{
	system("cls");
	printf("\t\t\t***NUMERAL SYSTEM***\n");
	system("color 05");
	printf("a. decimal to binary\n");
	printf("b. binary to decimal\n");
	printf("c. decimal to hexadecimal\n");
	printf("d. hexadecimal to decimal\n");
	printf("e. hexadecimal to binary\n");
	printf("f. binary to hexadecimal\n");
	scanf("%c",&ch);
		switch(ch)
		{
			case 'a':db();break;//decimal to binary
			case 'b':bd();break;//binary to decimal
			case 'c':dh();break;//decimal to hexadecimal
			case 'd':hd();break;//hexadecimal to decimal
			case 'e':hb();break;//hexadecimal to binary
			case 'f':bh();break;//binary to hexadecimal
			default: printf("You Enter Wrong Input");
		}
	system("cls");
	}
}
void si()
{
	char ch='0';
	while(ch!='\t')
	{
		system("cls");
		system("color 02");
		printf("\t\t\t ***___Simple Interest___***\n");
		float p,r,t,i,n;
		printf("Principle = ");
		scanf("%f",&p);
		printf("Rate = ");
		scanf("%f",&r);
		printf("Time = ");
		scanf("%f",&n);
		i=p*r*n/100;
		t=p+i;
		printf("Interest = %0.2f\n",i);
		printf("Total Amount = %0.2f",t);
		fflush(stdin);scanf("%c",&ch);
	}	
}
void ci()
{
		char ch='0';
	while(ch!='\t')
	{
		system("cls");
		system("color 02");
		printf("\t\t\t ***___Compound Interest___***\n");
		float p,r,n,t;
		printf("Principle = ");
		scanf("%f",&p);
		printf("Rate = ");
		scanf("%f",&r);
		printf("yearTime = ");
		scanf("%f",&n);
		printf("Number of times that interest is compounded per year = ");
		scanf("%f",&t);
		int j;
		for(j=0;j<n*t;j++)
		{
			p=p+p*r/100/t;
		}
		printf("Total Amount = %0.2f",p);
		fflush(stdin);scanf("%c",&ch);
	}
}
void ic()
{
	char ch='0';
	while(ch!='\t')
	{
	system("cls");
	printf("\t\t\t***INTEREST CALCULATOR***\n");
	system("color f4");
	printf("a. Simple Interest\n");
	printf("b. Compound Interest\n");
	scanf("%c",&ch);
		switch(ch)
		{
			case 'a': si();break;//simple interest
			case 'b': ci();break;//compound interest
			default: printf("You Enter Wrong Input");
		}
	system("cls");
	}
}
void ac()
{
	char ch='0';
	while(ch!='\t')\
	{
		system("cls");
		printf("\t\t\t***___Age Calculator___***\n");
		system("color f5");
		printf("Give your D.O.B in ddmmyyyy manner like dd mm yyyy\n\n\n");
		time_t t=time(NULL);
    int dd,mm,yyyy,i,n=0,x=0,y,m[]={31,28,31,30,31,30,31,31,30,31,30,31};
    struct tm tm = *localtime(&t);
    printf("Today's date = %02d - %02d - %d\n\n",tm.tm_mday,tm.tm_mon+1,tm.tm_year+1900);
    printf("Your D.O.B = ");
    scanf("%d%d%d",&dd,&mm,&yyyy);
    y=tm.tm_year+1900;
    for(i=0;i<2;i++)
    {
    	x=y%10;
    	n=n+x;
    	y/=10;
	}
	if(n==0)
	y=(tm.tm_year+1900)%400;
	else
	y=(tm.tm_year+1900)%4;//upper algorithm is used to find leap year
	if(y==0)// to mantain the day of feb
	m[1]=29;
	else
	m[1]=28;
	y=tm.tm_year+1900;//current year
	x=tm.tm_mon+1;//month of current year
	n=tm.tm_mday;//date of current year
	if(dd>n)
	{
		n+=m[x-1];
		x--;
	}
	n-=dd;
	if(mm>x)
	{
		x+=12;
		y--;	
	}
	x-=mm;
	y-=yyyy;
	printf("\nYour age = %d years %d months %d days\n",y,x,n);
	fflush(stdin);scanf("%c",&ch);
	}
}
void calculator()
{	
	char ch;
	while(ch!='\t')
	{
		system("cls");
		system("color f2");
		printf("\n\n\t\t\t\xb2\xb2\xb2\xb2\xb2 CALCULATOR \xb2\xb2\xb2\xb2\xb2\n\n\n");
		printf("choose the option\n");
		printf("1. SIMPLE CALCULATOR for(+,-,*,/,%%,!) type opretion\n");
		printf("2. TEMPERATURE CONVERTER\n");
		printf("3. NUMERAL SYSTEM like(decimal---> binary)\n");
		printf("4. INTEREST CALCULATOR\n");
		printf("5. AGE CALCULATOR\n");
		printf("Use \"tab->enter\" button for switch to Array\n");
		fflush(stdin);
		scanf("%c",&ch);
		switch(ch)
		{
			case '1':sc();break;//sc= simple calculator
			case '2':tc();break;//tc= temperature calcator
			case '3':ns();break;//ns= numeral system
			case '4':ic();break;//ic= interest calculator
			case '5':ac();break;//ac= age calculator
		}
		system("cls");
	}
}
void avj()
{
	system("color f2");
	float c,f;
	char s='0';
	int n,i,arr;
	float sum=0;
	while(s!='\t')
		{
			system("cls");
			printf("\n\t\t\tFIND AVERAGE \n");
			printf("Enter how many numbers you have : ");
			scanf("%d",&n);
			for(i=0;i<n;i++)
			{
				printf(" Enter %d number : ",i+1);
				scanf("%d",&arr);
				sum+=arr;
			}
			sum/=n;
			printf("Average of given number is %f", sum);
			fflush(stdin);scanf("%c",&s);
		}
}
void lsn()
{
	system("color f4");
	char ch='0';
	while(ch!='\t')
	{
		system("cls");
		int i,n,t,l=0,s=2e5;
		printf("Enter how much number you have : ");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			printf("Enter %d number : ",i);
			scanf("%d",&t);
			if(l<t)
			l=t;
			if(s>t)
			s=t;
		}
		printf("\n\nLarsgest number = %d\n",l);
		printf("\n\nSmallest number = %d\n",s);
		fflush(stdin);scanf("%c",&ch);
	}
}
void ado()
{
	system("color f4");
	char ch='0';
	while(ch!='\t')
	{
		system("cls");
		int n,i=0,j,temp;
		printf("\n\t\t\t     \xc7\xB6\xb6\xb6\xb6\xb6 ASCENDING AND DESCENDING \xc7\xc7\xc7\xc7\xc7\xb6\n\n");
	printf("\t\t\tEnter number of element : ");
	scanf("%d",&n);
	int arr[n];
	printf("\t\t\tEnter %d numbers \n",n);
	printf("\n\t\t\tEnter %d number : ",i+1);
		scanf("%d",&arr[i]);
	for(i=1;i<n;i++)
	{
		printf("\t\t\tEnter %d number : ",i+1);
		scanf("%d",&temp);
		j=i-1;
		while(j>=0&&arr[j]>temp)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
	printf("\n\n\t\t\tAscending Order \n\t\t\t");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n\n\t\t\tDescending Order \n\t\t\t");	
	for(i=n-1;i>=0;i--)
	    printf("%d ",arr[i]);
		fflush(stdin);scanf("%c",&ch);
	}	
}
void array()
{
		char ch='0';
	while(ch!='\t')
	{
		system("cls");
		system("color f2");
		printf("\n\n\t\t\t     \xc7\xB6\xb6\xb6\xb6\xb6 ARRAY BASED PROBLEM \xc7\xc7\xc7\xc7\xc7\xb6\n\n");
		printf("choose the option\n");
		printf("1. Average of n number\n");
		printf("2. Find Largest and Smallest number\n");
		printf("3. Arrange in Ascending and descending  order\n");
		printf("4. Insert an element at any position\n");
		printf("5. Delete an element at any position\n");
		printf("6. Addition of two matrix\n");
		printf("7. Multipication of two matrix\n");
		printf("Use \"tab->enter\" button to Go to previous option\n");
		fflush(stdin);
		scanf("%c",&ch);
		switch(ch)
		{
			case '1': avj();break;
			case '2': lsn();break;
			case '3': ado();break;
//			case '4': iep();break;
//			case '5': dep();break;
//			case '6': atm();break;
//			case '7': mtm();break;
		}
		system("cls");
	}
}
int main()
{
	char ch='0';
	while(ch!='\t')
	{
		system("cls");
		printf("\n\n\t\t\t\t\t\tPROJECT 1\n");
		printf("\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO THE MAIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
		system("color f5");
		printf("\n\n\t\t\t\t1. CALCULATOR\n");
		printf("\t\t\t\t2. ARRAY PROBLEM\n");
		scanf("%c",&ch);
		switch(ch)
		{
			case '1': calculator();break;
			case '2': array();break;
		}
	}
}

