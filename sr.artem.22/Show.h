#pragma once
#include "TVprogram.h"
class Show :
	public TVprogram {
protected:
string topic;
public:
Show(string topic, string name, Time_ time);
~Show();
void setTopic(string topic);
string getTopic()const&;
virtual string type() const& override { return "Show"; }
virtual string toString() const& override;
};
