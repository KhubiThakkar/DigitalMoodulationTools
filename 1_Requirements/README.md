# Requirements
## Introduction
Digital Modulation Tools is a simple console application designed to give the user a simulation of their data and the possible modulations and encoding. The bit stream given can be modulated in various modulation techniques like - ASK, FSK, PSK, etc. It is developed using C programming language. 

## Research
### Digital to Analog Modulation Techniques
#### Amplitude Shift Keying  
ASK is a type of modulation where the digital signal is represented as a change in amplitude. In order to carry out amplitude shift keying, we require a carrier signal and a binary sequence signal. It is also known as On-Off keying. This is because the carrier waves switch between 0 and 1 according to the high and low level of the input signal.

![ASK](https://github.com/GENESIS2021Q1/sdlc2-team-15/blob/main/6_ImagesandVideo/ASK-waveform-1-1.jpg)

*(Image reference:https://www.watelectronics.com/what-is-an-amplitude-shift-keying-working-and-applications/#:~:text=What%20is%20Amplitude%20Shift%20Keying%3F%201%20Amplitude%20Shift,Disadvantages%20of%20ASK.%20...%206%20ASK%20Applications.%20)*

#### Frequency Shift Keying
Frequency Shift Keying FSK is the digital modulation technique in which the frequency of the carrier signal varies according to the digital signal changes. FSK is a scheme of frequency modulation.  
The output of a FSK modulated wave is high in frequency for a binary High input and is low in frequency for a binary Low input. The binary 1s and 0s are called Mark and Space frequencies.  

![FSK](https://github.com/GENESIS2021Q1/sdlc2-team-15/blob/main/6_ImagesandVideo/2021-07-06%2011_00_51-Frequency%20Shift%20Keying%20-%20Tutorialspoint.png)

#### Binary Phase Shift Keying
Phase Shift Keying PSK is the digital modulation technique in which the phase of the carrier signal is changed by varying the sine and cosine inputs at a particular time.    
This is also called as 2-phase PSK or Phase Reversal Keying. In this technique, the sine wave carrier takes two phase reversals such as 0° and 180°.  
BPSK is basically a Double Side Band Suppressed Carrier DSBSC modulation scheme, for message being the digital information.

![PSK](https://github.com/GENESIS2021Q1/sdlc2-team-15/blob/main/6_ImagesandVideo/2021-07-06%2011_21_22-Digital%20Communication%20-%20Phase%20Shift%20Keying%20-%20Tutorialspoint.png)

#### Quadrature Amplitude Modulation  
The creation of symbols that are some combination of amplitude and phase can carry the concept of transmitting more bits per symbol further. This method is called quadrature amplitude modulation (QAM).  
While QAM is enormously efficient of spectrum, it is more difficult to demodulate in the presence of noise, which is mostly random amplitude variations.  
Linear power amplification is also required.  

![QAM](https://github.com/GENESIS2021Q1/sdlc2-team-15/blob/main/6_ImagesandVideo/WhatsApp%20Image%202021-07-06%20at%2010.59.23%20AM.jpeg)

#### Phase Shift Keying
### Digital to Digital Modulation Techniques
#### NRZ
* NRZ stands for Non-return zero.  
* In NRZ encoding, the level of the signal can be represented either positive or negative.  

**NRZ-L**  
* In NRZ-L encoding, the level of the signal depends on the type of the bit that it represents.
* If a bit is 0 or 1, then their voltages will be positive and negative respectively. Therefore, we can say that the level of the signal is dependent on the state of the bit.  

**NRZ-I**  
* NRZ-I is an inversion of the voltage level that represents 1 bit.  
* In the NRZ-I encoding scheme, a transition occurs between the positive and negative voltage that represents 1 bit.  
* In this scheme, 0 bit represents no change and 1 bit represents a change in voltage level.  

![NRZ](https://github.com/GENESIS2021Q1/sdlc2-team-15/blob/main/6_ImagesandVideo/NRZ.png)

#### RZ  
* RZ stands for Return to zero.  
* There must be a signal change for each bit to achieve synchronization. However, to change with every bit, we need to have three values: positive, negative and zero.  
* RZ is an encoding scheme that provides three values, positive voltage represents 1, the negative voltage represents 0, and zero voltage represents none.  
* In the RZ scheme, halfway through each interval, the signal returns to zero.  
* In RZ scheme, 1 bit is represented by positive-to-zero and 0 bit is represented by negative-to-zero.  

![RZ](https://github.com/GENESIS2021Q1/sdlc2-team-15/blob/main/6_ImagesandVideo/RZ.png)

#### Bi-phase
**Manchester Encoding**
*  It changes the signal at the middle of the bit interval but does not return to zero for synchronization.
*  In Manchester encoding, a negative-to-positive transition represents binary 1, and positive-to-negative transition represents 0.
*  Manchester has the same level of synchronization as RZ scheme except that it has two levels of amplitude.

**Differential Manchester Encoding**
*  It changes the signal at the middle of the bit interval and here the presence or absence of the transition at the beginning of the interval determines the bit. 
*  A transition means binary 0 and no transition means binary 1.
*  Two signal changes represent 0 and one signal change represent 1.

![Biphase modulation](https://github.com/GENESIS2021Q1/sdlc2-team-15/blob/3488ac3d1e3de3766ef10175f7b54b5ea24ab6f1/1_Requirements/digital-transmission7.png)  

*(Image reference:https://www.javatpoint.com/computer-network-digital-transmission)*

## SWOT analysis
![SWOT analysis](https://github.com/GENESIS2021Q1/sdlc2-team-15/blob/f5ed7ad89d835e59149c1be5b23a1f558ea28d66/1_Requirements/genesisproject1swot.png)
## 4W's and 1H
### Who:
* Students and curious learners who wish to see how digital signals are encoded.
### What:
* A console based simulating tool covering digital modulation concepts.
### When:
* On encountering troubles in understanding digital modulation concepts. 
### Where:
* A handy tool that can be accessed from anywhere .
### How:
* One-to-one mapping will be used for displaying the modulated waveforms and bitstreams and also a database of circuits used for the respective purpose will be prepared which would be displayed as and when needed and thus guiding the user to a complete extent.

# Detail requirements
### High Level Requirements:
ID | Description | Category | Status
:---: | :--- | :---: | :---:
HLR01 | User Interface | Technical | Done
HLR02 | Digital to Analog Modulation Techniques | Technical | Done
HLR02 | Digital to Digital Modulation Techniques | Technical | Done
### Low level Requirements:
ID | Description | HLR ID | Status
:---: | :--- | :---: | :---:
LR00 | Input Interface | HLR01 | Done
LR01 | Output Display | HLR01 | Done
LR02 | Displaying theory of circuits | HLR01 | Done
LR03 | Amplitude Shift Keying | HLR02 | Done
LR04 | Frequency Shift Keying | HLR02 | Done
LR05 | Phase Shift Keying | HLR02 | Done
LR06 | Quadrature Amplitude Modulation |HLR02 | Done
LR07 | Non Return to Zero - I | HLR03 | Done
LR08 | Non Return to Zero - L | HLR03 | Done
LR09 | Return to Zero | HLR03 | Done
LR10 | Biphase Manchester | HLR03 | Done
LR11 | Differential Manchester | HLR03 | Done
