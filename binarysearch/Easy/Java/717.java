import java.util.*;

class Solution {
    public static int solve(String[] ops)
    {
        try {
            ArrayList<Integer> v = new ArrayList<>();
            for (String op : ops) {
                switch (op) {
                    case "POP" -> {
                        v.remove(v.size() - 1);
                    }
                    case "DUP" -> {
                        v.add(v.get(v.size() - 1));
                    }
                    case "+" -> {
                        int n = v.get(v.size() - 2) + v.get(v.size() - 1);
                        v.remove(v.size() - 2);
                        v.remove(v.size() - 1);
                        v.add(n);
                    }
                    case "-" -> {
                        int n = v.get(v.size() - 1) - v.get(v.size() - 2);
                        v.remove(v.size() - 2);
                        v.remove(v.size() - 1);
                        v.add(n);
                    }
                    default -> v.add(Integer.parseInt(op));
                }
            }
            return v.get(v.size() - 1);
        }
       catch (Exception e)
       {
           return -1;
       }
    }
