/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: 2AHIF
 * ---------------------------------------------------------
 * Exercise Number: 1
 * Title:			deletable_primes.h
 * Author:		Yimne Raid
 * Due Date:		25.Feb
 * ----------------------------------------------------------
 * Description:
 * CatCoder Deletable Primes.
 * ----------------------------------------------------------
 */ #include "deletable_primes.h"
 unsigned long remove_digit(int index, unsigned long n){
    int putBack = 0;
    putback = n % pow(10, index);
    n /= pow(10,index+1);
    int returnValue=0;
    returnValue=n*pow(10, index)+behind;
    return returnValue;
  }

  bool is_prime(unsigned long n){
    if (n <= 1)
    {
        return false;
    }
    int j=0;
    for (j = 2; j <= n / 2; j++)
    {
        if ((n % j) == 0)
        {
            return false;
        }
    }
  return true;
  }
  int get_lenght(unsigned long n){
    int count=0;

  while (n>1) {
    n/=10;
    count++;
  }
  return count;
}
int get_ways(unsigned long n){
  int ways=0;
  if (is_prime==false) {
    return 0;
  }
  else  if (n<10&&is_prime(n)==true) {
    return 1;
  }

  for (int i = 0; i < get_lenght(n); i++) {
    count=count+get_ways(remove_digit(i,p));
  }
  return count;
}
