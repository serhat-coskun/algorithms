package com.serhat;

import java.awt.*;
import java.util.LinkedList;

public class ConvexHull implements Algorithm{

    private LinkedList<Point> input;
    private LinkedList<Point> solution;

    ConvexHull(LinkedList<Point> input){

        this.input = input;
    }

    @Override
    public void solve() {
        this.solution = solve(input);
    }

    private LinkedList<Point> solve(LinkedList<Point> subproblem){

        
    }

    @Override
    public void printSolution() {

    }
}
