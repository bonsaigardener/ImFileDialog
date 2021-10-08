#pragma once

#pragma warning(push)
#pragma warning(disable : 4244) // '=': conversion from 'int' to 'stbi__uint16', possible loss of data

extern "C" {
#  include <stb/stb_image.h>
#  include <stb/stb_image_write.h>
#  include <stb/stb_image_resize.h>
}

#pragma warning(pop)


namespace sge
{
	namespace ui
	{

	}
}
