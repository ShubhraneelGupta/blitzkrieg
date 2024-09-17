#pragma once
#include "Core.h"
#include <iostream>
namespace Blitz
{
	class BZ_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};


	//To be defined in client
	Application* CreateApplication();
}

