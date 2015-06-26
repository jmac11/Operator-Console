#pragma once

#define REDIRECT_STDIO				// this redirects stdout and stderr to log window using pipes and threads
//#define STDIO_DEBUG				// turns on some calls printf and cout (for debugging)
#define STDOUT_BUFSIZE	32768		// this is the desired buffer size for the redirected stdout
#define START_TEST_FROM_FRAME_READY	// test (blemish or sfrplus) will be started in OnFrameReady() rather than OnStart()

//#define NO_LOG					// turns off log messages generated by the COperatorConsoleApp object
#define USE_RGB_DATA				// if defined image data is in rgb format, otherwise it's in raw format
#define LOG_FILENAME ".\\log.txt"	// contents of log window will be saved to this file when the program exits
