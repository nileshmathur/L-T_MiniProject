#                                                                       Requirements #

## Introduction ##

A fully featured Application which has the ability to calculate the determinant of a matrix by using simple mathematical operations.This projects includes the functions which will make it easy to calculate the determinant of matrix.This project contains different functions for different sizes of matrix ie. for size=2,size=2 and size>3

This program is written in C language with proper functionalities and makefile.

## Cost and Features   ##

As far as the project is well built and all the requirements met the cost can be varied according to the market.

### Features  ###
* s2() function is for 2 x 2 array
* s3() function is for 3 x 3 array
* for n x n array with n > 3 there are the following functions
    * checkElements() function is because if all elements of some row or column is all 0 the determinant of array is 0(det=0)
    * checkRowsColumns() function is because if 2-rows or 2-columns is same, the determinant of array is 0 (det=0)
    * GaussianElimination() function is performed if the above expressions does not returned TRUE (or does not apply) and perform the Gaussian Elimination to find the determinant array
    * CheckAndSwap() function is inside the GaussianElimination() function because if some element of diagonal is 0 needs to swap the ij row with another whose the element is different from 0 (!=0) in ij-column AND changing the sign of determinant if swap.




