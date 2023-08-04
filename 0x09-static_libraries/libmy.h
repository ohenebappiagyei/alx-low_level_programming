!<arch>
//                                              22        `
create_static_lib.sh/
/0              0           0     0     644     128       `
#!/bin/bash

# Compile all .c files in the current directory
gcc -c *.c

#Create the static library liball.a
ar rc liball.a *.o
