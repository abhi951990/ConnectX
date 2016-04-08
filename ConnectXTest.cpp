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

TEST(ConnectXTest,conditionCheckInvalid){
  ConnectX conn;
  // bool flag=false;

  ASSERT_EQ(-1,conn.at(2,6));

  // ASSERT_EQ(-1,conn.at(-1,6));  //bug
  ASSERT_EQ(-1,conn.at(7,-1));
  // ASSERT_EQ(-1,conn.at(7,1));   //bug
  ASSERT_EQ(-1,conn.at(8,-1));
  ASSERT_NE(-1,conn.at(2,2));

  // ASSERT_EQ(0,conn.at(0,0));
  // EXPECT_EQ(0,conn.at(-1,0));   //bug
  // ASSERT_EQ(0,conn.at(-1,1));  //bug
  // ASSERT_EQ(0,conn.at(-1,2));  //bug
  // ASSERT_EQ(0,conn.at(-1,3));  //bug
  // ASSERT_EQ(-1,conn.at(-1,4));  //bug
  // ASSERT_EQ(-1,conn.at(-1,5));  //bug


  // conn.placePiece(2);
  // ASSERT_TRUE(flag);
}

TEST(ConnectXTest, conditionCheckEmpty){
  ConnectX conn;

  ASSERT_EQ(0,conn.at(0,0));
  ASSERT_EQ(0,conn.at(6,5));
  ASSERT_NE(0,conn.at(-2,3));

}


TEST(ConnectXTest, conditionCheckblack){
  ConnectX conn;
  ASSERT_NE(2,conn.at(2,5));
  conn.placePiece(2);
  ASSERT_EQ(2,conn.at(2,5));
  ASSERT_NE(2,conn.at(-1,5));
  ASSERT_NE(2,conn.at(-2,5));
  conn.placePiece(3);
  ASSERT_NE(2,conn.at(3,5));
  conn.placePiece(4);
  ASSERT_EQ(2,conn.at(4,5));
}


TEST(ConnectXTest,checkwhoseturn){
  ConnectX conn;

  ASSERT_EQ(2,conn.whoseTurn());
  conn.placePiece(2);
  ASSERT_NE(2,conn.whoseTurn());
  ASSERT_EQ(1,conn.whoseTurn());
  conn.placePiece(2);
  ASSERT_EQ(2,conn.whoseTurn());
}


TEST(ConnectXTest, checkat){
  ConnectX conn;

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
