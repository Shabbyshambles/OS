void printf(char* str)
{
   unsigned short* VideoMem = (unsigned short*)0xb8000;

   for(int i = 0; str[i] != '\0';i++)
      VideoMem[i] = (VideoMem[i] & 0xFF00) | str[i];

}


extern "C" void kernelMain(void* multiboot_structure, unsigned int magicnumber)
{
      printf("Hello World");


      while(1);
}