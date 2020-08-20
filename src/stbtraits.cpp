#include "stbtraits.h"

static const stb_feature_t features_vusolo[] =
{
	{
		.type			= stb_traits_type_string_enum,
		.description	= "Video codec",
		.id				= "vcodec",
		.settable		= false,
		.api_data		= 0,
		.value			=
		{
			.string_enum_type =
			{
				.default_value	= "h264",
				.enum_values	=
				{
					"h264", 0,
				},
			},
		},
	},
	{
		.type			= stb_traits_type_string_enum,
		.description	= "Audio codec",
		.id				= "acodec",
		.settable		= false,
		.api_data		= 0,
		.value			=
		{
			.string_enum_type =
			{
				.default_value	= "aac",
				.enum_values	=
				{
					"aac", 0,
				},
			},
		},
	},
	{
		.type			= stb_traits_type_int,
		.description	= "Total stream bit rate",
		.id				= "bitrate",
		.settable		= true,
		.api_data		= "bitrate",
		.value			=
		{
			.int_type =
			{
				.default_value	= 400,
				.min_value		= 50,
				.max_value		= 1000,
				.scaling_factor	= 1000,
			},
		},
	},
	{
		.type			= stb_traits_type_string_enum,
		.description	= "Picture dimensions",
		.id				= "size",
		.settable		= false,
		.api_data		= 0,
		.value			=
		{
			.string_enum_type =
			{
				.default_value	= "416x224",
				.enum_values	=
				{
					"416x224", 0,
				},
			},
		},
	},
	{
		.type			= stb_traits_type_string_enum,
		.description	= "Video codec profile",
		.id				= "profile",
		.settable		= false,
		.api_data		= 0,
		.value			=
		{
			.string_enum_type =
			{
				.default_value	= "constrained baseline",
				.enum_values	=
				{
					"constrained baseline", 0,
				},
			},
		},
	},
	{
		.type			= stb_traits_type_string_enum,
		.description	= "Video codec level",
		.id				= "level",
		.settable		= false,
		.api_data		= 0,
		.value			=
		{
			.string_enum_type =
			{
				.default_value	= "3.0",
				.enum_values	=
				{
					"3.0", 0,
				},
			},
		},
	},
	{
		.type			= stb_traits_type_int,
		.description	= "Max. bidirectional frames in a row",
		.id				= "bframes",
		.settable		= false,
		.api_data		= 0,
		.value			=
		{
			.int_type =
			{
				.default_value	= 0,
				.min_value		= 0,
				.max_value		= 0,
				.scaling_factor	= 1,
			},
		},
	},
	{
		.type			= stb_traits_type_string_enum,
		.description	= "Frame rate",
		.id				= "framerate",
		.settable		= true,
		.api_data		= "framerate",
		.value			=
		{
			.string_enum_type =
			{
				.default_value	= "30",
				.enum_values	=
				{
					"24", "25", "30", 0,
				},
			},
		},
	},
};

