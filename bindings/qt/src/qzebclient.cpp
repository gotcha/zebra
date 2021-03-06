/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/

#include "qzebra.h"

///
//  Copy-construct to return the proper wrapped c types
QZebClient::QZebClient (zeb_client_t *self, QObject *qObjParent) : QObject (qObjParent)
{
    this->self = self;
}


///
//  Create a new zeb_client, return the reference if successful,   
//  or NULL if construction failed due to lack of available memory.
QZebClient::QZebClient (QObject *qObjParent) : QObject (qObjParent)
{
    this->self = zeb_client_new ();
}

///
//  Destroy the zeb_client and free all memory used by the object.
QZebClient::~QZebClient ()
{
    zeb_client_destroy (&self);
}

///
//  Return actor, when caller wants to work with multiple actors and/or
//  input sockets asynchronously.                                      
QZactor * QZebClient::actor ()
{
    QZactor *rv = new QZactor (zeb_client_actor (self));
    return rv;
}

///
//  Return message pipe for asynchronous message I/O. In the high-volume case,
//  we send methods and get replies to the actor, in a synchronous manner, and
//  we send/recv high volume message data to a second pipe, the msgpipe. In   
//  the low-volume case we can do everything over the actor pipe, if traffic  
//  is never ambiguous.                                                       
QZsock * QZebClient::msgpipe ()
{
    QZsock *rv = new QZsock (zeb_client_msgpipe (self));
    return rv;
}

///
//  Return true if client is currently connected, else false. Note that the   
//  client will automatically re-connect if the server dies and restarts after
//  a successful first connection.                                            
bool QZebClient::connected ()
{
    bool rv = zeb_client_connected (self);
    return rv;
}

///
//  Connect to server endpoint, with specified timeout in msecs (zero means wait    
//  forever). Constructor succeeds if connection is successful. The caller may      
//  specify its address.                                                            
//  Returns >= 0 if successful, -1 if interrupted.                                  
int QZebClient::connect (const QString &endpoint, quint32 timeout, const QString &address)
{
    int rv = zeb_client_connect (self, endpoint.toUtf8().data(), (uint32_t) timeout, address.toUtf8().data());
    return rv;
}

///
//  Offer to handle particular XRAP requests, where the route matches request's     
//  resource.                                                                       
//  Returns >= 0 if successful, -1 if interrupted.                                  
int QZebClient::setHandler (const QString &method, const QString &route)
{
    int rv = zeb_client_set_handler (self, method.toUtf8().data(), route.toUtf8().data());
    return rv;
}

///
//  No explanation                                                                  
//  Returns >= 0 if successful, -1 if interrupted.                                  
int QZebClient::request (quint32 timeout, QZmsg *content)
{
    int rv = zeb_client_request (self, (uint32_t) timeout, &content->self);
    return rv;
}

///
//  Send XRAP DELIVER message to server, takes ownership of message
//  and destroys message when done sending it.                     
int QZebClient::deliver (QZuuid *sender, QZmsg *content)
{
    int rv = zeb_client_deliver (self, sender->self, &content->self);
    return rv;
}

///
//  Receive message from server; caller destroys message when done
QZmsg * QZebClient::recv ()
{
    QZmsg *rv = new QZmsg (zeb_client_recv (self));
    return rv;
}

///
//  Return last received command. Can be one of these values:
//      "XRAP DELIVER"                                       
const QString QZebClient::command ()
{
    const QString rv = QString (zeb_client_command (self));
    return rv;
}

///
//  Return last received status
int QZebClient::status ()
{
    int rv = zeb_client_status (self);
    return rv;
}

///
//  Return last received reason
const QString QZebClient::reason ()
{
    const QString rv = QString (zeb_client_reason (self));
    return rv;
}

///
//  Return last received sender
QZuuid * QZebClient::sender ()
{
    QZuuid *rv = new QZuuid (zeb_client_sender (self));
    return rv;
}

///
//  Return last received content
QZmsg * QZebClient::content ()
{
    QZmsg *rv = new QZmsg (zeb_client_content (self));
    return rv;
}

///
//  Enable verbose tracing (animation) of state machine activity.
void QZebClient::setVerbose (bool verbose)
{
    zeb_client_set_verbose (self, verbose);
    
}

///
//  Self test of this class.
void QZebClient::test (bool verbose)
{
    zeb_client_test (verbose);
    
}
/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/
