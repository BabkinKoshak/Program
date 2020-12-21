#define R 5
#define PI 3.14
int main()
{
	char command = 'l';  // вибір команди
	float l = 0;
	float s = 0;
	float v = 0;
	float result;
switch(command) {   
	case 'l' :    // схема знаходження "l"
	l = 2 * PI * R;
	result = l;
	break;  
	case 's' :        // схема знаходження "s"
	s = PI * R * R;
	result = s;
	break;       
	case 'v' :     // схема знаходження "v"
	v = 4/3 * PI* R * R  * R;
	result = v;
	break; 
  
	return 0;
}
