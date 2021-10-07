TEST(FactorialTest, HandlesPositiveInput) {
  EXPECT_EQ(sumatorio(1), 1);
  EXPECT_EQ(sumatorio(2), 3);
  EXPECT_EQ(sumatorio(3), 6);
  EXPECT_EQ(sumatorio(4), 10);
}