#pragma once

#pragma warning(push)
#pragma warning(disable : 4244) // '=': conversion from 'int' to 'stbi__uint16', possible loss of data

extern "C" {
#  define STB_IMAGE_IMPLEMENTATION
#  include <stb/stb_image.h>

#  define STB_IMAGE_WRITE_IMPLEMENTATION
#  include <stb/stb_image_write.h>

#  define STB_IMAGE_RESIZE_IMPLEMENTATION
#  include <stb/stb_image_resize.h>
}

#pragma warning(pop)


namespace tt
{
	namespace ui
	{

	}
}
