## Instruction on how to run the program

1. At first create a `build` directory where you've created `CMakeList.txt` file.
    ``` 
    # Create a build dir with the workspace/pkg you want to execute. 
    mkdir build
    ```

2. Run cmake from within build dir and `..` to find the CMakeList configurations or pkg information.
    ``` 
    cmake ..
    ```

3. Run make once the cmake is succesful and Makefile is generated within build dir.
    ```
    make
    ```
  
4. After running make, output file will be genarated within build dir. Run that to visualize the output of the compiled pkg.
    ```
    ./pgm_output
    ```