#include "pch.h"
#include "CppUnitTest.h"
#include "RockPaperScissor.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RockPaperScissorTest
{
	TEST_CLASS(RockPaperScissorTest)
	{
	public:
		
		TEST_METHOD(TestRockBeatsScissors)
		{
			char result[20];
			determineWinner("Rock", "Scissors", result);
			Assert::AreEqual("Player1", result);  // Expected output: Player1
		}
	};
}