static const stb_feature_t features_vuduo2[] =
{
	{
		.type			= stb_traits_type_string_enum,
		.description	= "Video codec",
		.id				= "vcodec",
		.settable		= false,
		.api_data		= "video_codec",
		.value			=
		{
			.string_enum_type =
			{
				.default_value	= "h264",
				.enum_values	=
				{
					"h264", 0,
				},
			},
		},
	},
	{
		.type			= stb_traits_type_string_enum,
		.description	= "Audio codec",
		.id				= "acodec",
		.settable		= false,
		.api_data		= "audio_codec",
		.value			=
		{
			.string_enum_type =
			{
				.default_value	= "aac",
				.enum_values	=
				{
					"aac", 0,
				},
			},
		},
	},
	{
		.type			= stb_traits_type_int,
		.description	= "Total stream bit rate",
		.id				= "bitrate",
		.settable		= true,
		.api_data		= "bitrate",
		.value			=
		{
			.int_type =
			{
				.default_value	= 1000,
				.min_value		= 100,
				.max_value		= 10000,
				.scaling_factor	= 1000,
			},
		},
	},
	{
		.type			= stb_traits_type_string_enum,
		.description	= "Picture dimensions",
		.id				= "size",
		.settable		= true,
		.api_data		= "display_format",
		.value			=
		{
			.string_enum_type =
			{
				.default_value	= "480p",
				.enum_values	=
				{
					"480p", "576p", "720p", 0,
				},
			},
		},
	},
	{
		.type			= stb_traits_type_string_enum,
		.description	= "Video codec profile",
		.id				= "profile",
		.settable		= true,
		.api_data		= "profile",
		.value			=
		{
			.string_enum_type =
			{
				.default_value	= "baseline",
				.enum_values	=
				{
					"baseline", "simple", "main", "high", 0,
				},
			},
		},
	},
	{
		.type			= stb_traits_type_string_enum,
		.description	= "Video codec level",
		.id				= "level",
		.settable		= true,
		.api_data		= "level",
		.value			=
		{
			.string_enum_type =
			{
				.default_value	= "3.1",
				.enum_values	=
				{
					"3.1", "3.2", "4.0", 0,
				},
			},
		},
	},
	{
		.type			= stb_traits_type_int,
		.description	= "Max. bidirectional frames in a row",
		.id				= "bframes",
		.settable		= true,
		.api_data		= "gop_frameb",
		.value			=
		{
			.int_type =
			{
				.default_value	= 0,
				.min_value		= 0,
				.max_value		= 2,
				.scaling_factor	= 1,
			},
		},
	},
	{
		.type			= stb_traits_type_string_enum,
		.description	= "Frame rate",
		.id				= "framerate",
		.settable		= true,
		.api_data		= "framerate",
		.value			=
		{
			.string_enum_type =
			{
				.default_value	= "30000",
				.enum_values	=
				{
					"24000", "25000", "30000", 0,
				},
			},
		},
	},
};

static const stb_feature_t features_vuarm[] =
{
	{
		.type			= stb_traits_type_string_enum,
		.description	= "Video codec",
		.id				= "vcodec",
		.settable		= false,
		.api_data		= "video_codec",
		.value			=
		{
			.string_enum_type =
			{
				.default_value	= "h264",
				.enum_values	=
				{
					"h264", 0,
				},
			},
		},
	},
	{
		.type			= stb_traits_type_string_enum,
		.description	= "Audio codec",
		.id				= "acodec",
		.settable		= false,
		.api_data		= "audio_codec",
		.value			=
		{
			.string_enum_type =
			{
				.default_value	= "aac",
				.enum_values	=
				{
					"aac", 0,
				},
			},
		},
	},
	{
		.type			= stb_traits_type_int,
		.description	= "Total stream bit rate",
		.id				= "bitrate",
		.settable		= true,
		.api_data		= "bitrate",
		.value			=
		{
			.int_type =
			{
				.default_value	= 1000,
				.min_value		= 100,
				.max_value		= 10000,
				.scaling_factor	= 1000,
			},
		},
	},
	{
		.type			= stb_traits_type_string_enum,
		.description	= "Picture dimensions",
		.id				= "size",
		.settable		= true,
		.api_data		= "display_format",
		.value			=
		{
			.string_enum_type =
			{
				.default_value	= "480p",
				.enum_values	=
				{
					"480p", "576p", "720p", 0,
				},
			},
		},
	},
	{
		.type			= stb_traits_type_string_enum,
		.description	= "Video codec profile",
		.id				= "profile",
		.settable		= true,
		.api_data		= "profile",
		.value			=
		{
			.string_enum_type =
			{
				.default_value	= "baseline",
				.enum_values	=
				{
					"baseline", "simple", "main", "high", 0,
				},
			},
		},
	},
	{
		.type			= stb_traits_type_string_enum,
		.description	= "Video codec level",
		.id				= "level",
		.settable		= true,
		.api_data		= "level",
		.value			=
		{
			.string_enum_type =
			{
				.default_value	= "3.1",
				.enum_values	=
				{
					"3.0", "3.1", "3.2", "4.0", "4.1",
				},
			},
		},
	},
	{
		.type			= stb_traits_type_int,
		.description	= "Max. bidirectional frames in a row",
		.id				= "bframes",
		.settable		= true,
		.api_data		= "gop_frameb",
		.value			=
		{
			.int_type =
			{
				.default_value	= 2,
				.min_value		= 0,
				.max_value		= 2,
				.scaling_factor	= 1,
			},
		},
	},
	{
		.type			= stb_traits_type_string_enum,
		.description	= "Frame rate",
		.id				= "framerate",
		.settable		= true,
		.api_data		= "framerate",
		.value			=
		{
			.string_enum_type =
			{
				.default_value	= "30000",
				.enum_values	=
				{
					"24000", "25000", "30000", 0,
				},
			},
		},
	},
};

