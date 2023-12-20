package test;

public class Point {
    private double x;
    private double y;
//Q1 constructeur parametre
    public Point(double a, double b) {
        x=a;
        y=b;
    }
//Q2
    public double getX() {
        return x;
    }
    public double getY() {
        return y;
    }
    public void setX(double x) {
        this.x = x;
    }
    public void setY(double y) {
        this.y = y;
    }
//Q3
    public void deplacer(double dx, double dy) {
        this.x += dx;
        this.y += dy;
    }
//Q4
    public void afficher() {
        System.out.println("Coordonnées du point : (" + x + "," + y + ")");
    }
//Q5 
    public String toString() {
    	return "( " + String.format("%.2f", x) + " , " + String.format("%.2f", y) + " )";
    }
//Q6
    public double distanceOrigine() {
        return Math.sqrt(x * x + y * y);
    }
//Q7
    public double rho() {
        return distanceOrigine();
    }

    public double theta() {
        return Math.atan2(y, x);
    }

    public void rotation(double angle) {
        double newX = x * Math.cos(angle) - y * Math.sin(angle);
        double newY = x * Math.sin(angle) + y * Math.cos(angle);
        x = newX;
        y = newY;
    }

    public static void main(String[] args) {
        Point point = new Point(3, 4);
        System.out.println(point);
        point.afficher();
        System.out.println("Distance à l'origine : " + point.distanceOrigine());
        System.out.println("Coordonnées polaires (rho, theta) : (" + point.rho() + ", " + point.theta() + ")");
        point.deplacer(2, 2);
        point.afficher();
        point.rotation(Math.PI / 2); // Rotation de 90 degrés (en radians)
        point.afficher();
        // tostring :
        
    }
}
