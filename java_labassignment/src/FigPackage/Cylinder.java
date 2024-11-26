package FigPackage;

public class Cylinder extends Figure {
	 private double h;

	 public Cylinder(double r, double h) {
	     this.r = r;
	     this.h = h;
	 }

	 @Override
	 public void calcArea() {
	     a = (2 * pi * r * r) + (2 * pi * r * h);
	 }

	 @Override
	 public void calcVolume() {
	     v = pi * r * r * h;
	 }

	 @Override
	 public void dispArea() {
	     System.out.println("Area of Cylinder: " + a);
	 }

	 @Override
	 public void dispVolume() {
	     System.out.println("Volume of Cylinder: " + v);
	 }
}
