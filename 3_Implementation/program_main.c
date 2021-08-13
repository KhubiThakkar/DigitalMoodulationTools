/**
 * @file program_main.c
 * @author Group 15 
 * @brief This is our program for Modulation Techniques used for visiualization of waveforms
 * @version 0.1
 * @date 2021-07-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "dhyey.h"

/**
 * @brief This is the Structure for Database
 * 
 */
struct modulation{
    char modulation_name[200];
    char definition[1000];
    char process[1000];
    char advantage1[1000];
    char advantage2[1000];
    char disadvantage1[1000];
    char disadvantage2[1000];
    char application1[1000];
    char application2[1000];
};
/**
 * @brief declaring a function for displaying database
 * 
 * @param modulation_type 
 */
void printdetails(struct modulation modulation_type);
int bin_verify(char []);
int main(void)
{
    struct modulation kask;
    struct modulation kpsk;
    struct modulation kfsk;
    struct modulation kqam;
    struct modulation knrz_l;
    struct modulation knrz_i;
    struct modulation krz;
    struct modulation kmanchester;
    struct modulation kdifferential;
    /*ask details*/
    strcpy(kask.modulation_name,"Amplitude Shift Keying");
    strcpy(kask.definition,"Amplitude-shift keying (ASK) is a form of amplitude modulation that represents digital data as variations in the amplitude of a carrier wave.");
    strcpy(kask.process,"If each symbol represents a single bit, then the carrier signal will be transmitted when the input value is 1, but will not be transmitted when the input value is 0.");
    strcpy(kask.advantage1,"It offers high bandwidth efficiency.");
    strcpy(kask.advantage2,"It has simple receiver design.");
    strcpy(kask.disadvantage1,"It offers lower power efficiency.");
    strcpy(kask.disadvantage2,"ASK modulation is very susceptible to noise interference.");
    strcpy(kask.application1,"Low-frequency RF applications.");
    strcpy(kask.application2,"Home automation devices.");
    /*psk details*/
    strcpy(kpsk.modulation_name,"Phase Shift Keying");
    strcpy(kpsk.definition,"Phase-shift keying (PSK) is a digital modulation process which conveys data by changing (modulating) the phase of a constant frequency reference signal (the carrier wave).");
    strcpy(kpsk.process," PSK uses a finite number of phases, each assigned a unique pattern of binary digits.Each pattern of bits forms the symbol that is represented by the particular phase.");
    strcpy(kpsk.advantage1,"It carries data over RF signal more efficiently compare to other modulation types.");
    strcpy(kpsk.advantage2,"It is less susceptible to errors compare to ASK modulation.");
    strcpy(kpsk.disadvantage1,"It has lower bandwidth efficiency.");
    strcpy(kpsk.disadvantage2,"These detection and recovery algorithms are very complex.");
    strcpy(kpsk.application1,"Local Oscillator.");
    strcpy(kpsk.application2,"Optical Communications.");
    //fsk details
    strcpy(kfsk.modulation_name,"Frequency Shift Keying");
    strcpy(kfsk.definition,"Frequency-shift keying (FSK) is a frequency modulation scheme in which digital information is transmitted through discrete frequency changes of a carrier signal.");
    strcpy(kfsk.process,"With this scheme, the 1 is called the mark frequency and the 0 is called the space frequency.");
    strcpy(kfsk.advantage1,"It has lower probability of error (Pe).");
    strcpy(kfsk.advantage2,"It provides high SNR");
    strcpy(kfsk.disadvantage1,"It uses larger bandwidth compare to other modulation techniques.");
    strcpy(kfsk.disadvantage2,"The BER (Bit Error Rate) performance in AWGN channel is worse compare to PSK modulation.");
    strcpy(kfsk.application1,"It is used on voice grade lines for data rates upto 1200 bps.");
    strcpy(kfsk.application2,"It is used for high frequency radio transmission from 3 to 30 MHz.");
    //qam details
    strcpy(kqam.modulation_name,"Quadrature amplitude modulation");
    strcpy(kqam.definition,"Quadrature Amplitude Modulation, QAM is a signal in which two carriers shifted in phase by 90 degrees (i.e. sine and cosine) are modulated and combined.");
    strcpy(kqam.process,"It conveys two analog message signals, or two digital bit streams, by changing (modulating) the amplitudes of two carrier waves, using the amplitude-shift keying (ASK) digital modulation scheme or amplitude modulation (AM) analog modulation scheme.");
    strcpy(kqam.advantage1,"Supports a high data rate.");
    strcpy(kqam.advantage2,"Noise immunity is very high.");
    strcpy(kqam.disadvantage1,"More susceptible to noise because the states are closer together so that a lower.");
    strcpy(kqam.disadvantage2,"Level of noise is needed to move the signal to a different decision point.");
    strcpy(kqam.application1,"Mostly observed in radio communications and data delivery applications systems.");
    strcpy(kqam.application2,"In cellular technology, wireless device technology quadrature amplitude modulation is preferred.");
    /*nrz_l details*/
    strcpy(knrz_l.modulation_name,"Non-return to-zero-Level");
    strcpy(knrz_l.definition,"It is the same as NRZ, however, the first bit of the input signal should have a change of polarity.");
    strcpy(knrz_l.process,"There is a change in the polarity of the signal, only when the incoming signal changes from 1 to 0 or from 0 to 1.");
    strcpy(knrz_l.advantage1,"It is simple.");
    strcpy(knrz_l.advantage2,"A lesser bandwidth is required.");
    strcpy(knrz_l.disadvantage1,"No error correction done.");
    strcpy(knrz_l.disadvantage2,"Presence of low frequency components may cause the signal droop.");
    strcpy(knrz_l.application1,"Non-return to zero encoding is commonly used in slow speed communications interfaces for both synchronous and asynchronous transmission.");
    strcpy(knrz_l.application2,"Used in CAN protocol.");
    /*nrz_i details*/
    strcpy(knrz_i.modulation_name,"Non-return to-zero-Inverted");
    strcpy(knrz_i.definition,"In this type, inversion of voltage represent binary '1' and no change in voltage represent binary '0'.");
    strcpy(knrz_i.process,"Transition at the beginning of the bit interval is considered as binary '1' where as no transition is considered as binary '0' and viceversa. ");
    strcpy(knrz_i.advantage1,"It is simple.");
    strcpy(knrz_i.advantage2,"A lesser bandwidth is required.");
    strcpy(knrz_i.disadvantage1,"No error correction done.");
    strcpy(knrz_i.disadvantage2,"Presence of low frequency components may cause the signal droop.");
    strcpy(knrz_i.application1,"Non-return to zero encoding is commonly used in slow speed communications interfaces for both synchronous and asynchronous transmission.");
    strcpy(knrz_i.application2,"Used in CAN protocol.");
    /*RZ details*/
    strcpy(krz.modulation_name,"Return-to-zero");
    strcpy(krz.definition,"Return-to-zero (RZ or RTZ) describes a line code used in telecommunications signals in which the signal drops (returns) to zero between each pulse. This takes place even if a number of consecutive 0s or 1s occur in the signal.");
    strcpy(krz.process,"The zero between each bit is a neutral or rest condition, such as a zero amplitude in pulse-amplitude modulation (PAM), zero phase shift in phase-shift keying (PSK), or mid-frequency in frequency-shift keying (FSK).");
    strcpy(krz.advantage1,"It is simple.");
    strcpy(krz.advantage2,"The spectral line present at the symbol rate can be used as a clock.");
    strcpy(krz.disadvantage1,"No error correction.");
    strcpy(krz.disadvantage2,"Occupies twice the bandwidth as unipolar NRZ.");
    strcpy(krz.application1,"Digital signal transmission.");
    strcpy(krz.application2,"Telephone line.");
    /*biphase manchester details*/
    strcpy(kmanchester.modulation_name,"Biphase Manchester");
    strcpy(kmanchester.definition,"The Manchester Encoding is also called Biphase code as each bit is encoded by a positive 90 degrees phase transition or by negative 90 degress phase transiton");
    strcpy(kmanchester.process,"The transition for the resultant pulse is from High to Low in the middle of the interval, for the input bit 1. While the transition is from Low to High for the input bit 0.");
    strcpy(kmanchester.advantage1,"As they are bipolar signals, ideally no DC components are present.");
    strcpy(kmanchester.advantage2,"It provides error detection by detecting absence of expected transitions.");
    strcpy(kmanchester.disadvantage1,"It maps at least one transition per bit time and possibly two bits.");
    strcpy(kmanchester.disadvantage2,"It is used over shorter distances (in LANs).");
    strcpy(kmanchester.application1,"Used in token ring local area network.");
    strcpy(kmanchester.application2,"Magnetic and optical storage.");
    /*differential manchester details*/
    strcpy(kdifferential.modulation_name,"differential Manchester");
    strcpy(kdifferential.definition,"Differential Manchester encoding is a differential encoding technology, using the presence or absence of transitions to indicate logical value.");
    strcpy(kdifferential.process,"If there occurs a transition at the beginning of the bit interval, then the input bit is 0. If no transition occurs at the beginning of the bit interval, then the input bit is 1.");
    strcpy(kdifferential.advantage1,"As they are bipolar signals, ideally no DC components are present.");
    strcpy(kdifferential.advantage2,"It provides error detection by detecting absence of expected transitions.");
    strcpy(kdifferential.disadvantage1,"It maps at least one transition per bit time and possibly two bits.");
    strcpy(kdifferential.disadvantage2,"It is used over shorter distances (in LANs).");
    strcpy(kdifferential.application1,"Used in token ring local area network.");
    strcpy(kdifferential.application2,"Magnetic and optical storage.");

    // declaration of variables
    char* binaryInput = NULL;
    binaryInput = (char*) malloc((8)*sizeof(char));
    char* outputString = NULL;
    outputString = (char*) malloc((9)*sizeof(char));
    int option,option2;
    int option1;
    char* stringy;
    stringy = (char*) malloc((16)*sizeof(char));
    char *nrziOutput = NULL;
    nrziOutput = (char*) malloc((8)*sizeof(char));
    
    // continuous loop
    here:
    while (1){
        // Start of Code
        newScreen();
        // select what you want to do
        printf("1 -> EXPLORE\n");
        printf("2 -> QUIT\n\n\n\n");
        char choice1;
        printf("YOUR CHOICE : ");
        scanf("%c",&choice1);
        if (choice1 == '1'){
            // enter binary input
            printf("Enter 8 bit binary number: ");
            scanf("%s", binaryInput);
            
            // validation of input
            int check = bin_verify(binaryInput);
            if (check){
                printf("Valid binary number %s .\n", binaryInput);
                
            }
            if(strlen(binaryInput) > 8){
                printf("Invalid Input!");
                main();
            }
            else if(strlen(binaryInput) < 8){
                // adding zeroes to shorter inputs
                binaryInput = zeroPadding(binaryInput,outputString);
            }
            buffer(binaryInput,0);
            display1();
            scanf("%d",&option1);
            if(option1==1){
                // Digital to Analog madulation
                displayAnalog();
                scanf("%d",&option2);
                if(option2 == 1){
                    ASKDisplay(binaryInput);
                    printdetails(kask);
                }
                else if(option2 == 2){
                    fsk();
                    printdetails(kfsk);
                }
                else if(option2 == 3){
                    psk();
                    printdetails(kpsk);
                }
                else if(option2 == 4){
                    qam();
                    printdetails(kqam);

                }
                else{
                    printf("INVALID OPTION,TRY AGAIN");
                    main();
                }
            }
            else if(option1 == 2){
                // digital to digital modulation
                displayDigital();
                scanf("%d",&option);
                if (option == 1){
                    stringy = nrziModulation(binaryInput,nrziOutput);
                    printdetails(knrz_i);
                }
                else if (option == 2){
                    stringy = nrzlModulation(binaryInput);
                    printdetails(knrz_l);
                }
                else if (option == 3){
                    stringy = rzModulation(binaryInput);
                    printdetails(krz);
                }
                else if(option==4){
                    stringy= manchesterMod(binaryInput);
                    printdetails(kmanchester);
                }
                else if(option==5){
                    stringy= differentialMod(binaryInput);
                    printdetails(kdifferential);
                }
                else{
                    printf("Invalid Input\n");
                    main();
                }
                printf("The output string is: %s\n",stringy);
            }

        } 
        else if (choice1 == '2'){
            quit();
        } 
        else {
            goto here;
        }
    }
    free(outputString);
    free(nrziOutput);
    free(binaryInput);
    return 0;
}















