#include <stdio.h>
#include <stdlib.h>
#include "determinant.h"


double det(int s, double array[s][s]);
double s2(int s, double array[s][s]);           //For 2 x 2 Matrix
double s3(int s, double array[s][s]);           //For 3 x 3 Matrix


//For n x n array that n > 3->Perform Gaussian Elimination

int checkElements(int s, double array[s][s]);                               //Checking if all elements of any row/column are 0 or not
int checkRowsColumns(int s, double array[s][s]);                            //Checking if any row or column is same or not
double GaussianElimination(int s, double array[s][s]);                      //Performing Gaussian Elimination for reducing given Matrix to Row-Echleon Form
void CheckAndSwap(int s, int ij, int *sign, double array[s][s]);        


//Finding Determinant
double det(int s, double array[s][s]){
   
	if(s == 2)
    {
        return s2(s, array);
    }
    else if(s == 3)
    {
        return s3(s,array);
    }
    else
    {

        if(checkElements(s, array) == 0 ) return 0;  //If all elements of any row/column are 0->Determinant=0
		
		
		if(checkRowsColumns(s, array) == 0 ) return 0;   //If a row/column is same->Determinant=0
	
        return GaussianElimination(s, array);   //Else,perform Gaussian Elimination 
    }
}




double  s2(int s, double array[s][s])
{
	
    double  d1 = array[0][0] * array[1][1];
    
	
    double  d2 = array[0][1] * array[1][0];
    
	return(d1 - d2);
}


double  s3(int s, double array[s][s])
{
	double  d1, d2, d3, d4, d5, d6;        //Diagonals of the Matrix
	
	
        d1 = array[0][0] * array[1][1] * array[2][2];
        d2 = array[0][1] * array[1][2] * array[2][0];
        d3 = array[0][2] * array[1][0] * array[2][1];
    
        d4 = array[2][0] * array[1][1] * array[0][2];
        d5 = array[2][1] * array[1][2] * array[0][0];
        d6 = array[2][2] * array[1][0] * array[0][1];

    return d1+d2+d3 - d4-d5-d6;
}

int checkElements(int s, double array[s][s])
{
	int i, j;
	for(i=0; i<s; i++){
        int zeroesC = 0; 
		int zeroesR = 0;
       	if(array[i][i] != 0) continue; 
		for(j=0; j<s; j++){
			
   		    
		    if( (zeroesC != -1) && (array[j][i] == 0)) zeroesC += 1	; 
		    else zeroesC = -1;
			if( (zeroesR != -1) && (array[i][j] == 0)) zeroesR += 1	;
			else zeroesR = -1;
				
			if((zeroesC == -1) && (zeroesR == -1)) break;
				
			if( (zeroesC == s) || (zeroesR == s) ) return 0; 	
		}
     }
	 return -1;
}
int checkRowsColumns(int s, double array[s][s])
{
	int i, j, k;
	for(i=0; i<s-1; i++){    
		for(j=i+1; j<s; j++){
				 
			int sameElementsR = 0; 
			if( array[i][i] == array[j][i] ){ 
				for(k=0; k<s; k++){
					//Compare the i-row with j-row if they are same
					if( (sameElementsR != -1) && (array[i][k] == array[j][k]) ) sameElementsR += 1;
					else break;
				}
				if(sameElementsR == s) return 0;
			}
				
			int sameElementsC = 0; 
			if(array[i][i] == array[i][j]){			for(k=0; k<s; k++){
					//Compare the i-column with j-column if they are same
					if(array[k][i] == array[k][j])  sameElementsC += 1;
					else break;
				}
				if(sameElementsC == s) return 0; 			}	
		}
	}
	return -1;	
}


double  GaussianElimination(int s, double  array[s][s])       
                                    //If s > 3 finding the determinant of array[][] with Gaussian Elimination making the array upper triangular
{
	int ij;
	int k, l, i;
	double d = 1;
	double a;
	int sign = 1;

	for(ij=0; ij<(s - 1); ij++){
        	
		if(array[ij][ij] == 0)// If the elemnt of diagonal is 0 needs to swap the ij row with another that the element is !=0 in ij-column
       		CheckAndSwap(s, ij, &sign, array);
				
		
        for(k=ij+1; k<s; k++){  
			a = array[k][ij]; 
			for(l=ij; l<s; l++)
            {
              
            array[k][l] = array[ij][l] * ( -a / array[ij][ij] ) + array[k][l]; 
            }
        }
    }
          
    
    for(i=0; i<s; i++){
        d = d * array[i][i];                //The product of the diagonal gives the determinant 
    }
    
    return sign * d;                        //This multiplication is done so that the determinant gets the right sign
}


void CheckAndSwap(int s, int ij, int *sign, double array[s][s])
{
	int i,j;
	int row=0;
	double temp;
	
	 
	for(i=ij+1; i<s; i++){
	    if(array[i][ij] != 0){
	    	row = i;
	    	break;
		}	
	} 
	
	
	if(row != 0){
		//swap the elements of rows 
	    for(j=ij; j<s; j++){
		    temp = array[ij][j];
		    array[ij][j] = array[row][j];
		    array[row][j] = temp;
	    }
	}
	
    	
	*sign = (*sign) * -1; 
		
}

