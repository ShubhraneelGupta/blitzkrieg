#include <Blitz.h>

class SandBox : public Blitz::Application
{
public:
	SandBox()
	{

	}
	~SandBox()
	{

	}
};

Blitz::Application* Blitz::CreateApplication()
{
	return new SandBox();
}