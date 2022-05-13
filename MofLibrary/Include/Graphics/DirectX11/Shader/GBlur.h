#ifdef SHADER_INCLUDE
unsigned char g_GBlur[] = {
	0x01, 0x20, 0xFF, 0xFE, 0x03, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xD8, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x63, 0x62, 0x53, 0x63, 0x65, 0x6E, 0x65, 0x50, 0x61, 0x72, 0x61, 0x6D, 0x00, 0x66, 0x6C, 0x6F, 0x61, 0x74, 0x34, 0x78, 
	0x34, 0x00, 0x11, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x40, 0x00, 
	0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x0B, 0x64, 0x00, 0x00, 0x6D, 0x74, 0x78, 0x56, 0x69, 0x65, 0x77, 0x00, 0x6D, 0x74, 
	0x78, 0x50, 0x72, 0x6F, 0x6A, 0x00, 0x63, 0x62, 0x4D, 0x65, 0x73, 0x68, 0x50, 0x61, 0x72, 0x61, 0x6D, 0x00, 0x66, 0x6C, 
	0x6F, 0x61, 0x74, 0x34, 0x00, 0x52, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 
	0x00, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x0A, 0x21, 0x00, 0x00, 0x63, 0x62, 0x76, 0x4F, 0x66, 0x66, 0x73, 
	0x65, 0x74, 0x00, 0x63, 0x62, 0x76, 0x53, 0x69, 0x7A, 0x65, 0x00, 0x63, 0x62, 0x74, 0x4F, 0x66, 0x66, 0x73, 0x65, 0x74, 
	0x00, 0x63, 0x62, 0x74, 0x53, 0x69, 0x7A, 0x65, 0x00, 0x63, 0x62, 0x43, 0x6F, 0x6C, 0x6F, 0x72, 0x00, 0x6D, 0x74, 0x78, 
	0x57, 0x6F, 0x72, 0x6C, 0x64, 0x00, 0x63, 0x62, 0x42, 0x6C, 0x75, 0x72, 0x50, 0x61, 0x72, 0x61, 0x6D, 0x00, 0x66, 0x6C, 
	0x6F, 0x61, 0x74, 0x32, 0x00, 0xB6, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 
	0x00, 0x10, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x0A, 0x11, 0x00, 0x00, 0x74, 0x65, 0x78, 0x4F, 0x66, 0x66, 0x73, 
	0x65, 0x74, 0x73, 0x00, 0x72, 0x65, 0x76, 0x65, 0x72, 0x73, 0x65, 0x4F, 0x66, 0x66, 0x73, 0x65, 0x74, 0x00, 0x54, 0x65, 
	0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44, 0x00, 0xF2, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x74, 0x78, 0x44, 0x69, 
	0x66, 0x66, 0x75, 0x73, 0x65, 0x00, 0x53, 0x61, 0x6D, 0x70, 0x6C, 0x65, 0x72, 0x53, 0x74, 0x61, 0x74, 0x65, 0x00, 0x22, 
	0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x15, 0x00, 0x00, 0x00, 0x73, 0x61, 0x6D, 0x4C, 0x69, 0x6E, 0x65, 0x61, 0x72, 0x00, 0x73, 0x61, 0x6D, 
	0x42, 0x6C, 0x75, 0x72, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x15, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 
	0x00, 0x02, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 
	0x00, 0x54, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x00, 0x50, 0x30, 0x00, 0x6C, 0x0A, 0x00, 0x00, 0x44, 0x58, 0x42, 0x43, 
	0x6C, 0x4F, 0x87, 0x67, 0xFE, 0xA2, 0x29, 0x18, 0xC6, 0xBC, 0x5E, 0xBB, 0xB8, 0x99, 0x9B, 0xB1, 0x01, 0x00, 0x00, 0x00, 
	0x6C, 0x0A, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0xDC, 0x02, 0x00, 0x00, 0x30, 0x03, 0x00, 0x00, 
	0x34, 0x04, 0x00, 0x00, 0xF0, 0x09, 0x00, 0x00, 0x52, 0x44, 0x45, 0x46, 0xA0, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 
	0xA4, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x04, 0xFE, 0xFF, 0x00, 0x01, 0x00, 0x00, 
	0x6E, 0x02, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x89, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
	0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x95, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
	0x63, 0x62, 0x53, 0x63, 0x65, 0x6E, 0x65, 0x50, 0x61, 0x72, 0x61, 0x6D, 0x00, 0x63, 0x62, 0x4D, 0x65, 0x73, 0x68, 0x50, 
	0x61, 0x72, 0x61, 0x6D, 0x00, 0x63, 0x62, 0x42, 0x6C, 0x75, 0x72, 0x50, 0x61, 0x72, 0x61, 0x6D, 0x00, 0xAB, 0xAB, 0xAB, 
	0x7C, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xEC, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x89, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x3C, 0x01, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x95, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x14, 0x02, 0x00, 0x00, 
	0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x24, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x34, 0x01, 0x00, 0x00, 
	0x40, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x24, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x6D, 0x74, 0x78, 0x56, 0x69, 0x65, 0x77, 0x00, 0x03, 0x00, 0x03, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x6D, 0x74, 0x78, 0x50, 0x72, 0x6F, 0x6A, 0x00, 0xCC, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x10, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xD8, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE8, 0x01, 0x00, 0x00, 
	0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xD8, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xF0, 0x01, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xD8, 0x01, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xFA, 0x01, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 
	0xD8, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 
	0x02, 0x00, 0x00, 0x00, 0xD8, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0A, 0x02, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 
	0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x24, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x62, 0x76, 0x4F, 
	0x66, 0x66, 0x73, 0x65, 0x74, 0x00, 0xAB, 0xAB, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x63, 0x62, 0x76, 0x53, 0x69, 0x7A, 0x65, 0x00, 0x63, 0x62, 0x74, 0x4F, 0x66, 0x66, 0x73, 0x65, 
	0x74, 0x00, 0x63, 0x62, 0x74, 0x53, 0x69, 0x7A, 0x65, 0x00, 0x63, 0x62, 0x43, 0x6F, 0x6C, 0x6F, 0x72, 0x00, 0x6D, 0x74, 
	0x78, 0x57, 0x6F, 0x72, 0x6C, 0x64, 0x00, 0xAB, 0x44, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00, 
	0x02, 0x00, 0x00, 0x00, 0x50, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x02, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD8, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x74, 0x65, 0x78, 0x4F, 
	0x66, 0x66, 0x73, 0x65, 0x74, 0x73, 0x00, 0xAB, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x07, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x72, 0x65, 0x76, 0x65, 0x72, 0x73, 0x65, 0x4F, 0x66, 0x66, 0x73, 0x65, 0x74, 0x00, 0x4D, 0x69, 
	0x63, 0x72, 0x6F, 0x73, 0x6F, 0x66, 0x74, 0x20, 0x28, 0x52, 0x29, 0x20, 0x48, 0x4C, 0x53, 0x4C, 0x20, 0x53, 0x68, 0x61, 
	0x64, 0x65, 0x72, 0x20, 0x43, 0x6F, 0x6D, 0x70, 0x69, 0x6C, 0x65, 0x72, 0x20, 0x36, 0x2E, 0x33, 0x2E, 0x39, 0x36, 0x30, 
	0x30, 0x2E, 0x31, 0x36, 0x33, 0x38, 0x34, 0x00, 0x49, 0x53, 0x47, 0x4E, 0x4C, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 
	0x08, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x0F, 0x07, 0x00, 0x00, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x50, 0x4F, 0x53, 0x49, 0x54, 0x49, 0x4F, 0x4E, 
	0x00, 0x54, 0x45, 0x58, 0x43, 0x4F, 0x4F, 0x52, 0x44, 0x00, 0xAB, 0xAB, 0x4F, 0x53, 0x47, 0x4E, 0xFC, 0x00, 0x00, 0x00, 
	0x09, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
	0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0xEC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x0C, 0x00, 0x00, 0xEC, 0x00, 0x00, 0x00, 
	0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0C, 0x03, 0x00, 0x00, 
	0xEC, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 
	0x03, 0x0C, 0x00, 0x00, 0xEC, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 
	0x02, 0x00, 0x00, 0x00, 0x0C, 0x03, 0x00, 0x00, 0xEC, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x0C, 0x00, 0x00, 0xEC, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x0C, 0x03, 0x00, 0x00, 0xEC, 0x00, 0x00, 0x00, 
	0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x03, 0x0C, 0x00, 0x00, 
	0xF5, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 
	0x0F, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5F, 0x50, 0x4F, 0x53, 0x49, 0x54, 0x49, 0x4F, 0x4E, 0x00, 0x54, 0x45, 0x58, 0x43, 
	0x4F, 0x4F, 0x52, 0x44, 0x00, 0x43, 0x4F, 0x4C, 0x4F, 0x52, 0x00, 0xAB, 0x53, 0x48, 0x44, 0x52, 0xB4, 0x05, 0x00, 0x00, 
	0x40, 0x00, 0x01, 0x00, 0x6D, 0x01, 0x00, 0x00, 0x59, 0x00, 0x00, 0x04, 0x46, 0x8E, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x08, 0x00, 0x00, 0x00, 0x59, 0x00, 0x00, 0x04, 0x46, 0x8E, 0x20, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 
	0x59, 0x00, 0x00, 0x04, 0x46, 0x8E, 0x20, 0x00, 0x02, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x5F, 0x00, 0x00, 0x03, 
	0x72, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5F, 0x00, 0x00, 0x03, 0x32, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 
	0x67, 0x00, 0x00, 0x04, 0xF2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 
	0x32, 0x20, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0xC2, 0x20, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 
	0x65, 0x00, 0x00, 0x03, 0x32, 0x20, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0xC2, 0x20, 0x10, 0x00, 
	0x02, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0x32, 0x20, 0x10, 0x00, 0x03, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 
	0xC2, 0x20, 0x10, 0x00, 0x03, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0x32, 0x20, 0x10, 0x00, 0x04, 0x00, 0x00, 0x00, 
	0x65, 0x00, 0x00, 0x03, 0xF2, 0x20, 0x10, 0x00, 0x05, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x02, 0x03, 0x00, 0x00, 0x00, 
	0x38, 0x00, 0x00, 0x09, 0xF2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8E, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x01, 0x00, 0x00, 0x00, 0x56, 0x85, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0B, 
	0xF2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8E, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x06, 0x80, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x46, 0x0E, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x32, 0x00, 0x00, 0x0B, 0xF2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8E, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x02, 0x00, 0x00, 0x00, 0xA6, 0x8A, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x46, 0x0E, 0x10, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0B, 0xF2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8E, 0x20, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xF6, 0x8F, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 
	0x46, 0x0E, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0B, 0x72, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 
	0x46, 0x12, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x82, 0x20, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
	0x46, 0x82, 0x20, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x05, 0x82, 0x00, 0x10, 0x00, 
	0x01, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3F, 0x11, 0x00, 0x00, 0x08, 0x12, 0x00, 0x10, 0x00, 
	0x02, 0x00, 0x00, 0x00, 0x46, 0x0E, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x8E, 0x20, 0x00, 0x01, 0x00, 0x00, 0x00, 
	0x05, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x08, 0x22, 0x00, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x46, 0x0E, 0x10, 0x00, 
	0x01, 0x00, 0x00, 0x00, 0x46, 0x8E, 0x20, 0x00, 0x01, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x08, 
	0x42, 0x00, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x46, 0x0E, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x8E, 0x20, 0x00, 
	0x01, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x05, 0x82, 0x00, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 
	0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3F, 0x11, 0x00, 0x00, 0x07, 0x12, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x46, 0x0E, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x46, 0x0E, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x09, 
	0xF2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8E, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
	0x56, 0x85, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0B, 0xF2, 0x00, 0x10, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x46, 0x8E, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x80, 0x20, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x46, 0x0E, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0B, 
	0xF2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8E, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 
	0xA6, 0x8A, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x46, 0x0E, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x32, 0x00, 0x00, 0x0B, 0xF2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8E, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x03, 0x00, 0x00, 0x00, 0xF6, 0x8F, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x46, 0x0E, 0x10, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x07, 0x22, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0E, 0x10, 0x00, 
	0x02, 0x00, 0x00, 0x00, 0x46, 0x0E, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x09, 0xF2, 0x00, 0x10, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x46, 0x8E, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x56, 0x85, 0x20, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0B, 0xF2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x46, 0x8E, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x80, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x06, 0x00, 0x00, 0x00, 0x46, 0x0E, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0B, 0xF2, 0x00, 0x10, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x46, 0x8E, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xA6, 0x8A, 0x20, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x46, 0x0E, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0B, 
	0xF2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8E, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 
	0xF6, 0x8F, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x46, 0x0E, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x11, 0x00, 0x00, 0x07, 0x42, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0E, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 
	0x46, 0x0E, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x09, 0xF2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x46, 0x8E, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x56, 0x85, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x07, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0B, 0xF2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8E, 0x20, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x80, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 
	0x46, 0x0E, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0B, 0xF2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x46, 0x8E, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xA6, 0x8A, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x07, 0x00, 0x00, 0x00, 0x46, 0x0E, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0B, 0xF2, 0x00, 0x10, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x46, 0x8E, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xF6, 0x8F, 0x20, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x46, 0x0E, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x07, 
	0x82, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0E, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x46, 0x0E, 0x10, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0B, 0x32, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x10, 0x10, 0x00, 
	0x01, 0x00, 0x00, 0x00, 0x46, 0x80, 0x20, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x46, 0x80, 0x20, 0x00, 
	0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x32, 0x20, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 
	0x46, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x80, 0x20, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x08, 0xC2, 0x20, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x06, 0x04, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x06, 0x84, 0x20, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x32, 0x20, 0x10, 0x00, 
	0x02, 0x00, 0x00, 0x00, 0x46, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x80, 0x20, 0x00, 0x02, 0x00, 0x00, 0x00, 
	0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0xC2, 0x20, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x06, 0x04, 0x10, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x06, 0x84, 0x20, 0x00, 0x02, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 
	0x32, 0x20, 0x10, 0x00, 0x03, 0x00, 0x00, 0x00, 0x46, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x80, 0x20, 0x00, 
	0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0xC2, 0x20, 0x10, 0x00, 0x03, 0x00, 0x00, 0x00, 
	0x06, 0x04, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x84, 0x20, 0x00, 0x02, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x08, 0x32, 0x20, 0x10, 0x00, 0x04, 0x00, 0x00, 0x00, 0x46, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x46, 0x80, 0x20, 0x00, 0x02, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x06, 0xF2, 0x20, 0x10, 0x00, 
	0x05, 0x00, 0x00, 0x00, 0x46, 0x8E, 0x20, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x01, 
	0x53, 0x54, 0x41, 0x54, 0x74, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x0B, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x8C, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
	0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x98, 0x08, 0x00, 0x00, 0x44, 0x58, 0x42, 0x43, 0x91, 0x7A, 0x89, 0x20, 
	0x69, 0xF4, 0x20, 0x1B, 0x5F, 0xD7, 0x55, 0xA5, 0xC6, 0x86, 0xC1, 0x2E, 0x01, 0x00, 0x00, 0x00, 0x98, 0x08, 0x00, 0x00, 
	0x05, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x90, 0x01, 0x00, 0x00, 0x94, 0x02, 0x00, 0x00, 0xC8, 0x02, 0x00, 0x00, 
	0x1C, 0x08, 0x00, 0x00, 0x52, 0x44, 0x45, 0x46, 0x54, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x9C, 0x00, 0x00, 0x00, 
	0x03, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x04, 0xFF, 0xFF, 0x00, 0x01, 0x00, 0x00, 0x20, 0x01, 0x00, 0x00, 
	0x7C, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 
	0x05, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
	0x0D, 0x00, 0x00, 0x00, 0x8E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x73, 0x61, 0x6D, 0x42, 
	0x6C, 0x75, 0x72, 0x00, 0x74, 0x78, 0x44, 0x69, 0x66, 0x66, 0x75, 0x73, 0x65, 0x00, 0x63, 0x62, 0x42, 0x6C, 0x75, 0x72, 
	0x50, 0x61, 0x72, 0x61, 0x6D, 0x00, 0xAB, 0xAB, 0x8E, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xB4, 0x00, 0x00, 0x00, 
	0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x68, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 
	0x70, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x10, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x74, 0x65, 0x78, 0x4F, 0x66, 0x66, 0x73, 0x65, 0x74, 0x73, 0x00, 0xAB, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 
	0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x72, 0x65, 0x76, 0x65, 0x72, 0x73, 0x65, 0x4F, 0x66, 0x66, 0x73, 0x65, 
	0x74, 0x00, 0xAB, 0xAB, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x4D, 0x69, 0x63, 0x72, 0x6F, 0x73, 0x6F, 0x66, 0x74, 0x20, 0x28, 0x52, 0x29, 0x20, 0x48, 0x4C, 0x53, 0x4C, 0x20, 0x53, 
	0x68, 0x61, 0x64, 0x65, 0x72, 0x20, 0x43, 0x6F, 0x6D, 0x70, 0x69, 0x6C, 0x65, 0x72, 0x20, 0x36, 0x2E, 0x33, 0x2E, 0x39, 
	0x36, 0x30, 0x30, 0x2E, 0x31, 0x36, 0x33, 0x38, 0x34, 0x00, 0xAB, 0xAB, 0x49, 0x53, 0x47, 0x4E, 0xFC, 0x00, 0x00, 0x00, 
	0x09, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
	0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0xEC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0xEC, 0x00, 0x00, 0x00, 
	0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x00, 0x00, 
	0xEC, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 
	0x03, 0x03, 0x00, 0x00, 0xEC, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 
	0x02, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x00, 0x00, 0xEC, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0xEC, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x00, 0x00, 0xEC, 0x00, 0x00, 0x00, 
	0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 
	0xF5, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 
	0x0F, 0x0F, 0x00, 0x00, 0x53, 0x56, 0x5F, 0x50, 0x4F, 0x53, 0x49, 0x54, 0x49, 0x4F, 0x4E, 0x00, 0x54, 0x45, 0x58, 0x43, 
	0x4F, 0x4F, 0x52, 0x44, 0x00, 0x43, 0x4F, 0x4C, 0x4F, 0x52, 0x00, 0xAB, 0x4F, 0x53, 0x47, 0x4E, 0x2C, 0x00, 0x00, 0x00, 
	0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5F, 0x54, 0x41, 0x52, 0x47, 0x45, 
	0x54, 0x00, 0xAB, 0xAB, 0x53, 0x48, 0x44, 0x52, 0x4C, 0x05, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x53, 0x01, 0x00, 0x00, 
	0x59, 0x00, 0x00, 0x04, 0x46, 0x8E, 0x20, 0x00, 0x02, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x5A, 0x00, 0x00, 0x03, 
	0x00, 0x60, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x58, 0x18, 0x00, 0x04, 0x00, 0x70, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x55, 0x55, 0x00, 0x00, 0x62, 0x10, 0x00, 0x03, 0x32, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x62, 0x10, 0x00, 0x03, 
	0xC2, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x62, 0x10, 0x00, 0x03, 0x32, 0x10, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 
	0x62, 0x10, 0x00, 0x03, 0xC2, 0x10, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x62, 0x10, 0x00, 0x03, 0x32, 0x10, 0x10, 0x00, 
	0x03, 0x00, 0x00, 0x00, 0x62, 0x10, 0x00, 0x03, 0xC2, 0x10, 0x10, 0x00, 0x03, 0x00, 0x00, 0x00, 0x62, 0x10, 0x00, 0x03, 
	0x32, 0x10, 0x10, 0x00, 0x04, 0x00, 0x00, 0x00, 0x62, 0x10, 0x00, 0x03, 0xF2, 0x10, 0x10, 0x00, 0x05, 0x00, 0x00, 0x00, 
	0x65, 0x00, 0x00, 0x03, 0xF2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x02, 0x04, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x08, 0x32, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x10, 0x10, 0x00, 0x04, 0x00, 0x00, 0x00, 
	0x46, 0x80, 0x20, 0x00, 0x02, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x09, 0xF2, 0x00, 0x10, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x46, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x7E, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x60, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x09, 0xF2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 
	0x46, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x7E, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x10, 0x00, 
	0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0E, 0x10, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x46, 0x0E, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x09, 0xF2, 0x00, 0x10, 0x00, 
	0x01, 0x00, 0x00, 0x00, 0xE6, 0x1A, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x7E, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x60, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0xF2, 0x00, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 
	0xE6, 0x14, 0x10, 0x00, 0x03, 0x00, 0x00, 0x00, 0x46, 0x84, 0x20, 0x00, 0x02, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 
	0x45, 0x00, 0x00, 0x09, 0xF2, 0x00, 0x10, 0x00, 0x03, 0x00, 0x00, 0x00, 0x46, 0x00, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 
	0x46, 0x7E, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x09, 
	0xF2, 0x00, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0xE6, 0x0A, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x46, 0x7E, 0x10, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF2, 0x00, 0x10, 0x00, 
	0x01, 0x00, 0x00, 0x00, 0x46, 0x0E, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x0E, 0x10, 0x00, 0x03, 0x00, 0x00, 0x00, 
	0x38, 0x00, 0x00, 0x0A, 0xF2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x0E, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 
	0x02, 0x40, 0x00, 0x00, 0xFF, 0x41, 0x34, 0x3E, 0xFF, 0x41, 0x34, 0x3E, 0xFF, 0x41, 0x34, 0x3E, 0xFF, 0x41, 0x34, 0x3E, 
	0x32, 0x00, 0x00, 0x0C, 0xF2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0E, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x02, 0x40, 0x00, 0x00, 0x63, 0x42, 0xCC, 0x3D, 0x63, 0x42, 0xCC, 0x3D, 0x63, 0x42, 0xCC, 0x3D, 0x63, 0x42, 0xCC, 0x3D, 
	0x46, 0x0E, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x09, 0xF2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 
	0x46, 0x10, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x46, 0x7E, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x10, 0x00, 
	0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x0E, 0x10, 0x00, 
	0x02, 0x00, 0x00, 0x00, 0x46, 0x0E, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0C, 0xF2, 0x00, 0x10, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x46, 0x0E, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0xFC, 0xC6, 0xF7, 0x3D, 
	0xFC, 0xC6, 0xF7, 0x3D, 0xFC, 0xC6, 0xF7, 0x3D, 0xFC, 0xC6, 0xF7, 0x3D, 0x46, 0x0E, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x45, 0x00, 0x00, 0x09, 0xF2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0xE6, 0x1A, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 
	0x46, 0x7E, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 
	0xF2, 0x00, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0xE6, 0x14, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x46, 0x84, 0x20, 0x00, 
	0x02, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x09, 0xF2, 0x00, 0x10, 0x00, 0x03, 0x00, 0x00, 0x00, 
	0x46, 0x00, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x46, 0x7E, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x10, 0x00, 
	0x01, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x09, 0xF2, 0x00, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0xE6, 0x0A, 0x10, 0x00, 
	0x02, 0x00, 0x00, 0x00, 0x46, 0x7E, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x07, 0xF2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x0E, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 
	0x46, 0x0E, 0x10, 0x00, 0x03, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0C, 0xF2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x46, 0x0E, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0x5E, 0xA0, 0x84, 0x3D, 0x5E, 0xA0, 0x84, 0x3D, 
	0x5E, 0xA0, 0x84, 0x3D, 0x5E, 0xA0, 0x84, 0x3D, 0x46, 0x0E, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x09, 
	0xF2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x10, 0x10, 0x00, 0x03, 0x00, 0x00, 0x00, 0x46, 0x7E, 0x10, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF2, 0x00, 0x10, 0x00, 
	0x01, 0x00, 0x00, 0x00, 0x46, 0x0E, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x46, 0x0E, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 
	0x32, 0x00, 0x00, 0x0C, 0xF2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0E, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 
	0x02, 0x40, 0x00, 0x00, 0x9E, 0x24, 0xDD, 0x3C, 0x9E, 0x24, 0xDD, 0x3C, 0x9E, 0x24, 0xDD, 0x3C, 0x9E, 0x24, 0xDD, 0x3C, 
	0x46, 0x0E, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x09, 0xF2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 
	0xE6, 0x1A, 0x10, 0x00, 0x03, 0x00, 0x00, 0x00, 0x46, 0x7E, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x10, 0x00, 
	0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0xF2, 0x00, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0xE6, 0x14, 0x10, 0x00, 
	0x01, 0x00, 0x00, 0x00, 0x46, 0x84, 0x20, 0x00, 0x02, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x09, 
	0xF2, 0x00, 0x10, 0x00, 0x03, 0x00, 0x00, 0x00, 0x46, 0x00, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x46, 0x7E, 0x10, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x09, 0xF2, 0x00, 0x10, 0x00, 
	0x02, 0x00, 0x00, 0x00, 0xE6, 0x0A, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x46, 0x7E, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x60, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 
	0x46, 0x0E, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x0E, 0x10, 0x00, 0x03, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0C, 
	0xF2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0E, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 
	0xE1, 0x96, 0x0F, 0x3C, 0xE1, 0x96, 0x0F, 0x3C, 0xE1, 0x96, 0x0F, 0x3C, 0xE1, 0x96, 0x0F, 0x3C, 0x46, 0x0E, 0x10, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x09, 0xF2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x10, 0x10, 0x00, 
	0x04, 0x00, 0x00, 0x00, 0x46, 0x7E, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x07, 0xF2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x0E, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 
	0x46, 0x0E, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0C, 0xF2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x46, 0x0E, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0x50, 0x3A, 0x11, 0x3B, 0x50, 0x3A, 0x11, 0x3B, 
	0x50, 0x3A, 0x11, 0x3B, 0x50, 0x3A, 0x11, 0x3B, 0x46, 0x0E, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x07, 
	0xF2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0E, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x1E, 0x10, 0x00, 
	0x05, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x01, 0x53, 0x54, 0x41, 0x54, 0x74, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 
	0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x28, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x00, 
	0x1A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x1A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x00, 0x00, 0x00, 
	0x59, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x59, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x87, 0x00, 0x00, 0x00, 0x59, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x91, 0x00, 0x00, 0x00, 0x59, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x99, 0x00, 0x00, 0x00, 0x59, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA1, 0x00, 0x00, 0x00, 
	0x1A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xAA, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 
	0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD9, 0x00, 0x00, 0x00, 0xBD, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE4, 0x00, 0x00, 0x00, 
	0x59, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x18, 0x01, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 
	0x00, 0x00, 0x00, 0x00, 0x4B, 0x01, 0x00, 0x00, 0x2F, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0x01, 0x00, 0x00, 0x2F, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0x00, 0x00, 0x00, 0x2D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
	0x5D, 0x01, 0x00, 0x00, 0x2E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x69, 0x01, 0x00, 0x00, 
	0x2F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x75, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x81, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x89, 0x01, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0xFC, 0x0B, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x01, 0x00, 0x00, 0x00, 0x04, 0x0C, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
	0x10, 0x0C, 0x00, 0x00, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x1C, 0x0C, 0x00, 0x00, 
	0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0xC4, 0x14, 0x00, 0x00, 0x3A, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xCC, 0x14, 0x00, 0x00, 
};
MofU32 g_GBlurSize = sizeof(g_GBlur);
#else
extern unsigned char g_GBlur[];
extern MofU32 g_GBlurSize;
#endif