0x08-recursion

C allows functions to call itself multiple times in a program this is RECURSION.
A recursive function has 2 componets/characteristics;
  	    1. Base case - part where we compute the result immediately giving the input to  the function call.
	       - if the base case is missing, the function maybe infinite.
	    2. Recursive step - here, we compute the result with the help of one or more recursive calls to this same
	       		 function but with the inputs sometimes reduced in size or complexity. With each reduction  bri
			 nging it closer to the base case
	- A recursive function may have more than 1 base case and/or more than one recursive step.
	-Idealy, a recursive step should tranform the problem instance into something smaller, else the function might
	  be infinite

