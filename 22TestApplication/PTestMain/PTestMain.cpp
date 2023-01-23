#include "PTestMain.h"

int main() {
	try {
		PTestMain* pPTestMain = new("PTestMain") PTestMain();
		pPTestMain->InitializeMain();
		pPTestMain->RunMain();
		pPTestMain->FinalizeMain();
		delete pPTestMain;
	}
	catch (TestException& exception) {
		exception.Println();
	}

}