import java.math.*;

public class ProjectEuler97 {

    public static void main(String[] args) {
        
        BigInteger two = BigInteger.valueOf(2);
        BigInteger limit = new BigInteger ("10000000000");
        BigInteger prime = BigInteger.ONE;
        BigInteger start = BigInteger.valueOf(28433);
        
        prime = prime.multiply(start);
        
        for (int i = 0; i <7830457; i++){
            
        prime = prime.multiply(two);
        
        prime = prime.remainder(limit);
        
        }
        
        prime = prime.add(BigInteger.ONE);
        
        System.out.println(prime);
        
    }
}