Lights1 tree_sm64_leaves_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 tree_sm64_trunk_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx tree_sm64_leaves_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 tree_sm64_leaves_rgba16[] = {
	#include "actors/tree/leaves.rgba16.inc.c"
};

Gfx tree_sm64_trunk_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 tree_sm64_trunk_rgba16[] = {
	#include "actors/tree/trunk.rgba16.inc.c"
};

Vtx tree_sm64_N64_Tree_mesh_layer_1_vtx_0[97] = {
	{{{139, 165, -2},0, {2689, 1027},{0x50, 0xA2, 0x1C, 0xFF}}},
	{{{105, 237, 98},0, {3805, -884},{0x65, 0x2B, 0x40, 0xFF}}},
	{{{100, 165, 93},0, {2689, -787},{0x24, 0xA2, 0x4D, 0xFF}}},
	{{{146, 237, -2},0, {3805, 1027},{0x75, 0x2E, 0xEB, 0xFF}}},
	{{{100, 165, -96},0, {2689, 2842},{0x4D, 0xA2, 0xDC, 0xFF}}},
	{{{105, 237, -101},0, {3805, 2939},{0x40, 0x2B, 0x9B, 0xFF}}},
	{{{136, 329, -2},0, {5209, 1027},{0x72, 0x1D, 0xCF, 0xFF}}},
	{{{98, 329, -94},0, {5209, 2804},{0x2E, 0x17, 0x8C, 0xFF}}},
	{{{71, 435, -67},0, {6845, 2278},{0x68, 0x3D, 0xD8, 0xFF}}},
	{{{98, 435, -2},0, {6845, 1027},{0x66, 0x3D, 0x2D, 0xFF}}},
	{{{59, 487, -2},0, {7647, 1027},{0x4A, 0x5E, 0xD4, 0xFF}}},
	{{{43, 487, -39},0, {7647, 1751},{0x15, 0x5D, 0xAC, 0xFF}}},
	{{{43, 487, 36},0, {7647, 303},{0x54, 0x5E, 0x14, 0xFF}}},
	{{{71, 435, 63},0, {6845, -224},{0x28, 0x3D, 0x68, 0xFF}}},
	{{{98, 329, 91},0, {5209, -749},{0x74, 0x17, 0x2E, 0xFF}}},
	{{{-94, 237, 98},0, {3805, -904},{0xC0, 0x2B, 0x65, 0xFF}}},
	{{{-88, 165, 93},0, {2689, -806},{0xB3, 0xA2, 0x24, 0xFF}}},
	{{{6, 165, 132},0, {2689, 1008},{0xE4, 0xA2, 0x50, 0xFF}}},
	{{{6, 237, 139},0, {3805, 1008},{0x1A, 0x2B, 0x75, 0xFF}}},
	{{{100, 165, 93},0, {2689, 2822},{0x24, 0xA2, 0x4D, 0xFF}}},
	{{{105, 237, 98},0, {3805, 2920},{0x65, 0x2B, 0x40, 0xFF}}},
	{{{6, 329, 129},0, {5209, 1008},{0x31, 0x17, 0x73, 0xFF}}},
	{{{98, 329, 91},0, {5209, 2785},{0x74, 0x17, 0x2E, 0xFF}}},
	{{{71, 435, 63},0, {6845, 2259},{0x28, 0x3D, 0x68, 0xFF}}},
	{{{6, 435, 90},0, {6845, 1008},{0xD3, 0x3D, 0x66, 0xFF}}},
	{{{6, 487, 52},0, {7647, 1008},{0x2C, 0x5E, 0x4A, 0xFF}}},
	{{{43, 487, 36},0, {7647, 1732},{0x54, 0x5E, 0x14, 0xFF}}},
	{{{-32, 487, 36},0, {7647, 284},{0xEC, 0x5E, 0x54, 0xFF}}},
	{{{-59, 435, 63},0, {6845, -243},{0x98, 0x3D, 0x28, 0xFF}}},
	{{{-86, 329, 91},0, {5209, -769},{0xD2, 0x17, 0x74, 0xFF}}},
	{{{-94, 237, -101},0, {-3837, 2939},{0x9B, 0x2B, 0xC0, 0xFF}}},
	{{{-88, 165, -96},0, {-2721, 2842},{0xDA, 0xE8, 0x89, 0xFF}}},
	{{{-128, 165, -2},0, {-2721, 1027},{0xAF, 0xA3, 0xE1, 0xFF}}},
	{{{-135, 237, -2},0, {-3837, 1027},{0x8B, 0x2B, 0x1A, 0xFF}}},
	{{{-88, 165, 93},0, {-2721, -787},{0xB3, 0xA2, 0x24, 0xFF}}},
	{{{-94, 237, 98},0, {-3837, -884},{0xC0, 0x2B, 0x65, 0xFF}}},
	{{{-125, 329, -2},0, {-5241, 1027},{0x8D, 0x17, 0x31, 0xFF}}},
	{{{-86, 329, 91},0, {-5241, -749},{0xD2, 0x17, 0x74, 0xFF}}},
	{{{-59, 435, 63},0, {-6877, -224},{0x98, 0x3D, 0x28, 0xFF}}},
	{{{-86, 435, -2},0, {-6877, 1027},{0x9A, 0x3D, 0xD3, 0xFF}}},
	{{{-47, 487, -2},0, {-7679, 1027},{0xB6, 0x5E, 0x2C, 0xFF}}},
	{{{-32, 487, 36},0, {-7679, 303},{0xEC, 0x5E, 0x54, 0xFF}}},
	{{{-32, 487, -39},0, {-7679, 1751},{0xAC, 0x5E, 0xEC, 0xFF}}},
	{{{-59, 435, -67},0, {-6877, 2278},{0xD8, 0x3D, 0x98, 0xFF}}},
	{{{-86, 329, -94},0, {-5241, 2804},{0x8C, 0x17, 0xD2, 0xFF}}},
	{{{105, 237, -101},0, {-3837, 2920},{0x40, 0x2B, 0x9B, 0xFF}}},
	{{{100, 165, -96},0, {-2721, 2822},{0x4D, 0xA2, 0xDC, 0xFF}}},
	{{{6, 165, -135},0, {-2721, 1008},{0x1C, 0xA2, 0xB0, 0xFF}}},
	{{{6, 237, -142},0, {-3837, 1008},{0xE6, 0x2B, 0x8B, 0xFF}}},
	{{{-88, 165, -96},0, {-2721, -806},{0xDA, 0xE8, 0x89, 0xFF}}},
	{{{-94, 237, -101},0, {-3837, -904},{0x9B, 0x2B, 0xC0, 0xFF}}},
	{{{6, 329, -132},0, {-5241, 1008},{0xCF, 0x17, 0x8D, 0xFF}}},
	{{{-86, 329, -94},0, {-5241, -769},{0x8C, 0x17, 0xD2, 0xFF}}},
	{{{-59, 435, -67},0, {-6877, -243},{0xD8, 0x3D, 0x98, 0xFF}}},
	{{{6, 435, -94},0, {-6877, 1008},{0x2D, 0x39, 0x98, 0xFF}}},
	{{{6, 487, -55},0, {-7679, 1008},{0xD4, 0x5E, 0xB6, 0xFF}}},
	{{{-32, 487, -39},0, {-7679, 284},{0xAC, 0x5E, 0xEC, 0xFF}}},
	{{{43, 487, -39},0, {-7679, 1732},{0x15, 0x5D, 0xAC, 0xFF}}},
	{{{71, 435, -67},0, {-6877, 2259},{0x68, 0x3D, 0xD8, 0xFF}}},
	{{{98, 329, -94},0, {-5241, 2785},{0x2E, 0x17, 0x8C, 0xFF}}},
	{{{100, 165, -96},0, {1798, 2842},{0x4D, 0xA2, 0xDC, 0xFF}}},
	{{{6, 133, -103},0, {-16, 2974},{0x25, 0x98, 0xC1, 0xFF}}},
	{{{6, 165, -135},0, {-16, 3593},{0x1C, 0xA2, 0xB0, 0xFF}}},
	{{{77, 133, -73},0, {1360, 2404},{0x49, 0x9A, 0xED, 0xFF}}},
	{{{139, 165, -2},0, {2550, 1027},{0x50, 0xA2, 0x1C, 0xFF}}},
	{{{107, 133, -2},0, {1931, 1027},{0x41, 0x99, 0x25, 0xFF}}},
	{{{100, 165, 93},0, {1798, -787},{0x24, 0xA2, 0x4D, 0xFF}}},
	{{{77, 133, 70},0, {1360, -349},{0x13, 0x9A, 0x49, 0xFF}}},
	{{{6, 165, 132},0, {-16, -1539},{0xE4, 0xA2, 0x50, 0xFF}}},
	{{{6, 133, 99},0, {-16, -919},{0xDB, 0x99, 0x41, 0xFF}}},
	{{{-88, 165, 93},0, {-1830, -787},{0xB3, 0xA2, 0x24, 0xFF}}},
	{{{-66, 133, 70},0, {-1392, -349},{0xB7, 0x9A, 0x13, 0xFF}}},
	{{{-128, 165, -2},0, {-2582, 1027},{0xAF, 0xA3, 0xE1, 0xFF}}},
	{{{-95, 133, -2},0, {-1963, 1027},{0xDD, 0x86, 0x0, 0xFF}}},
	{{{-66, 133, -73},0, {-1392, 2404},{0xB9, 0xAF, 0xBC, 0xFF}}},
	{{{-88, 165, -96},0, {-1830, 2842},{0xDA, 0xE8, 0x89, 0xFF}}},
	{{{6, 104, -2},0, {-16, 1027},{0xFD, 0x85, 0x1F, 0xFF}}},
	{{{-66, 133, -73},0, {-1392, 2404},{0xB9, 0xAF, 0xBC, 0xFF}}},
	{{{6, 133, -103},0, {-16, 2974},{0x25, 0x98, 0xC1, 0xFF}}},
	{{{77, 133, -73},0, {1360, 2404},{0x49, 0x9A, 0xED, 0xFF}}},
	{{{107, 133, -2},0, {1931, 1027},{0x41, 0x99, 0x25, 0xFF}}},
	{{{77, 133, 70},0, {1360, -349},{0x13, 0x9A, 0x49, 0xFF}}},
	{{{6, 133, 99},0, {-16, -919},{0xDB, 0x99, 0x41, 0xFF}}},
	{{{-66, 133, 70},0, {-1392, -349},{0xB7, 0x9A, 0x13, 0xFF}}},
	{{{-95, 133, -2},0, {-1963, 1027},{0xDD, 0x86, 0x0, 0xFF}}},
	{{{59, 487, -2},0, {-1040, 1027},{0x4A, 0x5E, 0xD4, 0xFF}}},
	{{{43, 487, -39},0, {-740, 1751},{0x15, 0x5D, 0xAC, 0xFF}}},
	{{{6, 506, -2},0, {-16, 1027},{0x1, 0x79, 0x27, 0xFF}}},
	{{{6, 487, -55},0, {-16, 2051},{0xD4, 0x5E, 0xB6, 0xFF}}},
	{{{-32, 487, -39},0, {708, 1751},{0xAC, 0x5E, 0xEC, 0xFF}}},
	{{{-47, 487, -2},0, {1008, 1027},{0xB6, 0x5E, 0x2C, 0xFF}}},
	{{{-32, 487, 36},0, {708, 303},{0xEC, 0x5E, 0x54, 0xFF}}},
	{{{6, 506, -2},0, {-16, 1027},{0x1, 0x79, 0x27, 0xFF}}},
	{{{-32, 487, 36},0, {708, 303},{0xEC, 0x5E, 0x54, 0xFF}}},
	{{{6, 487, 52},0, {-16, 4},{0x2C, 0x5E, 0x4A, 0xFF}}},
	{{{43, 487, 36},0, {-740, 303},{0x54, 0x5E, 0x14, 0xFF}}},
	{{{59, 487, -2},0, {-1040, 1027},{0x4A, 0x5E, 0xD4, 0xFF}}},
};

