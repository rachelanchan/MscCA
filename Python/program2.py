'''
Program 2: Write a python program to accept two 3X4 matrices and display their addition and multiplication. 
Author: Rachel Anchan
'''
def input_matrix(rows, cols):
    matrix = [] # matrix initialization
    print(f"Enter {rows}x{cols} matrix:")
    for i in range(rows):  # for loop for the row entries
        row = []
        for j in range(cols): # for loop for the column entries
            element = float(input(f"Enter element at position ({i+1},{j+1}): "))
            row.append(element)
        matrix.append(row)
    return matrix

def display_matrix(matrix):
    for row in matrix:
        for element in row:
            print(element, end="\t")
        print()

def add_matrices(matrix1, matrix2):
    result = []
    for i in range(len(matrix1)): # iterate through the rows for sum calculation
        row = []
        for j in range(len(matrix1[0])):  # iterate through columns
            row.append(matrix1[i][j] + matrix2[i][j])
        result.append(row)
    return result

def multiply_matrices(matrix1, matrix2): 
    result = []
    for i in range(len(matrix1)): # iterate through the rows for product calculation 
        row = []
        for j in range(len(matrix2[0])):
            value = 0
            for k in range(len(matrix2)):
                value += matrix1[i][k] * matrix2[k][j]
            row.append(value)
        result.append(row)
    return result

# For printing the resultant matrices
    
print("Matrix 1:")
matrix_a = input_matrix(3, 4)
    
print("Matrix 2:")
matrix_b = input_matrix(3, 4)
    
print("\nMatrix 1:")
display_matrix(matrix_a)
    
print("\nMatrix 2:")
display_matrix(matrix_b)
    
matrix_sum = add_matrices(matrix_a, matrix_b)
print("\nSum of elements of Matrix 1 and Matrix 2:")
display_matrix(matrix_sum)
    
matrix_product = multiply_matrices(matrix_a, matrix_b)
print("\nProduct of elements of Matrix 1 and Matrix 2:")
display_matrix(matrix_product)

