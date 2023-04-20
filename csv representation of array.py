# https://www.codewars.com/kata/5a34af40e1ce0eb1f5000036
# Create a function that returns the CSV representation of a two-dimensional numeric array.


def to_csv_text(lst):
    temporary_list = []

    for i in range(len(lst)):
        for j in range(len(lst[i])):
            lst[i][j] = str(lst[i][j])
        temporary_list.append(','.join(lst[i]))
    
    return "\n".join(temporary_list)
