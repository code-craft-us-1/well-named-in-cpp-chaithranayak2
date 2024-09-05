#include <iostream>
#include <assert.h>
#include "colorpair.h"
namespace TelCoColorCoder
{
    void testNumberToPair(int pairNumber,
        TelCoColorCoder::MajorColor expectedMajor,
        TelCoColorCoder::MinorColor expectedMinor)
    {
        TelCoColorCoder::ColorPair colorPair =
            TelCoColorCoder::GetColorFromPairNumber(pairNumber);
        std::cout << "Got pair " << colorPair.ToString() << std::endl;
        assert(colorPair.getMajor() == expectedMajor);
        assert(colorPair.getMinor() == expectedMinor);
    }
 
    void testPairToNumber(
        TelCoColorCoder::MajorColor major,
        TelCoColorCoder::MinorColor minor,
        int expectedPairNumber)
    {
        int pairNumber = TelCoColorCoder::GetPairNumberFromColor(major, minor);
        std::cout << "Got pair number " << pairNumber << std::endl;
        assert(pairNumber == expectedPairNumber);
    }

    std::string printReferenceManual()
    {
        //print reference manual for wiring personnel
        std::string message = "Color Coding Manual"<< std::endl;
        for(int pairNumber = 1; pairNumber <= 25; pairNumber++) {
            TelCoColorCoder::ColorPair colorPair =
                TelCoColorCoder::GetColorFromPairNumber(pairNumber);
            message += std::to_string(pairNumber);
            message += " ";
            message += colorPair.ToString();
            message += "\n";
        }
        return message;
    }
}
 
int main() {
        testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
        testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);
 
        testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
        testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);
 
         std::cout<<TelCoColorCoder::printReferenceManual;
    return 0;
}
