# https://www.codewars.com/kata/5208f99aee097e6552000148
# Complete the solution so that the function will break up camel casing, using a space between words.


def solution(s):
    outcome = ""

    for letter in s:
        if letter.isupper():
            outcome += (" " + letter)
        else:
            outcome += letter

    return outcome
