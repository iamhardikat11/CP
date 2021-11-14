import java.util.*;
public class Matching_Words {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<String> v = new ArrayList<String>();
        String s = sc.next();
        v.add(s);
        while(!s.equals("end"))
        {
            s = sc.next();
            v.add(s);
        }
        ArrayList<String> common = new ArrayList<String>();
        for(int i=0;i<v.size();i++)
        {
            for(int j=i+1;j<v.size();j++)
            {
                if(v.get(i).equals(v.get(j)))
                    common.add(v.get(i));
            }
        }
        for(int i=0;i<common.size();i++)
        {
            for(int j=i+1;j<common.size();j++)
            {
                if(common.get(i).compareTo(common.get(j))>0)
                {
                    String temp = common.get(i);
                    common.set(i,common.get(j));
                    common.set(j,temp);
                }
            }
        }
        common.add("end");
        for(int i=0;i<common.size()-1;i++) {
            if(!common.get(i).equals(common.get(i+1)) && !common.get(i).equals("end"))
             System.out.print(common.get(i) + " ");
        }
    }
}
