#include <iostream>
#include "testcolorpair.h"

using namespace TelCoColorCoder;

int main() {
        testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
        testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);
 
        testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
        testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);
 
        std::cout<<TelCoColorCoder::printReferenceManual;
        
    return 0;
}
