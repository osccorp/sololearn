public class OscCaesarCyph
{
	public static String cyph(String str){
		String ret="";
		int i=0, sz=0;
		char c;
		StringBuffer sb = new StringBuffer(str);
		sz=sb.length();
		for(i=0;i<sz;i++){
		    c=sb.charAt(i);
		    c++;
		    sb.setCharAt(i,c);
		}
		ret=sb.toString();
		return ret;
	}
	
	public static String dcyph(String str){
		String ret="";
		int i=0, sz=0;
		char c;
		StringBuffer sb = new StringBuffer(str);
		sz=sb.length();
		for(i=0;i<sz;i++){
		    c=sb.charAt(i);
		    c--;
		    sb.setCharAt(i,c);
		}
		ret=sb.toString();
		return ret;
	}
	
	public static void main(String[] args) {
		String tst="Hola, esta es solo una cadena de prueba de la a a la z y de la A a la Z (a,b,c,d,e,...,x,y,z,1,2,3,4,5,6,7,8,9,...)";
		String cph="";
		String dcph="";
		System.out.println("Cadena original: "+tst);
		cph=cyph(tst);
		System.out.println("Cadena cifrada: "+cph);
		dcph=dcyph(cph);
		System.out.println("Cadena de-cifrada: "+dcph);
	}
}
