# Implementation Video
[Working Video of Program](https://github.com/GENESIS2021Q1/sdlc2-team-15/blob/main/6_ImagesandVideo/Videos/RunningProg.mkv)

# Steps to run the Program
1. Using the ```make``` command build the program
2. Using the ```make run``` command, run the program
3. You can choose to EXPLORE or QUIT the program
4. Choosing to EXPLORE you will have to choose between DIGITAL TO ANALOG and DIGITAL TO DIGITAL type of modulation
5. There are 4 types of DIGITAL TO ANALOG modulations: Amplitude Shift Keying, Frequency Shift Keying, Phase Shift Keying and Quadrature Amplitude Modulation
6. There are 5 types of DIGITAL TO DIGITAL modulations: Non Return to Zero - I, Non Return to Zero - L, Return to Zero, Biphase:Manchester and Biphase:Differential Manchester
7. Using the ```make clean``` command clean the folder structure.

# Fuzzing using libfuzzer
* Save the program imgRead_libfuzzer.c in any source code editors.
* Open the terminal and ```cd``` to the same folder where the program is saved.
*  In the terminal, first install the clang front-end compiler.
```$ sudo apt install clang```
* Compile the above program imgRead_libfuzzer.c using following command:
```$ clang -fsanitize=fuzzer,address,undefined -g imgRead_libfuzzer.c -o imgRead_libfuzzer```
* Run the program using the command to fuzz:
```$ ./imgRead_libfuzzer```
