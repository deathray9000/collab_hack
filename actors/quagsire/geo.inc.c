#include "src/game/envfx_snow.h"

const GeoLayout quagsire_switch_opt1[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 24, 0, quagsire_Body_mesh_layer_1_mat_override_F_1B_0),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Lail_skinned_mesh_layer_1_mat_override_F_1B_0),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 1, 7, -46, -75, 0, 0),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_Lail_mesh_layer_1_mat_override_F_1B_0),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Uail_skinned_mesh_layer_1_mat_override_F_1B_0),
					GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 43, 0, 25, 0, 0),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_Uail_mesh_layer_1_mat_override_F_1B_0),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -25, 39, -8, 0, 90, 180),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
				GEO_OPEN_NODE(),
					GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 56, 0, -90, 0, -90),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_LFoot_mesh_layer_1_mat_override_F_1B_0),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 25, 39, -8, 0, 90, 180),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
				GEO_OPEN_NODE(),
					GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 56, 0, -90, 0, -90),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_RFoot_mesh_layer_1_mat_override_F_1B_0),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Torso_skinned_mesh_layer_1_mat_override_F_1B_0),
			GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 36, 0, quagsire_Torso_mesh_layer_1_mat_override_F_1B_0),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Head_skinned_mesh_layer_1_mat_override_F_1B_0),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 36, 0, quagsire_Head_mesh_layer_1_mat_override_F_1B_0),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Larm_skinned_mesh_layer_1_mat_override_F_1B_0),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 29, 30, 28, 20, 122, 69),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_Larm_mesh_layer_1_mat_override_F_1B_0),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Land_skinned_mesh_layer_1_mat_override_F_1B_0),
						GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 14, 0, -1, 6, 20),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_Land_mesh_layer_1_mat_override_F_1B_0),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Rarm_skinned_mesh_layer_1_mat_override_F_1B_0),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -29, 30, 28, 63, 5, 42),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_Rarm_mesh_layer_1_mat_override_F_1B_0),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Rand_skinned_mesh_layer_1_mat_override_F_1B_0),
						GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 14, 0, 22, -1, -3),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_Rand_mesh_layer_1_mat_override_F_1B_0),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout quagsire_switch_opt2[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 24, 0, quagsire_Body_mesh_layer_1_mat_override_face_2_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Lail_skinned_mesh_layer_1_mat_override_face_2_1),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 1, 7, -46, -75, 0, 0),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_Lail_mesh_layer_1_mat_override_face_2_1),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Uail_skinned_mesh_layer_1_mat_override_face_2_1),
					GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 43, 0, 25, 0, 0),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_Uail_mesh_layer_1_mat_override_face_2_1),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -25, 39, -8, 0, 90, 180),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
				GEO_OPEN_NODE(),
					GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 56, 0, -90, 0, -90),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_LFoot_mesh_layer_1_mat_override_face_2_1),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 25, 39, -8, 0, 90, 180),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
				GEO_OPEN_NODE(),
					GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 56, 0, -90, 0, -90),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_RFoot_mesh_layer_1_mat_override_face_2_1),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Torso_skinned_mesh_layer_1_mat_override_face_2_1),
			GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 36, 0, quagsire_Torso_mesh_layer_1_mat_override_face_2_1),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Head_skinned_mesh_layer_1_mat_override_face_2_1),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 36, 0, quagsire_Head_mesh_layer_1_mat_override_face_2_1),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Larm_skinned_mesh_layer_1_mat_override_face_2_1),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 29, 30, 28, 20, 122, 69),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_Larm_mesh_layer_1_mat_override_face_2_1),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Land_skinned_mesh_layer_1_mat_override_face_2_1),
						GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 14, 0, -1, 6, 20),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_Land_mesh_layer_1_mat_override_face_2_1),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Rarm_skinned_mesh_layer_1_mat_override_face_2_1),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -29, 30, 28, 63, 5, 42),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_Rarm_mesh_layer_1_mat_override_face_2_1),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Rand_skinned_mesh_layer_1_mat_override_face_2_1),
						GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 14, 0, 22, -1, -3),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_Rand_mesh_layer_1_mat_override_face_2_1),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout quagsire_switch_opt3[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 24, 0, quagsire_Body_mesh_layer_1_mat_override_F_2B_2),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Lail_skinned_mesh_layer_1_mat_override_F_2B_2),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 1, 7, -46, -75, 0, 0),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_Lail_mesh_layer_1_mat_override_F_2B_2),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Uail_skinned_mesh_layer_1_mat_override_F_2B_2),
					GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 43, 0, 25, 0, 0),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_Uail_mesh_layer_1_mat_override_F_2B_2),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -25, 39, -8, 0, 90, 180),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
				GEO_OPEN_NODE(),
					GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 56, 0, -90, 0, -90),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_LFoot_mesh_layer_1_mat_override_F_2B_2),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 25, 39, -8, 0, 90, 180),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
				GEO_OPEN_NODE(),
					GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 56, 0, -90, 0, -90),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_RFoot_mesh_layer_1_mat_override_F_2B_2),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Torso_skinned_mesh_layer_1_mat_override_F_2B_2),
			GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 36, 0, quagsire_Torso_mesh_layer_1_mat_override_F_2B_2),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Head_skinned_mesh_layer_1_mat_override_F_2B_2),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 36, 0, quagsire_Head_mesh_layer_1_mat_override_F_2B_2),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Larm_skinned_mesh_layer_1_mat_override_F_2B_2),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 29, 30, 28, 20, 122, 69),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_Larm_mesh_layer_1_mat_override_F_2B_2),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Land_skinned_mesh_layer_1_mat_override_F_2B_2),
						GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 14, 0, -1, 6, 20),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_Land_mesh_layer_1_mat_override_F_2B_2),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Rarm_skinned_mesh_layer_1_mat_override_F_2B_2),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -29, 30, 28, 63, 5, 42),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_Rarm_mesh_layer_1_mat_override_F_2B_2),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Rand_skinned_mesh_layer_1_mat_override_F_2B_2),
						GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 14, 0, 22, -1, -3),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_Rand_mesh_layer_1_mat_override_F_2B_2),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout quagsire_switch_opt4[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 24, 0, quagsire_Body_mesh_layer_1_mat_override_face_3_3),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Lail_skinned_mesh_layer_1_mat_override_face_3_3),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 1, 7, -46, -75, 0, 0),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_Lail_mesh_layer_1_mat_override_face_3_3),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Uail_skinned_mesh_layer_1_mat_override_face_3_3),
					GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 43, 0, 25, 0, 0),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_Uail_mesh_layer_1_mat_override_face_3_3),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -25, 39, -8, 0, 90, 180),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
				GEO_OPEN_NODE(),
					GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 56, 0, -90, 0, -90),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_LFoot_mesh_layer_1_mat_override_face_3_3),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 25, 39, -8, 0, 90, 180),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
				GEO_OPEN_NODE(),
					GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 56, 0, -90, 0, -90),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_RFoot_mesh_layer_1_mat_override_face_3_3),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Torso_skinned_mesh_layer_1_mat_override_face_3_3),
			GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 36, 0, quagsire_Torso_mesh_layer_1_mat_override_face_3_3),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Head_skinned_mesh_layer_1_mat_override_face_3_3),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 36, 0, quagsire_Head_mesh_layer_1_mat_override_face_3_3),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Larm_skinned_mesh_layer_1_mat_override_face_3_3),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 29, 30, 28, 20, 122, 69),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_Larm_mesh_layer_1_mat_override_face_3_3),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Land_skinned_mesh_layer_1_mat_override_face_3_3),
						GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 14, 0, -1, 6, 20),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_Land_mesh_layer_1_mat_override_face_3_3),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Rarm_skinned_mesh_layer_1_mat_override_face_3_3),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -29, 30, 28, 63, 5, 42),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_Rarm_mesh_layer_1_mat_override_face_3_3),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Rand_skinned_mesh_layer_1_mat_override_face_3_3),
						GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 14, 0, 22, -1, -3),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_Rand_mesh_layer_1_mat_override_face_3_3),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout quagsire_switch_opt5[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 24, 0, quagsire_Body_mesh_layer_1_mat_override_F_3B_4),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Lail_skinned_mesh_layer_1_mat_override_F_3B_4),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 1, 7, -46, -75, 0, 0),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_Lail_mesh_layer_1_mat_override_F_3B_4),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Uail_skinned_mesh_layer_1_mat_override_F_3B_4),
					GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 43, 0, 25, 0, 0),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_Uail_mesh_layer_1_mat_override_F_3B_4),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -25, 39, -8, 0, 90, 180),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
				GEO_OPEN_NODE(),
					GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 56, 0, -90, 0, -90),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_LFoot_mesh_layer_1_mat_override_F_3B_4),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 25, 39, -8, 0, 90, 180),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
				GEO_OPEN_NODE(),
					GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 56, 0, -90, 0, -90),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_RFoot_mesh_layer_1_mat_override_F_3B_4),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Torso_skinned_mesh_layer_1_mat_override_F_3B_4),
			GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 36, 0, quagsire_Torso_mesh_layer_1_mat_override_F_3B_4),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Head_skinned_mesh_layer_1_mat_override_F_3B_4),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 36, 0, quagsire_Head_mesh_layer_1_mat_override_F_3B_4),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Larm_skinned_mesh_layer_1_mat_override_F_3B_4),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 29, 30, 28, 20, 122, 69),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_Larm_mesh_layer_1_mat_override_F_3B_4),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Land_skinned_mesh_layer_1_mat_override_F_3B_4),
						GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 14, 0, -1, 6, 20),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_Land_mesh_layer_1_mat_override_F_3B_4),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Rarm_skinned_mesh_layer_1_mat_override_F_3B_4),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -29, 30, 28, 63, 5, 42),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_Rarm_mesh_layer_1_mat_override_F_3B_4),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Rand_skinned_mesh_layer_1_mat_override_F_3B_4),
						GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 14, 0, 22, -1, -3),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_Rand_mesh_layer_1_mat_override_F_3B_4),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout quagsire_switch_opt6[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 24, 0, quagsire_Body_mesh_layer_1_mat_override_face_4_5),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Lail_skinned_mesh_layer_1_mat_override_face_4_5),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 1, 7, -46, -75, 0, 0),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_Lail_mesh_layer_1_mat_override_face_4_5),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Uail_skinned_mesh_layer_1_mat_override_face_4_5),
					GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 43, 0, 25, 0, 0),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_Uail_mesh_layer_1_mat_override_face_4_5),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -25, 39, -8, 0, 90, 180),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
				GEO_OPEN_NODE(),
					GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 56, 0, -90, 0, -90),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_LFoot_mesh_layer_1_mat_override_face_4_5),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 25, 39, -8, 0, 90, 180),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
				GEO_OPEN_NODE(),
					GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 56, 0, -90, 0, -90),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_RFoot_mesh_layer_1_mat_override_face_4_5),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Torso_skinned_mesh_layer_1_mat_override_face_4_5),
			GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 36, 0, quagsire_Torso_mesh_layer_1_mat_override_face_4_5),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Head_skinned_mesh_layer_1_mat_override_face_4_5),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 36, 0, quagsire_Head_mesh_layer_1_mat_override_face_4_5),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Larm_skinned_mesh_layer_1_mat_override_face_4_5),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 29, 30, 28, 20, 122, 69),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_Larm_mesh_layer_1_mat_override_face_4_5),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Land_skinned_mesh_layer_1_mat_override_face_4_5),
						GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 14, 0, -1, 6, 20),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_Land_mesh_layer_1_mat_override_face_4_5),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Rarm_skinned_mesh_layer_1_mat_override_face_4_5),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -29, 30, 28, 63, 5, 42),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_Rarm_mesh_layer_1_mat_override_face_4_5),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Rand_skinned_mesh_layer_1_mat_override_face_4_5),
						GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 14, 0, 22, -1, -3),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_Rand_mesh_layer_1_mat_override_face_4_5),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout quagsire_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
		GEO_OPEN_NODE(),
			GEO_SWITCH_CASE(7, geo_switch_anim_state),
			GEO_OPEN_NODE(),
				GEO_NODE_START(),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 24, 0, quagsire_Body_mesh_layer_1),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Lail_skinned_mesh_layer_1),
						GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 1, 7, -46, -75, 0, 0),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_Lail_mesh_layer_1),
							GEO_OPEN_NODE(),
								GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Uail_skinned_mesh_layer_1),
								GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 43, 0, 25, 0, 0),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_Uail_mesh_layer_1),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
						GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -25, 39, -8, 0, 90, 180),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
							GEO_OPEN_NODE(),
								GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 56, 0, -90, 0, -90),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_LFoot_mesh_layer_1),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
						GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 25, 39, -8, 0, 90, 180),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
							GEO_OPEN_NODE(),
								GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 56, 0, -90, 0, -90),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_RFoot_mesh_layer_1),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Torso_skinned_mesh_layer_1),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 36, 0, quagsire_Torso_mesh_layer_1),
						GEO_OPEN_NODE(),
							GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Head_skinned_mesh_layer_1),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 36, 0, quagsire_Head_mesh_layer_1),
							GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Larm_skinned_mesh_layer_1),
							GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 29, 30, 28, 20, 122, 69),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_Larm_mesh_layer_1),
								GEO_OPEN_NODE(),
									GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Land_skinned_mesh_layer_1),
									GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 14, 0, -1, 6, 20),
									GEO_OPEN_NODE(),
										GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_Land_mesh_layer_1),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
							GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Rarm_skinned_mesh_layer_1),
							GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -29, 30, 28, 63, 5, 42),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_Rarm_mesh_layer_1),
								GEO_OPEN_NODE(),
									GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_Rand_skinned_mesh_layer_1),
									GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 14, 0, 22, -1, -3),
									GEO_OPEN_NODE(),
										GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, quagsire_Rand_mesh_layer_1),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
				GEO_BRANCH(1, quagsire_switch_opt1),
				GEO_BRANCH(1, quagsire_switch_opt2),
				GEO_BRANCH(1, quagsire_switch_opt3),
				GEO_BRANCH(1, quagsire_switch_opt4),
				GEO_BRANCH(1, quagsire_switch_opt5),
				GEO_BRANCH(1, quagsire_switch_opt6),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, quagsire_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
