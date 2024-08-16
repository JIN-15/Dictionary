#include "MyForm.h"
using namespace System; //NAME SPACE FOR SYSTEM
using namespace System::Windows::Forms; //NAME SPACE FOR WINDOW FORM
[STAThreadAttribute]
int main() {
	
	Application::EnableVisualStyles(); //SETTING APPLICATION STYLE
	Application::SetCompatibleTextRenderingDefault(false); //SETTING RENDER SPEED TO FASLE
	Project2::MYFORM form; //CREATING FORM TYPE OBJECT
	Application::Run(% form); //CALLING ITS RUN FUCNTION
		
	
}
