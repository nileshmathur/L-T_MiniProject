#include <stdio.h>
#include <stdlib.h>
#include "determinant.h"

void read_array( int s, double array[s][s]);             //For reading Array
void copyarray(int s, double cpyarray[s][s],  double array[s][s]);   //For changing Array at runtime

//Here,Array=Matrix
int main()
{
	
	//Input the size of array
	int s;
    printf("The size of array: ");
    scanf("%d", &s);

    //Read the elements of array
    double array[s][s];
    read_array(s, array); 
    
    double cpyarray[s][s];
	//copyarray(s, cpyarray, array);                //Use this function if you want to change array at runtime   
	 	
	
	
	printf("\ndet(array) is: %lf", det(s, array) );   //Printing the determinant of the given array[s][s]
	
}

//Reading Array
void read_array(int s, double array[s][s]){
    int i,j;
    printf("\n Give the array (To change rows press ENTER )(To change columns press SPACE): \n");

    //read the array
    for(i=0; i<s; i++){
       printf("row%d < ", i+1);
       for(j=0; j<s; j++)
          scanf("\n%lf", &array[i][j]);
    }
}

//Copying the array[s][s] to cpyarray[s][s]
void copyarray(int s, double cpyarray[s][s], double array[s][s]){
	int i,j;
	for(i=0; i<s; i++){
		for(j=0; j<s; j++){
			cpyarray[i][j] = array[i][j];
		}
	}
	
}
