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

    public Complex input() {
        Scanner sc = new Scanner(System.in);
        Complex temp = new Complex();
        System.out.print("Enter real and imaginary parts: ");
        temp.re = sc.nextDouble();
        temp.im = sc.nextDouble();
        return temp;
    }

    public Complex addCom(Complex c1) {
        Complex temp = new Complex();
        temp.re = this.re + c1.re;
        temp.im = this.im + c1.im;
        return temp;
    }

    public Complex subCom(Complex c1) {
        Complex temp = new Complex();
        temp.re = this.re - c1.re;
        temp.im = this.im - c1.im;
        return temp;
    }

    public Complex mulCom(Complex c1) {
        Complex temp = new Complex();
        temp.re = this.re * c1.re - this.im * c1.im;
        temp.im = this.re * c1.im + this.im * c1.re;
        return temp;
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
        c1 = c1.input();
        c2 = c2.input();

        // Addition
        result = c1.addCom(c2);
        System.out.print("Sum: ");
        result.show();

        // Subtraction
        result = c1.subCom(c2);
        System.out.print("Difference: ");
        result.show();

        // Multiplication
        result = c1.mulCom(c2);
        System.out.print("Product: ");
        result.show();
    }
}