static const stb_feature_t features_gb4k[] =
{
	{
		.type			= stb_traits_type_string_enum,
		.description	= "Video codec",
		.id				= "vcodec",
		.settable		= false,
		.api_data		= "video_codec",
		.value			=
		{
			.string_enum_type =
			{
				.default_value	= "h264",
				.enum_values	=
				{
					"h264", 0,
				},
			},
		},
	},
	{
		.type			= stb_traits_type_string_enum,
		.description	= "Audio codec",
		.id				= "acodec",
		.settable		= false,
		.api_data		= "audio_codec",
		.value			=
		{
			.string_enum_type =
			{
				.default_value	= "aac",
				.enum_values	=
				{
					"aac", 0,
				},
			},
		},
	},
	{
		.type			= stb_traits_type_int,
		.description	= "Total stream bit rate",
		.id				= "bitrate",
		.settable		= true,
		.api_data		= "bitrate",
		.value			=
		{
			.int_type =
			{
				.default_value	= 1000,
				.min_value		= 100,
				.max_value		= 10000,
				.scaling_factor	= 1000,
			},
		},
	},
	{
		.type			= stb_traits_type_string_enum,
		.description	= "Picture dimensions",
		.id				= "size",
		.settable		= true,
		.api_data		= "display_format",
		.value			=
		{
			.string_enum_type =
			{
				.default_value	= "480p",
				.enum_values	=
				{
					"480p", "576p", "720p", 0,
				},
			},
		},
	},
	{
		.type			= stb_traits_type_string_enum,
		.description	= "Video codec profile",
		.id				= "profile",
		.settable		= true,
		.api_data		= "profile",
		.value			=
		{
			.string_enum_type =
			{
				.default_value	= "baseline",
				.enum_values	=
				{
					"baseline", "simple", "main", "high", 0,
				},
			},
		},
	},
	{
		.type			= stb_traits_type_string_enum,
		.description	= "Video codec level",
		.id				= "level",
		.settable		= true,
		.api_data		= "level",
		.value			=
		{
			.string_enum_type =
			{
				.default_value	= "3.1",
				.enum_values	=
				{
					"3.0", "3.1", "3.2", "4.0", "4.1",
				},
			},
		},
	},
	{
		.type			= stb_traits_type_int,
		.description	= "Max. bidirectional frames in a row",
		.id				= "bframes",
		.settable		= true,
		.api_data		= "gop_frameb",
		.value			=
		{
			.int_type =
			{
				.default_value	= 2,
				.min_value		= 0,
				.max_value		= 2,
				.scaling_factor	= 1,
			},
		},
	},
	{
		.type			= stb_traits_type_string_enum,
		.description	= "Frame rate",
		.id				= "framerate",
		.settable		= true,
		.api_data		= "framerate",
		.value			=
		{
			.string_enum_type =
			{
				.default_value	= "30000",
				.enum_values	=
				{
					"24000", "25000", "30000", 0,
				},
			},
		},
	},
};

