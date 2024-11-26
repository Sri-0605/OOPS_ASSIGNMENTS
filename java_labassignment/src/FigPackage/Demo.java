package FigPackage;

public class Demo {
public static void main(String[] args) {
    Cone cone = new Cone(5, 10, 15);
    cone.calcArea();
    cone.calcVolume();
    cone.dispArea();
    cone.dispVolume();

    Sphere sphere = new Sphere(5);
    sphere.calcArea();
    sphere.calcVolume();
    sphere.dispArea();
    sphere.dispVolume();

    Cylinder cylinder = new Cylinder(5, 10);
    cylinder.calcArea();
    cylinder.calcVolume();
    cylinder.dispArea();
    cylinder.dispVolume();
}
}