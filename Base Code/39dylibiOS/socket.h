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

class CSocket
{
	bool udp;
	int format;
	char formatstr[30];
	static SOCKADDR_IN SenderAddr;
	int receivetext(char*buf, int max);
public:
	
	SOCKET sockid;
	CSocket(SOCKET sock);
	CSocket();
	~CSocket();
	bool tcpconnect(char*address, int port, int mode);
	bool tcplisten(int port, int max, int mode);
	CSocket* tcpaccept(int mode);
	char* tcpip();
	void setnagle(bool enabled);
	bool tcpconnected();
	int setsync(int mode);
	bool udpconnect(int port, int mode);
	int sendmessage(char*ip, int port, CBuffer* source);
	int receivemessage(int len, CBuffer*destination);
	int peekmessage(int size, CBuffer*destination);
	int lasterror();
	static char* GetIp(char*address);
	static int SockExit(void);
	static int SockStart(void);
	static char* lastinIP(void);
	static unsigned short lastinPort(void);
	static char* myhost();
	int SetFormat(int mode, char* sep);
};
