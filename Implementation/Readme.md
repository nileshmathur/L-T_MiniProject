# Implementation #

## About det() function  ##
* Takes the size of array and the array(det(int s, double array[s][s])
* Returns the determinant of array( in this code returns double value )

### About functions inside det()  ###
For n x n array with n > 3 there are the following functions
* checkElements() function is because if all elements of some row or column is all 0 the determinant of array is 0(det=0)
* checkRowsColumns() function is because if 2-rows or 2-columns is same, the determinant of array is 0 (det=0)
* GaussianElimination() function is performed if the above expressions does not returned TRUE (or does not apply) and perform the Gaussian Elimination to find the determinant array
* CheckAndSwap() function is inside the GaussianElimination() function because if some element of diagonal is 0 needs to swap the ij row with another whose the element is different from 0 (!=0) in ij-column AND changing the sign of determinant if swap.
