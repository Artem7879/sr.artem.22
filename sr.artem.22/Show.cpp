#include "Show.h"

Show::Show(string topic, string name, Time_ time) : TVprogram(name, time) {
this->topic = topic;
}

Show::~Show() {}

void Show::setTopic(string topic) {
this->topic = topic;
}

string Show::getTopic() const& {
return topic;
}

string Show::toString() const& {
    string sh;
    sh += "Name : " + name;
    sh += " ";
    sh += "Time : " + time.toStringTime();
    sh += " ";
    sh += "Topic : " + getTopic();
    sh += " ";
    return sh;
}

