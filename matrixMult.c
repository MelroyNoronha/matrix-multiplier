#include<stdio.h>
#include<conio.h>
#include<math.h>
//Global vars
int matrix1[25][25], matrix2[25][25], result[25][25];
int   r1,c1,r2,c2,i,j,k;

int initSetup(){
	printf("Enter the no. of rows in the first matrix and press the return key then proceed to enter the no. of coloumns \n");
	scanf("%d",&r1);
	printf("x\n");
	scanf("%d",&c1); 

	printf("Enter the no. of rows in the second matrix and press the return key then proceed to enter the no. of coloumns \n");
	scanf("%d",&r2);
	printf("x\n");
	scanf("%d",&c2);
}

int errHandle(){
	printf("Error! the matrices cannot be multiplied\n\nEnter new values\n");
	initSetup();
}

int checkForErr(){
	if(c1!=r2){
		return true;
	}
}

getValues(){
	//pending
}

int main()
{
	initSetup();
	
	if(checkForErr() == true){
		errHandle();
	};
	
	getValues();
	 
	return 0;
}
