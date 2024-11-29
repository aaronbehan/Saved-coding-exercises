# https://www.codewars.com/kata/5259b20d6021e9e14c0010d4
# Complete the function that accepts a string parameter, and reverses each word in the string. 
# All spaces in the string should be retained.


def reverse_words(text):
    text += " "
    text = list(text)
    outcome_sentence = []
    word_reverser = []

    for letter in text:
        if letter != " ":
            word_reverser.insert(0, letter)
        else:
            outcome_sentence.append("".join(word_reverser))
            word_reverser.clear()
    
    return " ".join(outcome_sentence)
