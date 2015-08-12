#ifndef _ainode_Obq_KettleUVStereoLens_h_
#define _ainode_Obq_KettleUVStereoLens_h_

enum
{
   C4DAI_OBQ_KETTLEUVSTEREOLENS_MAIN_GRP              = 2001,

   C4DAIP_OBQ_KETTLEUVSTEREOLENS_ORIGIN_POLYMESH      = 2111388764,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_ORIGIN_CAMERA        = 1973180124,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_TARGET_POLYMESH      = 1871971325,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_TARGET_CAMERA        = 707390331,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_GRID_SIZE            = 562755020,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_VIEW_MODE            = 1628768693,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_STEREO_TYPE          = 704247553,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_INTERAXIAL_MODE      = 147486495,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_INTERAXIAL_EPSILON   = 1917147370,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_INTERAXIAL_SEPARATION = 557597742,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_ZERO_PARALLAX_MODE   = 473125276,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_ZERO_PARALLAX_DISTANCE = 1167801034,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_TOTAL_OVERSCAN_PIXELS = 1855961028,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_USE_RENDER_REGION    = 1514685925,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_REGIONU0             = 597052309,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_REGIONV0             = 597052342,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_REGIONU1             = 597052310,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_REGIONV1             = 597052343,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_CROP_TO_REGION       = 2115483771,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_UV_SET_ORIGIN        = 447982167,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_UV_SET_TARGET        = 272142552,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_USE_DOF              = 402982513,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_APERTURE_SIZE_       = 1098154835,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_APERTURE_ASPECT_RATIO_ = 1187033264,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_USE_POLYGONAL_APERTURE = 41849836,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_APERTURE_BLADES_     = 2012873917,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_APERTURE_BLADE_CURVATURE_ = 1267084918,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_APERTURE_ROTATION_   = 465044866,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_BOKEH_INVERT         = 171771668,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_BOKEH_BIAS           = 441307571,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_BOKEH_GAIN           = 441478803,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_POSITION             = 1759089953,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_LOOK_AT              = 1520415669,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_UP                   = 1120562447,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_MATRIX               = 1623163455,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_NEAR_CLIP            = 174576825,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_FAR_CLIP             = 175862356,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_SHUTTER_START        = 1610059128,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_SHUTTER_END          = 846456465,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_SHUTTER_TYPE         = 2131156196,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_SHUTTER_CURVE        = 1628979297,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_ROLLING_SHUTTER      = 1158760527,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_ROLLING_SHUTTER_DURATION = 50762806,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_FILTERMAP            = 1802198448,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_HANDEDNESS           = 1156305609,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_TIME_SAMPLES         = 247061521,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_SCREEN_WINDOW_MIN    = 871892166,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_SCREEN_WINDOW_MAX    = 871891912,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_EXPOSURE             = 264351129,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_NAME                 = 522056915,

   C4DAIP_OBQ_KETTLEUVSTEREOLENS_SHUTTER_TYPE__BOX    = 0,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_SHUTTER_TYPE__TRIANGLE = 1,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_SHUTTER_TYPE__CURVE  = 2,

   C4DAIP_OBQ_KETTLEUVSTEREOLENS_ROLLING_SHUTTER__OFF = 0,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_ROLLING_SHUTTER__TOP = 1,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_ROLLING_SHUTTER__BOTTOM = 2,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_ROLLING_SHUTTER__LEFT = 3,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_ROLLING_SHUTTER__RIGHT = 4,

   C4DAIP_OBQ_KETTLEUVSTEREOLENS_HANDEDNESS__RIGHT    = 0,
   C4DAIP_OBQ_KETTLEUVSTEREOLENS_HANDEDNESS__LEFT     = 1,
};

#endif

