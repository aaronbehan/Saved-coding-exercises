# https://www.codewars.com/kata/5264d2b162488dc400000001
# Write a function that takes in a string of one or more words, and returns the same string, but with all
# five or more letter words reversed (Just like the name of this Kata). Strings passed in will consist of
# only letters and spaces. Spaces will be included only when more than one word is present.


def spin_words(text):
    text = text.split()
    
    for word in text:
        if len(word) > 4:
            index = text.index(word)
            text[index] = word[::-1]
    
    return " ".join(text)
