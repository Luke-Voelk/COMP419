#ifndef UI_MANAGER_H
#define UI_MANAGER_H


#include "IwGx.h"
#include "s3e.h"

class UIManager {
	
	private:
	
		int pointerOffset;
	
	public:
	
		UIManager();
	
		/**
		Get the number of pixels that the game world should be moved up or down.
		 
		@return the number of pixels
		*/
		int getWorldOffset();
	
		void updateOffset();
    
        int getWidth();
        int getHeight();
};

#endif