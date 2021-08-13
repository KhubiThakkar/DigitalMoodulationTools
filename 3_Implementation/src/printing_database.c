void printdetails(struct Modulation modulation_type)
{
    for(int i=0;i<500;i++)
    {
        printf("-");
    }
    printf("\n");
    printf("MODULATION: %s\n",modulation_type.modulation_name);
    for(int j=0;j<500;j++)
    {
        printf("-");
    }
    printf("\n");
    printf("DEFINATION: %s\n",modulation_type.definition);
    for(int k=0;k<500;k++)
    {
        printf("-");
    }
    printf("\n");
    printf("PROCESS: %s\n",modulation_type.process);
    for(int l=0;l<500;l++)
    {
        printf("-");
    }
    printf("\n");
    printf("ADVANTAGES:\n");
    printf("1. %s\n",modulation_type.advantage1);
    printf("2. %s\n",modulation_type.advantage2);
    for(int m=0;m<500;m++)
    {
        printf("-");
    }
    printf("\n");
    printf("DISADVANTAGES:\n");
    printf("1. %s\n",modulation_type.disadvantage1);
    printf("2. %s\n",modulation_type.disadvantage2);
    for(int n=0;n<500;n++)
    {
        printf("-");
    }
    printf("\n");
    printf("APPLICATIONS:\n");
    printf("1. %s\n",modulation_type.application1);
    printf("2. %s\n",modulation_type.application2);
    for(int i=0;i<500;i++)
    {
        printf("-");
    }
    printf("\n");
}
