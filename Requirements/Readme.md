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


## SWOT Analysis ##
![SWOT-Sample](https://github.com/nileshmathur/L-T_MiniProject/blob/main/Requirements/SWOT-Analysis.PNG)

## 4W's and 1'H ##
### Who:- ###
The project can be used almost by all.Everyone who are working on complex operations like finding inverse of matrix,solving complex linear equations and capturing how linear transformation change area or volume, and changing variables in integrals etc.

### What:-  ###
This can calculate the determinant of matrix quickly.Consumer just needs to input the matrix and this will calculate the determinant of matrix which can be used for different applications.

### When:-  ###
The can be used at the time of solving the calculations and get the results for basic and complex problems. The result will be obtained quickly.

### Where:-  ### 
In all the domains it can be used.As this is easily usable and user-friendly, it can be also be easily implemented on the mobile system.It will meet all the requirements of the user.

### How:-  ###

System design is a solution for “HOW TO” approach to the creation of a new system. It translates system requirements into ways by which they can be made operational. It is a translational from a user oriented document to a document oriented programmers. For that, it provides the understanding and procedural details necessary for the implementation. Here UML diagrams are used to supplement the working of the new system. The system thus made should be reliable, durable and above all should have least possible maintenance costs.


## Detail Requirements ##

### High Level Requirements ###

ID  |  Description   |  Status
HR_01 | Operating System (Windows 10/Linux) | Implemented





