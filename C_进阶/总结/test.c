//#define _CRT_SECURE_NO_WARNINGS 1
//class Solution {
//public:
//	void replaceSpace(char *str, int length) {
//		char* head = str;
//		int src = 0;
//		int end = length;
//		int dest = 0;
//		while (src < length + 1)
//		{
//			if (str[src] == ' ')
//			{
//				end = end + 2;
//				for (int i = 0; i < end - 2 - src; i++)
//					str[end - i] = str[end - 2 - i];
//				str[dest] = '%';
//				str[dest + 1] = '2';
//				str[dest + 2] = '0';
//				dest = dest + 3;
//				src = src + 3;
//			}
//			else
//				str[dest++] = str[src++];
//		}
//		str = head;
//	}
};