static const stb_feature_t features_dags4k[] =
{
	{
		.type			= stb_traits_type_string_enum,
		.description	= "Video codec",
		.id				= "vcodec",
		.settable		= false,
		.api_data		= "video_codec",
		.value			=
		{
			.string_enum_type =
			{
				.default_value	= "h264",
				.enum_values	=
				{
					"h264", 0,
				},
			},
		},
	},
	{
		.type			= stb_traits_type_string_enum,
		.description	= "Audio codec",
		.id				= "acodec",
		.settable		= false,
		.api_data		= "audio_codec",
		.value			=
		{
			.string_enum_type =
			{
				.default_value	= "aac",
				.enum_values	=
				{
					"aac", 0,
				},
			},
		},
	},
	{
		.type			= stb_traits_type_int,
		.description	= "Total stream bit rate",
		.id				= "bitrate",
		.settable		= true,
		.api_data		= "bitrate",
		.value			=
		{
			.int_type =
			{
				.default_value	= 1000,
				.min_value		= 100,
				.max_value		= 10000,
				.scaling_factor	= 1000,
			},
		},
	},
	{
		.type			= stb_traits_type_string_enum,
		.description	= "Picture dimensions",
		.id				= "size",
		.settable		= true,
		.api_data		= "display_format",
		.value			=
		{
			.string_enum_type =
			{
				.default_value	= "480p",
				.enum_values	=
				{
					"480p", "576p", "720p", 0,
				},
			},
		},
	},
	{
		.type			= stb_traits_type_string_enum,
		.description	= "Video codec profile",
		.id				= "profile",
		.settable		= true,
		.api_data		= "profile",
		.value			=
		{
			.string_enum_type =
			{
				.default_value	= "baseline",
				.enum_values	=
				{
					"baseline", "simple", "main", "high", 0,
				},
			},
		},
	},
	{
		.type			= stb_traits_type_string_enum,
		.description	= "Video codec level",
		.id				= "level",
		.settable		= true,
		.api_data		= "level",
		.value			=
		{
			.string_enum_type =
			{
				.default_value	= "3.1",
				.enum_values	=
				{
					"3.0", "3.1", "3.2", "4.0", "4.1",
				},
			},
		},
	},
	{
		.type			= stb_traits_type_int,
		.description	= "Max. bidirectional frames in a row",
		.id				= "bframes",
		.settable		= true,
		.api_data		= "gop_frameb",
		.value			=
		{
			.int_type =
			{
				.default_value	= 2,
				.min_value		= 0,
				.max_value		= 2,
				.scaling_factor	= 1,
			},
		},
	},
	{
		.type			= stb_traits_type_string_enum,
		.description	= "Frame rate",
		.id				= "framerate",
		.settable		= true,
		.api_data		= "framerate",
		.value			=
		{
			.string_enum_type =
			{
				.default_value	= "30000",
				.enum_values	=
				{
					"24000", "25000", "30000", 0,
				},
			},
		},
	},
};

static const stb_feature_t features_et10000[] =
{
	{
		.type			= stb_traits_type_string_enum,
		.description	= "Video codec",
		.id				= "vcodec",
		.settable		= false,
		.api_data		= 0,
		.value			=
		{
			.string_enum_type =
			{
				.default_value	= "h264",
				.enum_values	=
				{
					"h264", 0,
				},
			},
		},
	},
	{
		.type			= stb_traits_type_string_enum,
		.description	= "Audio codec",
		.id				= "acodec",
		.settable		= false,
		.api_data		= 0,
		.value			=
		{
			.string_enum_type =
			{
				.default_value	= "aac",
				.enum_values	=
				{
					"aac", 0,
				},
			},
		},
	},
	{
		.type			= stb_traits_type_int,
		.description	= "Total stream bit rate",
		.id				= "bitrate",
		.settable		= true,
		.api_data		= "bitrate",
		.value			=
		{
			.int_type =
			{
				.default_value	= 1000,
				.min_value		= 100,
				.max_value		= 10000,
				.scaling_factor	= 1000,
			},
		},
	},
	{
		.type			= stb_traits_type_string_enum,
		.description	= "Picture dimensions",
		.id				= "size",
		.settable		= true,
		.api_data		= "display_format",
		.value			=
		{
			.string_enum_type =
			{
				.default_value	= "480p",
				.enum_values	=
				{
					"480p", "576p", "720p", 0,
				},
			},
		},
	},
};

static const stb_feature_t features_hd2400[] =
{
	{
		.type			= stb_traits_type_string_enum,
		.description	= "Video codec",
		.id				= "vcodec",
		.settable		= false,
		.api_data		= 0,
		.value			=
		{
			.string_enum_type =
			{
				.default_value	= "h264",
				.enum_values	=
				{
					"h264", 0,
				},
			},
		},
	},
	{
		.type			= stb_traits_type_string_enum,
		.description	= "Audio codec",
		.id				= "acodec",
		.settable		= false,
		.api_data		= 0,
		.value			=
		{
			.string_enum_type =
			{
				.default_value	= "aac",
				.enum_values	=
				{
					"aac", 0,
				},
			},
		},
	},
	{
		.type			= stb_traits_type_int,
		.description	= "Total stream bit rate",
		.id				= "bitrate",
		.settable		= true,
		.api_data		= "bitrate",
		.value			=
		{
			.int_type =
			{
				.default_value	= 1000,
				.min_value		= 100,
				.max_value		= 10000,
				.scaling_factor	= 1000,
			},
		},
	},
	{
		.type			= stb_traits_type_string_enum,
		.description	= "Picture dimensions",
		.id				= "size",
		.settable		= true,
		.api_data		= "display_format",
		.value			=
		{
			.string_enum_type =
			{
				.default_value	= "480p",
				.enum_values	=
				{
					"480p", "576p", "720p", 0,
				},
			},
		},
	},
};

