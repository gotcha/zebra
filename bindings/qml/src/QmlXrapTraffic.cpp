/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/

#include "QmlXrapTraffic.h"


///
//  Receive a xrap_traffic from the socket. Returns 0 if OK, -1 if
//  there was an error. Blocks if there is no message waiting.    
int QmlXrapTraffic::recv (zsock_t *input) {
    return xrap_traffic_recv (self, input);
};

///
//  Send the xrap_traffic to the output socket, does not destroy it
int QmlXrapTraffic::send (zsock_t *output) {
    return xrap_traffic_send (self, output);
};

///
//  Print contents of message to stdout
void QmlXrapTraffic::print () {
    xrap_traffic_print (self);
};

///
//  Get the message routing id, as a frame
zframe_t *QmlXrapTraffic::routingId () {
    return xrap_traffic_routing_id (self);
};

///
//  Set the message routing id from a frame
void QmlXrapTraffic::setRoutingId (zframe_t *routingId) {
    xrap_traffic_set_routing_id (self, routingId);
};

///
//  Get the xrap_traffic message id
int QmlXrapTraffic::id () {
    return xrap_traffic_id (self);
};

///
//  Set the xrap_traffic message id
void QmlXrapTraffic::setId (int id) {
    xrap_traffic_set_id (self, id);
};

///
//  Get the xrap_traffic message id as printable text
const QString QmlXrapTraffic::command () {
    return QString (xrap_traffic_command (self));
};

///
//  Get the address field
const QString QmlXrapTraffic::address () {
    return QString (xrap_traffic_address (self));
};

///
//  Set the address field
void QmlXrapTraffic::setAddress (const QString &address) {
    xrap_traffic_set_address (self, address.toUtf8().data());
};

///
//  Get the timeout field
uint32_t QmlXrapTraffic::timeout () {
    return xrap_traffic_timeout (self);
};

///
//  Set the timeout field
void QmlXrapTraffic::setTimeout (uint32_t timeout) {
    xrap_traffic_set_timeout (self, timeout);
};

///
//  Get a copy of the content field
zmsg_t *QmlXrapTraffic::content () {
    return xrap_traffic_content (self);
};

///
//  Get the content field and transfer ownership to caller
zmsg_t *QmlXrapTraffic::getContent () {
    return xrap_traffic_get_content (self);
};

///
//  
void QmlXrapTraffic::setContent (zmsg_t **contentP) {
    xrap_traffic_set_content (self, contentP);
};

///
//  Get the route field
const QString QmlXrapTraffic::route () {
    return QString (xrap_traffic_route (self));
};

///
//  Set the route field
void QmlXrapTraffic::setRoute (const QString &route) {
    xrap_traffic_set_route (self, route.toUtf8().data());
};

///
//  Get the method field
const QString QmlXrapTraffic::method () {
    return QString (xrap_traffic_method (self));
};

///
//  Set the method field
void QmlXrapTraffic::setMethod (const QString &method) {
    xrap_traffic_set_method (self, method.toUtf8().data());
};

///
//  Get the sender field
zuuid_t *QmlXrapTraffic::sender () {
    return xrap_traffic_sender (self);
};

///
//  Get the sender field and transfer ownership to caller
zuuid_t *QmlXrapTraffic::getSender () {
    return xrap_traffic_get_sender (self);
};

///
//  Set the sender field
void QmlXrapTraffic::setSender (zuuid_t *senderP) {
    xrap_traffic_set_sender (self, senderP);
};

///
//  Get the status_code field
uint16_t QmlXrapTraffic::statusCode () {
    return xrap_traffic_status_code (self);
};

///
//  Set the status_code field
void QmlXrapTraffic::setStatusCode (uint16_t statusCode) {
    xrap_traffic_set_status_code (self, statusCode);
};

///
//  Get the status_reason field
const QString QmlXrapTraffic::statusReason () {
    return QString (xrap_traffic_status_reason (self));
};

///
//  Set the status_reason field
void QmlXrapTraffic::setStatusReason (const QString &statusReason) {
    xrap_traffic_set_status_reason (self, statusReason.toUtf8().data());
};


QObject* QmlXrapTraffic::qmlAttachedProperties(QObject* object) {
    return new QmlXrapTrafficAttached(object);
}


///
//  Self test of this class.
void QmlXrapTrafficAttached::test (bool verbose) {
    xrap_traffic_test (verbose);
};

///
//  Create a new empty xrap_traffic
QmlXrapTraffic *QmlXrapTrafficAttached::construct () {
    QmlXrapTraffic *qmlSelf = new QmlXrapTraffic ();
    qmlSelf->self = xrap_traffic_new ();
    return qmlSelf;
};

///
//  Destroy a xrap_traffic instance
void QmlXrapTrafficAttached::destruct (QmlXrapTraffic *qmlSelf) {
    xrap_traffic_destroy (&qmlSelf->self);
};

/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/
