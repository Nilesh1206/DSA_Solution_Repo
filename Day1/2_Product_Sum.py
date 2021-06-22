def productSum(array, multiplier = 1):
    sum = 0
    for item in array:
        if type(item) == int:
            sum += item
        else:
            sum += productSum(item, multiplier + 1)
    return sum * multiplier
print(productSum([5, 2, [7, -1], 3, [6, [-13, 8], 4]]))