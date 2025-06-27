# Clean example of how recursion can read through a nested list within a nested list within a nested list

def recursion(lst):
  disassembled_number_list = []

  for item in lst:
    if isinstance(item, int):
      disassembled_number_list.append(item)
      
    elif isinstance(item, list):
      disassembled_number_list.append(recursion(item))

    print(disassembled_number_list)
    
  return sum(disassembled_number_list)


number_list = [1, [2, [3, 4, [5, 6]]]]

sum_number_list = recursion(number_list)

print(sum_number_list)