static const stb_feature_t features_h9[] =
{
	{
		.type			= stb_traits_type_string_enum,
		.description	= "Video codec",
		.id				= "vcodec",
		.settable		= false,
		.api_data		= 0,
		.value			=
		{
			.string_enum_type =
			{
				.default_value	= "h265",
				.enum_values	=
				{
					"h264", "h265", 0,
				},
			},
		},
	},
	{
		.type			= stb_traits_type_int,
		.description	= "Total stream bit rate",
		.id				= "bitrate",
		.settable		= true,
		.api_data		= "bitrate",
		.value			=
		{
			.int_type =
			{
				.default_value	= 1000,
				.min_value		= 100,
				.max_value		= 10000,
				.scaling_factor	= 1000,
			},
		},
	},
	{
		.type			= stb_traits_type_string_enum,
		.description	= "Picture dimensions",
		.id				= "size",
		.settable		= true,
		.api_data		= "display_format",
		.value			=
		{
			.string_enum_type =
			{
				.default_value	= "480p",
				.enum_values	=
				{
					"480p", "576p", "720p", 0,
				},
			},
		},
	},
};

static const stb_feature_t features_pixel[] =
{
	{
		.type			= stb_traits_type_string_enum,
		.description	= "Video codec",
		.id				= "vcodec",
		.settable		= false,
		.api_data		= 0,
		.value			=
		{
			.string_enum_type =
			{
				.default_value	= "h264",
				.enum_values	=
				{
					"h264", 0,
				},
			},
		},
	},
	{
		.type			= stb_traits_type_string_enum,
		.description	= "Audio codec",
		.id				= "acodec",
		.settable		= false,
		.api_data		= 0,
		.value			=
		{
			.string_enum_type =
			{
				.default_value	= "aac",
				.enum_values	=
				{
					"aac", 0,
				},
			},
		},
	},
	{
		.type			= stb_traits_type_string_enum,
		.description	= "Video codec profile",
		.id				= "profile",
		.settable		= true,
		.api_data		= "profile",
		.value			=
		{
			.string_enum_type =
			{
				.default_value	= "baseline",
				.enum_values	=
				{
					"baseline", "main", "high", 0,
				},
			},
		},
	},
	{
		.type			= stb_traits_type_int,
		.description	= "Total stream bit rate",
		.id				= "bitrate",
		.settable		= true,
		.api_data		= "bitrate",
		.value			=
		{
			.int_type =
			{
				.default_value	= 1000,
				.min_value		= 100,
				.max_value		= 10000,
				.scaling_factor	= 1000,
			},
		},
	},
	{
		.type			= stb_traits_type_string_enum,
		.description	= "Picture dimensions",
		.id				= "size",
		.settable		= true,
		.api_data		= "display_format",
		.value			=
		{
			.string_enum_type =
			{
				.default_value	= "480p",
				.enum_values	=
				{
					"480p", "576p", "720p", "1080p", 0,
				},
			},
		},
	},
	{
		.type			= stb_traits_type_string_enum,
		.description	= "Frame rate",
		.id				= "framerate",
		.settable		= true,
		.api_data		= "framerate",
		.value			=
		{
			.string_enum_type =
			{
				.default_value	= "30",
				.enum_values	=
				{
					"24", "25", "30", 0,
				},
			},
		},
	},
};

static const stb_feature_t features_generic[] =
{
};

