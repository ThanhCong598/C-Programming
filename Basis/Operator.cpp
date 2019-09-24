
class Point
{
public:
  
   Point& operator++();     
   Point operator++(int);     

  
   Point& operator--();       
   Point operator--(int);     

   
   Point() { _x = _y = 0; }

  
   int x() { return _x; }
   int y() { return _y; }
private:
   int _x, _y;
};


Point& Point::operator++()
{
   _x++;
   _y++;
   return *this;
}


Point Point::operator++(int)
{
   Point temp = *this;
   ++*this;
   return temp;
}


Point& Point::operator--()
{
   _x--;
   _y--;
   return *this;
}


Point Point::operator--(int)
{
   Point temp = *this;
   --*this;
   return temp;
}
int main()
{
	
}
