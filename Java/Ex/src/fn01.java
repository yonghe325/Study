public class fn01 {
  public static void main(String[] args) {
    double sum1 = 1.0;
    double sum2 = 1.0;
    for (int i = 0; i < 365; i++) {
      sum1*=1.01;
      sum2*=0.99;
    }
    // double sum1 = Math.pow(1.01, 365);
    // double sum2 = Math.pow(0.99, 365);

    System.out.println(sum1+" "+sum2);
  }
}
