import java.util.Scanner;

public class Complex {
    private double re, im;

    public Complex() {
        this.re = 0;
        this.im = 0;
    }

    public Complex(double r, double i) {
        this.re = r;
        this.im = i;
    }

    public void input() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter real and imaginary parts: ");
        this.re = sc.nextDouble();
        this.im = sc.nextDouble();
    }

    public void addCom(Complex c1, Complex c2) {
        this.re = c1.re + c2.re;
        this.im = c1.im + c2.im;
    }

    public void subCom(Complex c1, Complex c2) {
        this.re = c1.re - c2.re;
        this.im = c1.im - c2.im;
    }

    public void mulCom(Complex c1, Complex c2) {
        this.re = c1.re * c2.re - c1.im * c2.im;
        this.im = c1.re * c2.im + c1.im * c2.re;
    }

    public void show() {
        if (im >= 0)
            System.out.println(this.re + " + " + this.im + "i");
        else
            System.out.println(this.re + "" + this.im + "i");
    }

    public static void main(String[] args) {
        Complex c1 = new Complex();
        Complex c2 = new Complex();
        Complex result = new Complex();

        // Input complex numbers
        c1.input();
        c2.input();

        // Addition
        result.addCom(c1, c2);
        System.out.print("Sum: ");
        result.show();

        // Subtraction
        result.subCom(c1, c2);
        System.out.print("Difference: ");
        result.show();

        // Multiplication
        result.mulCom(c1, c2);
        System.out.print("Product: ");
        result.show();
    }
}
