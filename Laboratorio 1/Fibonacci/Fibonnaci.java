package clase;


public class Fibonnaci {
	static long n1,n2;
	
	static void init(){
	    n1 = 1;
	    n2 = 0;
	}
	
	public static void main(String[] args) {
		byte a = 0;
		short b = 0;
		int c = 0,i;
		long d = 0;
		init();
	    for(i=1;a>=n2;i++){
	        a = (byte) (n1+n2);
	        n2 = n1;
	        n1 = a;
	    }
	    System.out.println("Byte: "+i);
	    init();
	    for(i=1;b>=n2;i++){
	        b = (short) (n1+n2);
	        n2 = n1;
	        n1 = b;
	    }
	    System.out.println("Short: "+i);
	    init();
	    for(i=1;c>=n2;i++){
	        c = (int) (n1+n2);
	        n2 = n1;
	        n1 = c;
	    }
	    System.out.println("Int: "+i);
	    init();
	    for(i=1;d>=n2;i++){
	        d = n1+n2;
	        n2 = n1;
	        n1 = d;
	    }
	    System.out.println("Long: "+i);
	}
	
}
