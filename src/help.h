#pragma once
const char *help_text = 
	"Usage: texpack -o <output-files-prefix> [options...] [<input-file>]\n"
	"\n"
	"The <input-file> should contain a list of image files (png) separated by new\n"
	"lines. If no <input-file> is given, it will read from stdin.\n"
	"\n"
	"Options:\n"
	"\n"
	"-h, --help            Show this help.\n"
	"-o, --output          Prefix for the generated files (atlas and json).\n"
	"-p, --padding         Padding between sprites.\n"
	"-s, --size            Fixed size for the atlas image (i.e. 512x512).\n"
	"-S, --max-size        Max size for the atlas image (ignored if size is used).\n"
	"-P, --POT             Keep atlas size a power of two (ignored if size is used).\n"
	"-f, --allow-flip      Allows sprites to be flipped/rotated for better packing.\n"
	"-m, --metadata        Input metadata file in json format. (*)\n"
	"-e, --pretty          Generated json file will be human readable.\n"
	"-i, --indentation     String for json indentation. Used along with --pretty.\n"
	"-b, --alpha-bleeding  Post-process atlas image with an alpha bleeding algorithm.\n"
	"-M, --mode            Specifies the packing heuristic. Allowed values are:\n"
	"                        * auto (default; tries all modes and selects one)\n"
	"                        * bottom-left\n"
	"                        * short-side\n"
	"                        * long-side\n"
	"                        * best-area\n"
	"                        * contact-point\n"
	"\n"
	"(*) The format of the metadata file should be as follows:\n"
	"\n"
	"    {\n"
	"      \"someimage.png\":    {\"param1\": \"some-value\", \"param2\": 0, ...},\n"
	"      \"anotherimage.png\": {\"param1\": \"some-value\", \"param2\": 0, ...},\n"
	"      ...\n"
	"    }\n"
	"\n"
	"    Each file name should match one in the <input-file> list.\n"
	"";