Gfx tree_sm64_N64_Tree_mesh_layer_1_tri_0[] = {
	gsSPVertex(tree_sm64_N64_Tree_mesh_layer_1_vtx_0 + 0, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 1, 0, 0),
	gsSP1Triangle(4, 3, 0, 0),
	gsSP1Triangle(5, 3, 4, 0),
	gsSP1Triangle(5, 6, 3, 0),
	gsSP1Triangle(5, 7, 6, 0),
	gsSP1Triangle(7, 8, 6, 0),
	gsSP1Triangle(8, 9, 6, 0),
	gsSP1Triangle(8, 10, 9, 0),
	gsSP1Triangle(8, 11, 10, 0),
	gsSP1Triangle(10, 12, 9, 0),
	gsSP1Triangle(9, 12, 13, 0),
	gsSP1Triangle(9, 13, 14, 0),
	gsSP1Triangle(6, 9, 14, 0),
	gsSP1Triangle(6, 14, 3, 0),
	gsSP1Triangle(3, 14, 1, 0),
	gsSPVertex(tree_sm64_N64_Tree_mesh_layer_1_vtx_0 + 15, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(3, 2, 4, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 3, 5, 0),
	gsSP1Triangle(6, 5, 7, 0),
	gsSP1Triangle(8, 6, 7, 0),
	gsSP1Triangle(9, 6, 8, 0),
	gsSP1Triangle(10, 9, 8, 0),
	gsSP1Triangle(10, 8, 11, 0),
	gsSP1Triangle(12, 9, 10, 0),
	gsSP1Triangle(12, 13, 9, 0),
	gsSP1Triangle(13, 14, 9, 0),
	gsSP1Triangle(9, 14, 6, 0),
	gsSP1Triangle(14, 3, 6, 0),
	gsSP1Triangle(14, 0, 3, 0),
	gsSPVertex(tree_sm64_N64_Tree_mesh_layer_1_vtx_0 + 30, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(2, 4, 3, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(3, 5, 6, 0),
	gsSP1Triangle(6, 5, 7, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(6, 8, 9, 0),
	gsSP1Triangle(10, 9, 8, 0),
	gsSP1Triangle(10, 8, 11, 0),
	gsSP1Triangle(12, 9, 10, 0),
	gsSP1Triangle(13, 9, 12, 0),
	gsSP1Triangle(14, 9, 13, 0),
	gsSP1Triangle(14, 6, 9, 0),
	gsSP1Triangle(14, 3, 6, 0),
	gsSP1Triangle(0, 3, 14, 0),
	gsSPVertex(tree_sm64_N64_Tree_mesh_layer_1_vtx_0 + 45, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(3, 2, 4, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 3, 5, 0),
	gsSP1Triangle(6, 5, 7, 0),
	gsSP1Triangle(8, 6, 7, 0),
	gsSP1Triangle(9, 6, 8, 0),
	gsSP1Triangle(10, 9, 8, 0),
	gsSP1Triangle(10, 8, 11, 0),
	gsSP1Triangle(12, 9, 10, 0),
	gsSP1Triangle(12, 13, 9, 0),
	gsSP1Triangle(13, 14, 9, 0),
	gsSP1Triangle(9, 14, 6, 0),
	gsSP1Triangle(14, 3, 6, 0),
	gsSP1Triangle(14, 0, 3, 0),
	gsSPVertex(tree_sm64_N64_Tree_mesh_layer_1_vtx_0 + 60, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 3, 0, 0),
	gsSP1Triangle(4, 5, 3, 0),
	gsSP1Triangle(4, 6, 5, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(6, 8, 7, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(8, 10, 9, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(11, 10, 12, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(14, 13, 12, 0),
	gsSP1Triangle(14, 12, 15, 0),
	gsSP1Triangle(2, 14, 15, 0),
	gsSP1Triangle(1, 14, 2, 0),
	gsSPVertex(tree_sm64_N64_Tree_mesh_layer_1_vtx_0 + 76, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 0, 2, 0),
	gsSP1Triangle(4, 0, 3, 0),
	gsSP1Triangle(4, 5, 0, 0),
	gsSP1Triangle(5, 6, 0, 0),
	gsSP1Triangle(6, 7, 0, 0),
	gsSP1Triangle(0, 7, 8, 0),
	gsSP1Triangle(0, 8, 1, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(10, 12, 11, 0),
	gsSP1Triangle(12, 13, 11, 0),
	gsSP1Triangle(11, 13, 14, 0),
	gsSP1Triangle(11, 14, 15, 0),
	gsSPVertex(tree_sm64_N64_Tree_mesh_layer_1_vtx_0 + 92, 5, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 0, 2, 0),
	gsSP1Triangle(4, 0, 3, 0),
	gsSPEndDisplayList(),
};

Vtx tree_sm64_N64_Tree_mesh_layer_1_vtx_1[18] = {
	{{{13, 114, 20},0, {233, -2502},{0x36, 0xB9, 0x5B, 0xFF}}},
	{{{-13, 114, 12},0, {-663, -2502},{0xA5, 0xB6, 0x32, 0xFF}}},
	{{{-13, -42, 12},0, {-663, 1890},{0xA5, 0x4A, 0x32, 0xFF}}},
	{{{13, -42, 20},0, {233, 1890},{0x36, 0x47, 0x5B, 0xFF}}},
	{{{29, -42, -2},0, {-50, 126},{0x67, 0x0, 0xB5, 0xFF}}},
	{{{13, 114, 20},0, {712, 4518},{0x36, 0xB9, 0x5B, 0xFF}}},
	{{{13, -42, 20},0, {712, 126},{0x36, 0x47, 0x5B, 0xFF}}},
	{{{29, 114, -2},0, {-50, 4518},{0x67, 0x0, 0xB5, 0xFF}}},
	{{{13, -42, -23},0, {-813, 126},{0x52, 0x35, 0xAE, 0xFF}}},
	{{{13, 114, -23},0, {-813, 4518},{0x52, 0xCB, 0xAE, 0xFF}}},
	{{{-13, 114, -15},0, {633, -2502},{0x93, 0xC4, 0xE7, 0xFF}}},
	{{{13, 114, -23},0, {-263, -2502},{0x52, 0xCB, 0xAE, 0xFF}}},
	{{{13, -42, -23},0, {-263, 1890},{0x52, 0x35, 0xAE, 0xFF}}},
	{{{-13, -42, -15},0, {633, 1890},{0x93, 0x3C, 0xE7, 0xFF}}},
	{{{-13, 114, -15},0, {-522, -2502},{0x93, 0xC4, 0xE7, 0xFF}}},
	{{{-13, -42, -15},0, {-522, 1890},{0x93, 0x3C, 0xE7, 0xFF}}},
	{{{-13, -42, 12},0, {421, 1890},{0xA5, 0x4A, 0x32, 0xFF}}},
	{{{-13, 114, 12},0, {421, -2502},{0xA5, 0xB6, 0x32, 0xFF}}},
};

Gfx tree_sm64_N64_Tree_mesh_layer_1_tri_1[] = {
	gsSPVertex(tree_sm64_N64_Tree_mesh_layer_1_vtx_1 + 0, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 7, 5, 0),
	gsSP1Triangle(8, 7, 4, 0),
	gsSP1Triangle(8, 9, 7, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(10, 12, 13, 0),
	gsSPVertex(tree_sm64_N64_Tree_mesh_layer_1_vtx_1 + 14, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};


Gfx mat_tree_sm64_leaves[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, tree_sm64_leaves_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(tree_sm64_leaves_lights),
	gsSPEndDisplayList(),
};

Gfx mat_tree_sm64_trunk[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, tree_sm64_trunk_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(tree_sm64_trunk_lights),
	gsSPEndDisplayList(),
};

Gfx tree_sm64_N64_Tree_mesh_layer_1[] = {
	gsSPDisplayList(mat_tree_sm64_leaves),
	gsSPDisplayList(tree_sm64_N64_Tree_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_tree_sm64_trunk),
	gsSPDisplayList(tree_sm64_N64_Tree_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx tree_sm64_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

