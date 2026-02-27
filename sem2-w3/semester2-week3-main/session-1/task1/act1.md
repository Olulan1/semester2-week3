
## Decompiling Python bytecode

We can view Python byte-code by disassembling compiled code in the Python interpreter

We use a small helloWorld Python module as an example.

Enter the Python environment from the command line, typing:

  `python` 

Import the python module and the disassembly module.

  `>>> import hello`
  
  `>>> from dis import dis`

Run the disassembler

  `>>> dis(hello.main)`

The output is Python byte-code.

This is instruction-level code but not native machine code.

You can see that a folder

  `__pycache__` 

is created, containing the compiled byte-code.

Make a note of the size of the file for comparison with C later.
You can find the size of a file using

  `ls -al`
  