/*
 * PayData.h
 *
 *  Created on: Apr 3, 2014
 *      Author: roscus
 */

#ifndef PAYDATA_H_
#define PAYDATA_H_

#include <jni.h>
#include <string>

using namespace std;
class PayData{
public:
	PayData();

protected:
	jobject getJObject(const char* method, const char* jType );
	jobject callObjectGetter(const char* method, const char* jType, jobject jPayData);
	jfloat callFloatGetter(const char* method, const char* jType , jobject jPayData);
public:
	static char* jclass_path;
	static PayData* getInstance();

	const string getMyOrderId();
	const string getProductId();
	const string getProductName();
	float getProductRealPrice();
	float getProductIdealPrice();
	int getProductCount();
	const string getDescription();
	const string getPayDataEx(const char* key);

	void setMyOrderId(const char* myOrderId);
	void setProductId(const char* myProductId);
	void setProductName(const char* myProductName);
	void setProductRealPrice(float realPrice);
	void setProductIdealPrice(float idealPrice);
	void setProductCount(int productCount);
	void setDescription(const char* desc );
	void setPayDataEx(const char* key, const char* value);

	jobject toJObject();
	void fromJObject(jobject obj);
private:
	string _myOrderId;
	string _productId;
	string _productName;
	float  _productRealPrice;
	float  _productIdealPrice;
	int    _productCount;
	string _description;

};


#endif /* PAYDATA_H_ */
