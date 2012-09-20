/*
 Credits:
 
 Port by ugriffin. Original Windows .dll by 39ster.
 
 Special Thanks to OneSadCookie, for help during the initial port. :)
 
 Copyright © 2010, The GMac Project
 All rights reserved.
 
 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions are met:
 1. Redistributions of source code must retain the above copyright
 notice, this list of conditions and the following disclaimer.
 2. Redistributions in binary form must reproduce the above copyright
 notice, this list of conditions and the following disclaimer in the
 documentation and/or other materials provided with the distribution.
 3. All advertising materials mentioning features or use of this software
 must display the following acknowledgement:
 This product includes software developed by the GMac Project. www.gmacorg.sourceforge.net
 4. Neither the name of the GMac Project nor the
 names of its contributors may be used to endorse or promote products
 derived from this software without specific prior written permission.
 
 THIS SOFTWARE IS PROVIDED BY THE GMAC PROJECT ''AS IS'' AND ANY
 EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 DISCLAIMED. IN NO EVENT SHALL THE GMAC PROJECT BE LIABLE FOR ANY
 DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
#pragma once
#include "includes.h"
#include "buffer.h"
void CalculateMD5(char *, int, char *);
class CTools
{
public:
	static char* getmacaddress();
	static char* md5buffer(CBuffer*buff);
	static char* md5string(char*str);
	static unsigned int ip2uint(char*ip);
	static char* uint2ip(unsigned int ip);
	static bool netconnected();
	static void encryptedbuffer(CBuffer*buff, char*key);
	static bool comparematch(char*string, char*wild);
	static unsigned int adler32(CBuffer*buff);
#if 0
	static HANDLE BinOpen(char*filename, int mode);
	static bool BinClose(HANDLE hwnd);
	static int BinWrite(HANDLE hwnd, CBuffer*in);
	static int BinRead(HANDLE hwnd, int size, CBuffer*out);
	static int BinGetPos(HANDLE hwnd);
	static int BinSetPos(HANDLE hwnd, int offset);
	static int BinFileSize(HANDLE hwnd);
#endif
};
