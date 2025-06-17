/*
 * Author: Rachel Anchan
 * Date: 27-Aug-24
 * 
 * Q2: WAP to accept a matrix and display the diagonal elements of a given matrix using Java.
 */

import java.util.Scanner;

public class Q2_diagonal {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Accept the size of the matrix
        System.out.print("Enter the size of the matrix (n x n): ");
        int n = scanner.nextInt();

        int[][] matrix = new int[n][n];

        // Accept the matrix elements
        System.out.println("Enter the elements of the matrix:");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                matrix[i][j] = scanner.nextInt();
            }
        }

        // Display the diagonal elements
        System.out.println("Diagonal elements of the matrix:");
        for (int i = 0; i < n; i++) {
            System.out.print(matrix[i][i] + " ");
        }

        scanner.close();
    }
}
