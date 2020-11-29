/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;
import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    int T = sc.nextInt();
    for (int t = 0; t < T; ++t) {
      int x = sc.nextInt();
      int y = sc.nextInt();

      System.out.println(step(x, y));
    }

    sc.close();
  }

  static int step(int x, int y) {
    if (x < y) {
      if ((y - x) % 2 == 0) {
        if ((y - x) % 4 == 0) {
          return 3;
        } else {
          return 2;
        }
      } else {
        return 1;
      }
    } else if (x > y) {
      if ((x - y) % 2 == 0) {
        return 1;
      } else {
        return 2;
      }
    } else {
      return 0;
    }
  }
}