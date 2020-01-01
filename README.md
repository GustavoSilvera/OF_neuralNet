# ConvNeuralNet
Simple 2D Visualization of a Convolutional Neural Net using OpenFrameworks2D and C++

![](images/ConvNeuralNet.gif)

# **Requires (Graphical)** 
	OpenFrameworks v0.10.1 ==> openframeworks.cc/download/
# **Requires (Terminal)** 
	Clang++ and a terminal. 
# **INSTALL:**
    Once you install OpenFrameworks for your system, place it in the home directory with name OF/ and *make*
# **HOW TO COMPILE (Graphical):**
    First, compile using an IDE with support for C++ and OpenFrameworks Libraries.
    Compiler should output an executable binary in /bin
# **HOW TO COMPILE (Terminal):**
    Run *make* from inside the /src directory, should output ./app in /src 
# **HOW TO USE:**
    To use custom datasets simply modify/replace the DATA_good.txt file in /src.
    **REQUIREMENTS:**
	The format of the dataset should be "x y z ... ; a b c ..." on every line
	Where spaces are used to divide the individual data entries and the semicolon (;) divides inputs against outputs.
	The same number of inputs and outputs should be used throughout the file.

# **Controls: (Graphical)**
**SPACE:**\
	Iterate through dataset and run into model.\
**BACKSPACE:**\
	Compute total average cost, where cost function is the difference in squares\
**RT_SHIFT:**\
	Begin training on dataset\
**ENTER:**\
	Randomize weights on entire Neural Net\
**ESC:**\
	Exit application
