# C - Static libraries

* All files are compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* My code uses the Betty style to enhance readability and ease of maintenance. I checked my code using betty-style.pl and betty-doc.pl
***

## Files

| Filename | Description |
| -------- | ----------- |
| `libmy.a`| contains all the functions listed in main.h |
| `main.h` | contains all the prototypes of the used functions |
| `create_static_lib.sh` | creates a static library called liball.a from all the .c files that are in the current directory. |
