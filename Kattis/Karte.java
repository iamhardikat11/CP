import java.util.*;
public class Karte {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        if(s.length()%3!=0)
            System.out.println("GRESKA");
        else
        {
            ArrayList<String> v_P = new ArrayList<>();
            ArrayList<String> v_H = new ArrayList<>();
            ArrayList<String> v_K = new ArrayList<>();
            ArrayList<String> v_T = new ArrayList<>();
            int c_P = 13, c_K = 13, c_H = 13, c_T = 13;
            for(int i=0;i<=s.length()-1;i+=3)
            {
                String a = s.substring(i,i+3);
                switch (a.charAt(0))
                {
                    case 'P': if(v_P.contains(a))
                              {
                                 System.out.println("GRESKA");
                                 return;
                              }
                              else
                              {
                                 c_P--;
                                 v_P.add(a);
                              }
                              break;
                    case 'K': if(v_K.contains(a))
                              {
                                 System.out.println("GRESKA");
                                 return;
                              }
                              else
                              {
                                 c_K--;
                                 v_K.add(a);
                              }
                              break;
                    case 'H': if(v_H.contains(a))
                              {
                                System.out.println("GRESKA");
                                return;
                              }
                              else
                              {
                                c_H--;
                                v_H.add(a);
                              }
                              break;
                    case 'T': if(v_T.contains(a))
                              {
                                System.out.println("GRESKA");
                                return;
                              }
                              else
                              {
                                c_T--;
                                v_T.add(a);
                              }
                }
            }
            System.out.println(c_P+" "+c_K+" "+c_H+" "+c_T);

        }

    }
}
