#include "image.h"
#include "data.h"
#include "types.h"

#ifndef _INCL_CLOAK
#define _INCL_CLOAK

class Cloak
{
	private:
		Image *				sourceImage;
		Image *				targetImage;
		
		EncryptedDataFile *	sourceFile;
		EncryptedDataFile *	targetFile;
		
		word				bitsPerByte;
		
		ImageType			sourceImageType;
		ImageType			targetImageType;
		
		ImageType			_getImageType(char *pszFilename);
		
		void				_merge(byte * pTargetBytes);
		void				_extract();
		
		void				_populateSizeBuffer(dword size, byte *pBuffer);
		dword				_getSizeFromBuffer(byte *pBuffer);
		
	public:
							Cloak();
							~Cloak();
					
		word				getBitsPerByte();
		void				setBitsPerByte(word bitsPerByte);
		
		ImageType			getSourceImageType();
		ImageType			getTargetImageType();
		
		Image *				getSourceImage();
		
		void				getImageSize(long &width, long &height, word &bitsPerPixel);
		dword				getImageCapacity();
		
		dword				getDataFileSize();
		
		void				loadSourceImage(char *pszFilename);
		void				loadSourceDataFile(char *pszFilename);

		void				copy(char *pszFilename);
		
		void				merge(char *pszFilename, char *pszPassword);
		void				merge(char *pszFilename, byte *pbKeystream, dword ulKeyLength);
		
		void				extract(char *pszFilename, char *pszPassword);
		void				extract(char *pszFilename, byte *pbKeystream, dword ulKeyLength);
		
		void				validate();
		
		const char *		getTargetFileExtension();
};

#endif