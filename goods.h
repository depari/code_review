#ifndef GOODS_H_
#define GOODS_H_

// Goods class for representing goods information with serialNumber and price
// Example:
//    Goods test;
//    test.SetGoodsInfo(1, 10000);
//    std::cout << test.GetSerialNumber() << " - " << test.GetPrice << endl;
class Goods{
 public:
  void SetGoodsInfo(int serial_number, int price);
  int GetSerialNumber();
  int GetPrice();

 private:
  int goods_serial_number_ = 0;
  int goods_price_ = 0;
};


#endif  // GOODS_H_
