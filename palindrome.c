int ft_itoa(int n)
{
    while (n > 9)
        ft_itoa(n % 10)
    n =/ 10;
    
}

bool isPalindrome(int x) {
    char *itoa;

    itoa = ft_itoa(x);
}
