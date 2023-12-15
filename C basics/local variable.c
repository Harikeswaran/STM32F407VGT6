#include <stdio.h>

int main()
{
    int localvariable = 4;
    printf("The localvariable is %d",localvariable);
    return 0;
}
// OUTPUT = The localvariable is 4 

/*************************************
  #include <stdio.h>

int localvariable = 10;
int main()
{
    int localvariable = 4;
    printf("The localvariable is %d",localvariable);
    return 0;
}
// OUTPUT =  The localvariable is 4
// EXPLANATION = compiler will give preference to main function body first, so the local variable only gets executed
******************************************/

/*************************************
  #include <stdio.h>

int localvariable = 10;
int main()
{
    {
        int localvariable = 4;
    }
    printf("The localvariable is %d",localvariable);
    return 0;
}

// OUTPUT = The localvariable is 10
// EXPLANATION = localvariable inside the main function gets isolated because of the parenthesis, so when the compiler runs the execution goes out of the scope for local variable, it only search for the exisiting which is global(localvariable)
****************************************/
