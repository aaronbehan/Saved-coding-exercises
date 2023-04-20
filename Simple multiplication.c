// https://www.codewars.com/kata/583710ccaa6717322c000105
// This kata is about multiplying a given number by eight if it is an even number and 
// by nine otherwise.


int simple_multiplication(int number) {
  if (number % 2) {
    return number * 9;
  }
  return number * 8;
}