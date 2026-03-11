
"""
Python accesses command line data through argv from the sys module
Test the code:
  python cmd_line_args.py abc 123 hello
"""

import sys

print(f"Number of args: {len(sys.argv)}")
print(f"argv: {sys.argv}")

# what is printed?
# what form is the data?
