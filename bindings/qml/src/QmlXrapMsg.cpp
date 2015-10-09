/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/

#include "QmlXrapMsg.h"


///
//  Print properties of the xrap msg object.
void QmlXrapMsg::print () {
    xrap_msg_print (self);
};

///
//  Parse a zmsg_t and decides whether it is xrap_msg. Returns   
//  true if it is, false otherwise. Doesn't destroy or modify the
//  original message.                                            
bool QmlXrapMsg::isXrapMsg (zmsg_t *msg) {
    return xrap_msg_is_xrap_msg (self, msg);
};

///
//  Send the xrap_msg to the output, and destroy it
int QmlXrapMsg::sendAgain (void *output) {
    return xrap_msg_send_again (self, output);
};

///
//  Get the xrap_msg id and printable command
int QmlXrapMsg::id () {
    return xrap_msg_id (self);
};

///
//  
void QmlXrapMsg::setId (int id) {
    xrap_msg_set_id (self, id);
};

///
//  Get/set the parent field
const QString QmlXrapMsg::parent () {
    return QString (xrap_msg_parent (self));
};

///
//  
void QmlXrapMsg::setParent (const QString &format) {
    xrap_msg_set_parent (self, "%s", format.toUtf8().data());
};

///
//  Get/set the content_type field
const QString QmlXrapMsg::contentType () {
    return QString (xrap_msg_content_type (self));
};

///
//  
void QmlXrapMsg::setContentType (const QString &format) {
    xrap_msg_set_content_type (self, "%s", format.toUtf8().data());
};

///
//  Get/set the parent field
const QString QmlXrapMsg::contentBody () {
    return QString (xrap_msg_content_body (self));
};

///
//  
void QmlXrapMsg::setContentBody (const QString &format) {
    xrap_msg_set_content_body (self, "%s", format.toUtf8().data());
};

///
//  Get/set the status_code field
uint16_t QmlXrapMsg::statusCode () {
    return xrap_msg_status_code (self);
};

///
//  
void QmlXrapMsg::setStatusCode (uint16_t statusCode) {
    xrap_msg_set_status_code (self, statusCode);
};

///
//  Get/set the location field
const QString QmlXrapMsg::location () {
    return QString (xrap_msg_location (self));
};

///
//  
void QmlXrapMsg::setLocation (const QString &format) {
    xrap_msg_set_location (self, "%s", format.toUtf8().data());
};

///
//  Get/set the etag field
const QString QmlXrapMsg::etag () {
    return QString (xrap_msg_etag (self));
};

///
//  
void QmlXrapMsg::setEtag (const QString &format) {
    xrap_msg_set_etag (self, "%s", format.toUtf8().data());
};

///
//  Get/set the date_modified field
uint64_t QmlXrapMsg::dateModified () {
    return xrap_msg_date_modified (self);
};

///
//  
void QmlXrapMsg::setDataModified (uint64_t dataModified) {
    xrap_msg_set_data_modified (self, dataModified);
};

///
//  Get/set the resource field
const QString QmlXrapMsg::resource () {
    return QString (xrap_msg_resource (self));
};

///
//  
void QmlXrapMsg::setResource (const QString &format) {
    xrap_msg_set_resource (self, "%s", format.toUtf8().data());
};

///
//  Get/set the parameters field
const QString QmlXrapMsg::parametersString (const QString &key, const QString &defaultValue) {
    return QString (xrap_msg_parameters_string (self, key.toUtf8().data(), defaultValue.toUtf8().data()));
};

///
//  
void QmlXrapMsg::parametersInsert (const QString &key, const QString &format) {
    xrap_msg_parameters_insert (self, key.toUtf8().data(), "%s", format.toUtf8().data());
};

///
//  Get/set the if_modified_since field
uint64_t QmlXrapMsg::ifModifiedSince () {
    return xrap_msg_if_modified_since (self);
};

///
//  
void QmlXrapMsg::setIfModifiedSince (uint64_t ifModifiedSince) {
    xrap_msg_set_if_modified_since (self, ifModifiedSince);
};

///
//  Get/set the if_none_match field
const QString QmlXrapMsg::ifNoneMatch () {
    return QString (xrap_msg_if_none_match (self));
};