int bin_verify(char str[])
{
    int i;
    
    for (i = 0; i < strlen(str); i++)
    {
        if ((str[i] - '0' != 1 ) && (str[i] - '0' != 0))
        {
            printf("INVALID INPUT.RETRY!!");
            main();
        }
    }
    return 1;
}
void printdetails(struct modulation modulation_type)
{
    for(int i=0;i<100;i++)
    {
        printf("-");
    }
    printf("\n");
    printf("MODULATION: %s\n",modulation_type.modulation_name);
    for(int j=0;j<100;j++)
    {
        printf("-");
    }
    printf("\n");
    printf("DEFINATION: %s\n",modulation_type.definition);
    for(int k=0;k<100;k++)
    {
        printf("-");
    }
    printf("\n");
    printf("PROCESS: %s\n",modulation_type.process);
    for(int l=0;l<100;l++)
    {
        printf("-");
    }
    printf("\n");
    printf("ADVANTAGES:\n");
    printf("1. %s\n",modulation_type.advantage1);
    printf("2. %s\n",modulation_type.advantage2);
    for(int m=0;m<100;m++)
    {
        printf("-");
    }
    printf("\n");
    printf("DISADVANTAGES:\n");
    printf("1. %s\n",modulation_type.disadvantage1);
    printf("2. %s\n",modulation_type.disadvantage2);
    for(int n=0;n<100;n++)
    {
        printf("-");
    }
    printf("\n");
    printf("APPLICATIONS:\n");
    printf("1. %s\n",modulation_type.application1);
    printf("2. %s\n",modulation_type.application2);
    for(int i=0;i<100;i++)
    {
        printf("-");
    }
    printf("\n");
}


