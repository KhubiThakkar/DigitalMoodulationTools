#ifndef __sam_h__
#define __sam_h__
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #include <ctype.h>
    #include <math.h>
    
    /**
     * @brief main() function
     * 
     * @return int 
     */
    int main(void);

    /**
     * @brief Changes the int number to String
     * 
     * @return char* 
     */
    char* convertToString(int , char* , int ); 

    /**
     * @brief This is function for NRZ-L modulation
     * 
     * @return char* 
     */
    char* nrzlModulation(char *);

    /**
     * @brief This is function for NRZ-I modulation
     * 
     * @return char* 
     */
    char* nrziModulation(char *, char *);

    /**
     * @brief This is function for RZ modulation
     * 
     * @return char* 
     */
    char* rzModulation(char *);

    /** 
     * @brief This function adds zeros if the strings are smaller than 
     * 8 bits
     * @return char* 
     */
    char* zeroPadding(char *, char *);

    /**
     * @brief printing waveform function of RZ modulation
     * 
     */
    void printingRZ(char *);
    
    /**
     * @brief printing waveform function of NRZ-I modulation
     * 
     */
    void printingNRZ(char *);

    /**
     * @brief manchester modulation
     * 
     * @return char* 
     */
    char* manchesterMod(char *);
    /**
     * @brief differential modulation
     * 
     * @return char* 
     */
    char* differentialMod(char *);
    /**
     * @brief displaying differential
     * 
     */
    void displayDifferential(char *);
    /**
     * @brief displaying manchester
     * 
     */
    void displaybiphase(char *);
    int buffer(char* ,int );

    /**
     * @brief FSK modulation function
     * 
     */
    void  fsk();
    void  psk();
    void  qam();
    void qamdisplay();
    /**
     * @brief Display the output in form of waveform
     * 
     * @param xs 
     * @param xsLength 
     * @param ys 
     * @param ysLength 
     * @return int 
     */
    int DisplayFunction (double *xs, size_t xsLength, double *ys, size_t ysLength);
    
    /**
     * @brief Just creating array to give sinusoidal output from xs values to ys values
     * same way all other sine functions work
     * @param ys 
     * @param xs 
     * @param position_indicator 
     * @return int 
     */
    int SineHighAmp (double *ys,double *xs,int position_indicator);
    int SineLowAmp (double *ys,double *xs,int position_indicator);
    int SineHighFreq(double*ys,double *xs,int position_indicator);
    int SineLowFreq(double*ys,double *xs,int position_indicator);
    int SinePositive(double*ys,double *xs,int position_indicator);
    int SineNegative(double*ys,double *xs,int position_indicator);
    
    /**
     * @brief Just mapping values to DisplayFunction
     * 
     * @param binaryInput 
     */
    void ASKDisplay(char* binaryInput); 
    int FSKDisplay(int* displaycode);
    int PSKDisplay(int* displaycode);
    /**
     * @brief funcction to exit the code
     * 
     * @return int 
     */
    int quit(void);
    /**
     * @brief function to display options for Digital modulation
     * 
     */
    void displayDigital(void);

    /**
     * @brief function to display options for Analog modulation
     * 
     */
    void displayAnalog(void);

    /**
     * @brief Main display
     * 
     */
    void display1(void);

    /**
     * @brief Display a cleaner Screen
     * 
     */
    void newScreen();

#endif