///
//  
void QmlXrapMsg::setIfNoneMatch (const QString &format) {
    xrap_msg_set_if_none_match (self, "%s", format.toUtf8().data());
};

///
//  Get/set the parameters field
const QString QmlXrapMsg::metadataString (const QString &key, const QString &defaultValue) {
    return QString (xrap_msg_metadata_string (self, key.toUtf8().data(), defaultValue.toUtf8().data()));
};

///
//  
void QmlXrapMsg::metadataInsert (const QString &key, const QString &format) {
    xrap_msg_metadata_insert (self, key.toUtf8().data(), "%s", format.toUtf8().data());
};

///
//  Get/set the if_unmodified_since field
uint64_t QmlXrapMsg::ifUnmodifiedSince () {
    return xrap_msg_if_unmodified_since (self);
};

///
//  
void QmlXrapMsg::setIfUnmodifiedSince (uint64_t ifUnmodifiedSince) {
    xrap_msg_set_if_unmodified_since (self, ifUnmodifiedSince);
};

///
//  Get/set the if_match field
const QString QmlXrapMsg::ifMatch () {
    return QString (xrap_msg_if_match (self));
};

///
//  
void QmlXrapMsg::setIfMatch (const QString &format) {
    xrap_msg_set_if_match (self, "%s", format.toUtf8().data());
};

///
//  Get/set the status_text field
const QString QmlXrapMsg::statusText () {
    return QString (xrap_msg_status_text (self));
};

///
//  
void QmlXrapMsg::setStatusText (const QString &format) {
    xrap_msg_set_status_text (self, "%s", format.toUtf8().data());
};


QObject* QmlXrapMsg::qmlAttachedProperties(QObject* object) {
    return new QmlXrapMsgAttached(object);
}


///
//  Parse a xrap_msg from zmsg_t. Returns a new object, or NULL if
//  the message could not be parsed, or was NULL. Destroys msg and
//  nullifies the msg reference.                                  
QmlXrapMsg *QmlXrapMsgAttached::decode (zmsg_t **msgP) {
    QmlXrapMsg *retQ_ = new QmlXrapMsg ();
    retQ_->self = xrap_msg_decode (msgP);
    return retQ_;
};

///
//  Encode xrap_msg into zmsg and destroy it. Returns a newly created       
//  object or NULL if error. Use when not in control of sending the message.
zmsg_t *QmlXrapMsgAttached::encode (QmlXrapMsg *selfP) {
    return xrap_msg_encode (&selfP->self);
};

///
//  Receive and parse a xrap_msg from the socket. Returns new object, 
//  or NULL if error. Will block if there's no message waiting.       
QmlXrapMsg *QmlXrapMsgAttached::recv (void *input) {
    QmlXrapMsg *retQ_ = new QmlXrapMsg ();
    retQ_->self = xrap_msg_recv (input);
    return retQ_;
};

///
//  Receive and parse a xrap_msg from the socket. Returns new object,         
//  or NULL either if there was no input waiting, or the recv was interrupted.
QmlXrapMsg *QmlXrapMsgAttached::recvNowait (void *input) {
    QmlXrapMsg *retQ_ = new QmlXrapMsg ();
    retQ_->self = xrap_msg_recv_nowait (input);
    return retQ_;
};

///
//  Send the xrap_msg to the output, and destroy it
int QmlXrapMsgAttached::send (QmlXrapMsg *selfP, void *output) {
    return xrap_msg_send (&selfP->self, output);
};

///
//  Self test of this class.
void QmlXrapMsgAttached::test (bool verbose) {
    xrap_msg_test (verbose);
};

///
//  Create a new xrap_msg
QmlXrapMsg *QmlXrapMsgAttached::construct (int id) {
    QmlXrapMsg *qmlSelf = new QmlXrapMsg ();
    qmlSelf->self = xrap_msg_new (id);
    return qmlSelf;
};

///
//  Destroy the xrap_msg
void QmlXrapMsgAttached::destruct (QmlXrapMsg *qmlSelf) {
    xrap_msg_destroy (&qmlSelf->self);
};

/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/
