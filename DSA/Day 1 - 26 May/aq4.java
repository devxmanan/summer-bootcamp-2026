//Take a matrix as input, then take addType (0= row, 1= column) and add index as input, then add elements. Later take deleteType (0= row, 1= column) and delete index as input & delete elements.

import java.util.Scanner;

class Matrix {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        int rows = in.nextInt();
        int cols = in.nextInt();
        int[][] matrix = new int[rows][cols];
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                matrix[i][j] = in.nextInt();
            }
        }

        int addType = in.nextInt();
        int addIndex = in.nextInt();
        if (addType == 0) {
            int[] newRow = new int[cols];
            for (int j = 0; j < cols; j++) {
                newRow[j] = in.nextInt();
            }
            matrix[addIndex] = newRow;
        } else {
            int[] newCol = new int[rows];
            for (int i = 0; i < rows; i++) {
                newCol[i] = in.nextInt();
            }
            for (int i = 0; i < rows; i++) {
                matrix[i][addIndex] = newCol[i];
            }
        }

        int deleteType = in.nextInt();
        int deleteIndex = in.nextInt();
        if (deleteType == 0) {
            for (int i = 0; i < rows; i++) {
                if (i == deleteIndex)
                    continue;
                for (int j = 0; j < cols; j++) {
                    System.out.print(matrix[i][j] + " ");
                }
                System.out.println();
            }
        } else {
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    if (j == deleteIndex)
                        continue;
                    System.out.print(matrix[i][j] + " ");
                }
                System.out.println();
            }
        }
        in.close();
    }
}
