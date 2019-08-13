#include "./goods.h"

void Goods::SetGoodsInfo(int index, int price) {
  goods_serial_number_ = index;
  goods_price_ = price;
}

int Goods::GetSerialNumber() {
  return goods_serial_number_;
}

int Goods::GetPrice() {
  return goods_price_;
}
