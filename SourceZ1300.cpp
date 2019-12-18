#include "Simple_window.h"
#include "Graph.h"

int main()
try
{
		// 1
	using namespace Graph_lib;
	Point t1(100, 100);
	Simple_window win{ t1, 800, 800, "My window" };

	int x_size = win.x_max();
	int y_size = win.y_max();
	int x_grid = 100;
	int y_grid = 100;
		// 2 
	Lines grid;
	for (int x = x_grid; x < x_size; x += x_grid)
	{
		grid.add(Point{ x, 0 }, Point{ x, y_size });
	}
	for (int y = y_grid; y < y_size; y += y_grid)
	{
		grid.add(Point{ 0, y }, Point{ x_size, y });
	}
	win.attach(grid);
		// 3
	Rectangle_BS r11{Point{ 0,0 }, 100, 100};
	Rectangle_BS r22{ Point{ 100,100 }, 100, 100 };
	Rectangle_BS r33{ Point{ 200,200 }, 100, 100 };
	Rectangle_BS r44{ Point{ 300,300 }, 100, 100 };
	Rectangle_BS r55{ Point{ 400,400 }, 100, 100 };
	Rectangle_BS r66{ Point{ 500,500 }, 100, 100 };
	Rectangle_BS r77{ Point{ 600,600 }, 100, 100 };
	Rectangle_BS r88{ Point{ 700,700 }, 100, 100 };
	r11.set_fill_color(Color::red);
	r22.set_fill_color(Color::red);
	r33.set_fill_color(Color::red);
	r44.set_fill_color(Color::red);
	r55.set_fill_color(Color::red);
	r66.set_fill_color(Color::red);
	r77.set_fill_color(Color::red);
	r88.set_fill_color(Color::red);
	win.attach(r11);
	win.attach(r22);
	win.attach(r33);
	win.attach(r44);
	win.attach(r55);
	win.attach(r66);
	win.attach(r77);
	win.attach(r88);
		//4
	Image i1{ Point{0,600}, "bug.jpg" };
	Image i2{ Point{200,400}, "bug.jpg" };
	Image i3{ Point{400,200}, "bug.jpg" };
	win.attach(i1);
	win.attach(i2);
	win.attach(i3);
		//5
	for(int i = 1; i < 7; i++)
	{
		Image i4{ Point{i*100,0}, "bug2.jpg" };
		win.attach(i4);
		win.wait_for_button();
	}
	Image i4{ Point{700,100}, "bug2.jpg" };
	win.attach(i4);
	win.wait_for_button();
}
catch (exception & e) {
	cout << e.what() << endl;
	return 1;
}
catch (...) {
	cout << "Unknown error, exit" << endl;
	return 2;
}