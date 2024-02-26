void main()
{
    int *no = (int *)malloc(sizeof(int));
    int *flag = (int *)malloc(sizeof(int));
    int *i = (int *)malloc(sizeof(int));
    (*flag) = 0;
    printf("Enter the number:");
    scanf("%d", &(*no));

    for ((*i) = 2; (*i) < (*no); (*i)++)
    {
        if ((*no) % (*i) == 0)
        {
            (*flag) = 1;
        }
    }
    if (*flag == 0)
    {
        printf("Number is prime");
    }
    else{
        printf("Numbe is not  prime");
    }

    free(no);
    free(i);
    free(flag);
  
    // }
}