using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MyOwnApp
{
    class Circle
    {
        
        public Circle()
        {
            radius = 0;
        }

        private double radius;


        public void SetRadius(double r)
        {
            radius = r;
        }

        public double GetRadius()
        {
            return radius;
        }

        public double calculateArea()
        {
            return Math.PI * radius * radius;
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            //Console.WriteLine("hi, man!");
            //Console.ReadLine();

            Circle circle1 = new Circle();
            Console.WriteLine("At first, the radius is empty: ");
            Console.WriteLine(circle1.GetRadius());

            Console.WriteLine("Then, we modify the radius: ");
            circle1.SetRadius(10);
            Console.WriteLine(circle1.GetRadius());

            Console.ReadLine();
        }
    }
}