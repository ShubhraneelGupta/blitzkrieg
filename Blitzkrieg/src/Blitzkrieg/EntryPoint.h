#pragma once

#ifdef BZ_PLATFORM_WINDOWS
extern Blitz::Application* Blitz::CreateApplication();
int main(int argc, char** argv)
{
	auto app = Blitz::CreateApplication();
	app->Run();
	delete app;
}

#endif