const stbs_traits_t stbs_traits =
{
	.num_traits = stb_traits_size,
	.traits_entry =
	{
		{
			.manufacturer		= "VU+",
			.model				= "SoloSE",
			.chipset			= "bcm7429",
			.transcoding_type	= stb_transcoding_broadcom,
			.quirks				= (stb_quirks_t)stb_quirk_bcm_mips,
			.encoders			= 1,
			.num_id				= 2,
			.id					=
			{
				{ "/proc/stb/info/model", "dm8000" },
				{ "/proc/stb/info/vumodel", "solose" },
			},
			.num_features		= 8,
			.features			= features_vusolo,
		},
		{
			.manufacturer		= "VU+",
			.model				= "Solo2",
			.chipset			= "bcm7356",
			.transcoding_type	= stb_transcoding_broadcom,
			.quirks				= (stb_quirks_t)stb_quirk_bcm_mips,
			.encoders			= 1,
			.num_id				= 2,
			.id					=
			{
				{ "/proc/stb/info/model", "dm8000" },
				{ "/proc/stb/info/vumodel", "solo2" },
			},
			.num_features		= 8,
			.features			= features_vusolo,
		},
		{
			.manufacturer		= "VU+",
			.model				= "Duo2",
			.chipset			= "bcm7424",
			.transcoding_type	= stb_transcoding_broadcom,
			.quirks				= (stb_quirks_t)stb_quirk_bcm_mips,
			.encoders			= 2,
			.num_id				= 2,
			.id					=
			{
				{ "/proc/stb/info/model", "dm8000" },
				{ "/proc/stb/info/vumodel", "duo2" },
			},
			.num_features		= 8,
			.features			= features_vuduo2,
		},
		{
			.manufacturer		= "VU+",
			.model				= "Solo4k",
			.chipset			= "bcm7376",
			.transcoding_type	= stb_transcoding_broadcom,
			.quirks				= (stb_quirks_t)0,
			.encoders			= 1,
			.num_id				= 2,
			.id					=
			{
				{ "/proc/stb/info/chipset", "7376" },
				{ "/proc/stb/info/vumodel", "solo4k" },
			},
			.num_features		= 8,
			.features			= features_vuarm,
		},
		{
			.manufacturer		= "VU+",
			.model				= "Uno4k",
			.chipset			= "bcm7252S",
			.transcoding_type	= stb_transcoding_broadcom,
			.quirks				= (stb_quirks_t)0,
			.encoders			= 1,
			.num_id				= 2,
			.id					=
			{
				{ "/proc/stb/info/chipset", "7252s" },
				{ "/proc/stb/info/vumodel", "uno4k" },
			},
			.num_features		= 8,
			.features			= features_vuarm,
		},
		{
			.manufacturer		= "VU+",
			.model				= "Uno4kSE",
			.chipset			= "bcm7252S",
			.transcoding_type	= stb_transcoding_broadcom,
			.quirks				= (stb_quirks_t)0,
			.encoders			= 1,
			.num_id				= 2,
			.id					=
			{
				{ "/proc/stb/info/chipset", "7252s" },
				{ "/proc/stb/info/vumodel", "uno4kse" },
			},
			.num_features		= 8,
			.features			= features_vuarm,
		},
		{
			.manufacturer		= "VU+",
			.model				= "Ultimo4k",
			.chipset			= "bcm7444s",
			.transcoding_type	= stb_transcoding_broadcom,
			.quirks				= (stb_quirks_t)0,
			.encoders			= 2,
			.num_id				= 2,
			.id					=
			{
				{ "/proc/stb/info/chipset", "7444s" },
				{ "/proc/stb/info/vumodel", "ultimo4k" },
			},
			.num_features		= 8,
			.features			= features_vuarm,
		},
		{
			.manufacturer		= "VU+",
			.model				= "Duo4k",
			.chipset			= "bcm7278",
			.transcoding_type	= stb_transcoding_broadcom,
			.quirks				= (stb_quirks_t)0,
			.encoders			= 2,
			.num_id				= 2,
			.id					=
			{
				{ "/proc/stb/info/chipset", "7278" },
				{ "/proc/stb/info/vumodel", "duo4k" },
			},
			.num_features		= 8,
			.features			= features_vuarm,
		},
		{
			.manufacturer		= "GigaBlue",
			.model				= "UE 4k",
			.chipset			= "bcm7252s",
			.transcoding_type	= stb_transcoding_broadcom,
			.quirks				= (stb_quirks_t)0,
			.encoders			= 1,
			.num_id				= 2,
			.id					=
			{
				{ "/proc/stb/info/chipset", "bcm7252s" },
				{ "/proc/stb/info/model", "gbue4k" },
			},
			.num_features		= 8,
			.features			= features_gb4k,
		},
		{
			.manufacturer		= "GigaBlue",
			.model				= "Quad 4k",
			.chipset			= "bcm7252s",
			.transcoding_type	= stb_transcoding_broadcom,
			.quirks				= (stb_quirks_t)0,
			.encoders			= 1,
			.num_id				= 2,
			.id					=
			{
				{ "/proc/stb/info/chipset", "bcm7252s" },
				{ "/proc/stb/info/model", "gbquad4k" },
			},
			.num_features		= 8,
			.features			= features_gb4k,
		},
		{
			.manufacturer		= "XSarius",
			.model				= "Galaxy4k",
			.chipset			= "bcm7252s",
			.transcoding_type	= stb_transcoding_broadcom,
			.quirks				= (stb_quirks_t)0,
			.encoders			= 1,
			.num_id				= 2,
			.id					=
			{
				{ "/proc/stb/info/chipset", "7252S" },
				{ "/proc/stb/info/hwmodel", "galaxy4k" },
			},
			.num_features		= 8,
			.features			= features_dags4k,
		},
		{
			.manufacturer		= "Qviart",
			.model				= "Lunix3-4k",
			.chipset			= "bcm7252s",
			.transcoding_type	= stb_transcoding_broadcom,
			.quirks				= (stb_quirks_t)0,
			.encoders			= 1,
			.num_id				= 2,
			.id					=
			{
				{ "/proc/stb/info/chipset", "7252S" },
				{ "/proc/stb/info/hwmodel", "lunix3-4k" },
			},
			.num_features		= 8,
			.features			= features_dags4k,
		},
		{
			.manufacturer		= "XTrend",
			.model				= "ET10000",
			.chipset			= "bcm7424",
			.transcoding_type	= stb_transcoding_enigma,
			.quirks				= (stb_quirks_t)0,
			.encoders			= 2,
			.num_id				= 2,
			.id					=
			{
				{ "/proc/stb/info/model", "et10000" },
				{ "/proc/stb/info/boxtype", "et10000" },
			},
			.num_features		= 4,
			.features			= features_et10000,
		},
		{
			.manufacturer		= "Mut@nt",
			.model				= "hd2400",
			.chipset			= "bcm7424",
			.transcoding_type	= stb_transcoding_enigma,
			.quirks				= (stb_quirks_t)0,
			.encoders			= 2,
			.num_id				= 1,
			.id					=
			{
				{ "/proc/stb/info/boxtype", "hd2400" },
			},
			.num_features		= 4,
			.features			= features_hd2400,
		},
		{
			.manufacturer		= "Zgemma",
			.model				= "h9",
			.chipset			= "hi3798mv200",
			.transcoding_type	= stb_transcoding_enigma,
			.quirks				= (stb_quirks_t)0,
			.encoders			= 2,
			.num_id				= 2,
			.id					=
			{
				{ "/proc/stb/info/model", "h9" },
				{ "/proc/stb/info/boxtype", "h9" },
			},
			.num_features		= 3,
			.features			= features_h9,
		},
		{
			.manufacturer		= "Atto",
			.model				= "Pixel",
			.chipset			= "hi3798cv200",
			.transcoding_type	= stb_transcoding_broadcom,
			.quirks				= (stb_quirks_t)0,
			.encoders			= 3,
			.num_id				= 2,
			.id					=
			{
				{ "/proc/stb/info/model", "pixel" },
				{ "/proc/stb/info/boxtype", "hisilicon" },
			},
			.num_features		= 6,
			.features			= features_pixel,
		},
		{
			.manufacturer		= "generic",
			.model				= "non-transcoding settopbox",
			.chipset			= "unknown",
			.transcoding_type	= stb_transcoding_unknown,
			.quirks				= (stb_quirks_t)0,
			.encoders			= 0,
			.num_id				= 0,
			.id					=
			{
			},
			.num_features		= 0,
			.features			= features_generic,
		},
	},
};
