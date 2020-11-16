#include "MyForm.h" 
#include <Windows.h> 
#include <opencv2/opencv.hpp>
#include <iostream>

using namespace ImagerForm; // Название проекта 

[STAThread]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}
