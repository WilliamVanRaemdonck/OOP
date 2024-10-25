#pragma once
#include <stdio.h>
#include <string>

#include "Customer.h";
#include "Article.h"

#define MAX_ARTICLES 50

using namespace std;

class Invoice {
public:
	// Constructor
	Invoice(const Customer& customerS = Customer(), const Article articlesS[MAX_ARTICLES] = {},float priceS = 0.0f, int discountS = 0)
		: customer(customerS), price(priceS), discount(discountS) {
		// Initialize articles array
		for (int i = 0; i < MAX_ARTICLES; ++i) {
			articles[i] = articlesS[i];
		}
	}

	// Destructor
	~Invoice() {}

	//getters
	Customer getCustomer() {
		return customer;
	}
	Article getArticles() {
		return articles;
	}
	float getPrice() {
		return price;
	}
	int getDiscount() {
		return discount;
	}

	//setters
	void setCustomer(Customer customerS) {
		customer = customerS;
	}
	void setArticles(Article articlesS) {
		articles = articlesS;
	}
	void setPrice(float priceS) {
		price = priceS;
	}
	void setDiscount(int discountS) {
		discount = discountS;
	}

	//functions
	float calculateDiscount() {
		return 0;
	}
	float calculatePrice() {
		return 0;
	}

private:
	Customer customer;
	Article articles[MAX_ARTICLES];
	float price = 0;
	int discount = 0;
};