import java.util.Scanner;
  class codechef{
	public static void main(String[] args){
		Scanner s = new Scanner(System.in);
		int t = s.nextInt();
		while(t-->0){
			char[] u = s.next().toCharArray();
			char[] d = s.next().toCharArray();
			
			int[][] a  = new int[3][1000];
 			a[0][u[0]]=1;
			a[0][d[0]]=1;
			a[1][u[1]]=1;
			a[1][d[1]]=1;
			a[2][u[2]]=1;
			a[2][d[2]]=1;
 			
 			System.out.println(spellbob(a));
 		}
	}
	public static String spellbob(int a[][]){
	
		if(a[0]['o']==1 && a[1]['b']==1 && a[2]['b']==1) 
			return "yes";
		if(a[1]['o']==1 && a[0]['b']==1 && a[2]['b']==1) 
			return "yes";
		if(a[2]['o']==1 && a[0]['b']==1 && a[1]['b']==1) 
			return "yes";
		
		return "no";
	}
 } 