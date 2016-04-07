/**
 * Unit Tests for ConnectX class
**/

#include <gtest/gtest.h>
#include <iostream>
#include "ConnectX.h"

class ConnectXTest : public ::testing::Test
{
	protected:
		ConnectXTest(){}
		virtual ~ConnectXTest(){}
		virtual void SetUp(){}
		virtual void TearDown(){}
};

TEST(ConnectXTest, sanityCheck)
{
	ASSERT_TRUE(true);
}

TEST(ConnectXTest,placePieceInvalid){
  ConnectX conn;
  // bool flag=false;

  ASSERT_EQ(-1,conn.at(2,6));
  // ASSERT_EQ(0,conn.at(0,0));
  ASSERT_EQ(-1,conn.at(-1,0));
  ASSERT_EQ(-1,conn.at(-1,1));
  ASSERT_EQ(-1,conn.at(-1,2));


  // conn.placePiece(2);
  // ASSERT_TRUE(flag);
}

TEST(ConnectXTest,placePiece){
  ConnectX conn;
  // bool flag=false;
  conn.placePiece(2);
  conn.placePiece(3);
  conn.placePiece(3);
  conn.placePiece(2);
  conn.placePiece(3);
  conn.placePiece(3);
  conn.placePiece(2);
  conn.placePiece(3);
  conn.placePiece(2);
  conn.placePiece(2);
  conn.placePiece(2);
  conn.placePiece(2);
  conn.placePiece(3);
  conn.placePiece(3);
  conn.placePiece(1);
  conn.placePiece(4);
  conn.placePiece(1);
  conn.placePiece(1);
  conn.placePiece(4);
  conn.placePiece(1);
  conn.placePiece(1);
  conn.placePiece(1);
  conn.placePiece(4);
  conn.placePiece(1);
  conn.placePiece(4);
  conn.placePiece(4);
  conn.placePiece(0);
  conn.placePiece(5);
  conn.placePiece(5);
  conn.placePiece(5);
  conn.placePiece(5);
  conn.placePiece(5);














  conn.showBoard();
  ASSERT_EQ(2,conn.at(2,5));

  // ASSERT_TRUE(flag);


}
