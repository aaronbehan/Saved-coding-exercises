# https://www.codewars.com/kata/52449b062fb80683ec000024
# It must start with a hashtag (#).
# All words must have their first letter capitalized.
# If the final result is longer than 140 chars it must return false.
# If the input or the result is an empty string it must return false.


def generate_hashtag(string):

    string = string.split()

    for word in string:
        index = string.index(word)
        string[index] = word.capitalize()
    
    if string and len("".join(string)) < 139:
        return "#" + "".join(string) 
    else:
        return False
