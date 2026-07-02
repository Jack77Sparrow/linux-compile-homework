## Installation & Running


# Some improves
I implement the clean-all code in Makefile.am


Follow these steps in your terminal to generate configuration files, compile, and install the application:


# 1. Generate configuration scripts and templates
aclocal
autoconf
automake --add-missing


# 2. Check the system and generate the final Makefile
./configure

# 3. Compile the source code into a binary
make

# 4. Install the binary globally into the system
sudo make install


# 5. Run program
calcproj

# 6. Cleaning up 
sudo make clean-all
