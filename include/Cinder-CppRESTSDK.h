#pragma once

#ifndef _NO_ASYNCRTIMP
#define _NO_ASYNCRTIMP
#endif

#if defined(_DEBUG)
#pragma comment(lib, "Crypt32.lib")
#pragma comment(lib, "Bcrypt.lib")
#pragma comment(lib, "winhttp.lib")
#pragma comment(lib, "cpprest120d_2_8.lib")
#else
#pragma comment(lib, "Crypt32.lib")
#pragma comment(lib, "Bcrypt.lib")
#pragma comment(lib, "winhttp.lib")
#pragma comment(lib, "cpprest120d_2_8.lib")
#endif