using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MyOwnApp
{
    class Circle
    {
        /* CONSTRUCTORS */
        public Circle()
        {
            radius = 0;
            NumCircles++;
        }

        public Circle(double initialRadius)
        {
            radius = initialRadius;
            NumCircles++;
        }

        /* FIELDS */
        private double radius;
        public static int NumCircles = 0;

        /* METHODS */
        public void SetRadius(double r)
        {
            radius = r;
        }

        public double GetRadius()
        {
            return radius;
        }

        public double CalculateArea()
        {
            return Math.PI * radius * radius;
        }

        public static void IncrementParam(ref int p)
        {
            p++;
        }

        public static void InitializeParam(out int p)
        {
            p = 55;
        }

    }

    enum Season {Spring, Summer, Fall, Winter}



    class Program
    {
        static void Main(string[] args)
        {
            //Console.WriteLine("hi, man!");
            //Console.ReadLine();

            Circle circle1 = new Circle();
            Console.WriteLine("At first, the radius of circle1 is empty: ");
            Console.WriteLine(circle1.GetRadius());

            Console.WriteLine("Then, we modify the radius: ");
            circle1.SetRadius(10);
            Console.WriteLine(circle1.GetRadius());

            Console.WriteLine("Calculating the area of circle1: ");
            Console.WriteLine(circle1.CalculateArea());

            //Console.ReadLine();

            Circle circle2 = new Circle(5);
            Console.WriteLine("Creating circle2 with initial radius: 5");
            Console.WriteLine(circle2.GetRadius());
            Console.WriteLine("Calculating the area of circle2: ");
            Console.WriteLine(circle2.CalculateArea());

            //Console.ReadLine();

            Console.WriteLine("Creating circle3 with initial radius: 7");
            Circle circle3 = new Circle(7);
            Console.WriteLine("Total nb of corcles: {0}", Circle.NumCircles);

            //Console.ReadLine();

            int param = 7;
            Console.WriteLine("Passing param to be incremented: 7");
            
            /* ref */
            Circle.IncrementParam(ref param);
            Console.WriteLine("Param after incrementation: {0}", param);

            /* out */
            int param2; // non initialized
            Console.WriteLine("Passing non initialized param to be initialized");
            Circle.InitializeParam(out param2);
            Console.WriteLine("Param after initialization: {0}", param2);

            //Console.ReadLine();

            object obj1 = new object();
            object obj2 = obj1;


            if (obj1.Equals(obj2))
            {
                Console.WriteLine("Objects are the same");
                Console.WriteLine("Object type: {0}", obj1.GetType()); 
                Console.WriteLine("Hash code obj1: {0}", obj1.GetHashCode());
                Console.WriteLine("Hash code obj2: {0}", obj2.GetHashCode());
            }
            else
            {
                Console.WriteLine("Objects are not the same");
            }

            /* enums */
            Season colorful = Season.Fall;
            Console.WriteLine(colorful); 

            Console.ReadLine();

        }
    }
}