# scanf()

1 The provided code `scanf_test.c` is an example of using scanf()

The format specifies 3 integers.

Test the code for the following input:
- 1 2 3
- 1 2 a
- a 1 2
- a

scanf() will attempt to convert the data into the expected type in the defined order

It is important to consider the returned `count` as well as the data.
- scanf() will exit at the first failure
- `count` is the number of successful assignments before failure 
- values stored beyond this point are random data  

2 The provided code `scanf_str.c` is an example of using scanf() to read a string

Test the code with the following input:
- abc
- abc def
- abcdefghijk

This highlights a weakness of scanf() when using the derived type string
- strings may be variable length and/or contain spaces
- we can limit the length by modifying the format statement to `%9s` and defining the input "buffer" to be of length 10 (9 characters + `\0`)
- we can accommodate spaces using more general formnat statement using regular expressions 
- but this gets increasingly complex
