package com.serhat;

import java.awt.Point;
import java.util.Arrays;
import java.util.Collections;
import java.util.LinkedList;

public class Main {

    public static void main(String[] args) {
	// write your code here

        LinkedList<Point> input = new LinkedList<>();
        int size = 1000;
        Integer[] xs = new Integer[size];
        Integer[] ys = new Integer[size];
        for (int i = 0; i < size; i++) {
            xs[i] = i;
            ys[i] = i;
        }
        Collections.shuffle(Arrays.asList(xs));
        Collections.shuffle(Arrays.asList(ys));

        for (int i = 0; i < size; i++){
            input.add(new Point(xs[i], ys[i]));
        }

        Algorithm alg1 = new ConvexHull(input);

        alg1.solve();
        alg1.printSolution();
    }
}
