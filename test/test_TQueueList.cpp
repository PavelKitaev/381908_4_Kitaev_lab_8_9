#include "Queue.h"
#include <gtest.h>

TEST(TQueueList, can_create_QueueList)
{
  ASSERT_NO_THROW(TQueueList<int> qe);
}

TEST(TQueueList, create_empty_QueueList)
{
	TQueueList<int> qe;

	EXPECT_EQ(true, qe.IsEmpty());
}

TEST(TQueueList, create_isfull_QueueList)
{
	TQueueList<int> qe;

	EXPECT_EQ(false, qe.IsFull());
}

TEST(TQueueList, can_push)
{
	TQueueList<int> qe;

	ASSERT_NO_THROW(qe.Push(3));
}

TEST(TQueueList, can_get_elem)
{
	TQueueList<int> qe;
	qe.Push(4);

	EXPECT_EQ(4, qe.Get());
}

TEST(TQueueList, cant_get_if_empty)
{
	TQueueList<int> qe;

	ASSERT_ANY_THROW(qe.Get());
}

TEST(TQueueList, can_copy_QueueList)
{
	TQueueList<int> qe1;
	qe1.Push(1);

	ASSERT_NO_THROW(TQueueList<int> qe2(qe1));
}

TEST(TQueueList, can_assing_QueueList)
{
	TQueueList<int> qe1;
	qe1.Push(1);
	TQueueList<int> qe2;
	qe2 = qe1;

	EXPECT_EQ(1, qe2.Get());
}

TEST(TQueueList, can_get_count)
{
	TQueueList<int> qe;
	qe.Push(1);
	qe.Push(2);
	EXPECT_EQ(2, qe.GetCount());
}

