#include "login.h"

using namespace krustyburguer;

[STAThreadAttribute]

int main(array<System::String^>^ args) {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew login());

	return 0;
}

