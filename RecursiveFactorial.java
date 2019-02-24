public int factorial(int x)
{
    //base condition
    if(x <= 1)
    {
        return 1;
    }
    
    //recursive statement
    return x * factorial(x - 1);
}
