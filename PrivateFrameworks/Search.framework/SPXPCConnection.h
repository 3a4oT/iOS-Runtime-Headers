/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableSet, NSString, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>;

@interface SPXPCConnection : NSObject  {
    NSObject<OS_xpc_object> *_conn;
    NSObject<OS_dispatch_queue> *_eventQueue;
    BOOL _ownsQueue;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _messageHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _disconnectHandler;

    NSMutableSet *_outstandingMessages;
    BOOL _timeoutDisabled;
    id _context;
}

@property(readonly) NSString * serviceName;
@property(copy) id messageHandler;
@property(copy) id disconnectHandler;
@property(retain) id context;
@property BOOL timeoutDisabled;


- (void)setTimeoutDisabled:(BOOL)arg1;
- (BOOL)timeoutDisabled;
- (void)setDisconnectHandler:(id)arg1;
- (id)disconnectHandler;
- (id)initWithServiceName:(id)arg1 onQueue:(id)arg2;
- (void)_handleXPCMessage:(id)arg1;
- (void)_sendMessage:(id)arg1 handler:(id)arg2;
- (void)_setEventHandlerOnConnection:(id)arg1;
- (void)dealloc;
- (id)initWithXPCConnection:(id)arg1;
- (void)sendMessage:(id)arg1 withReply:(id)arg2;
- (void)setContext:(id)arg1;
- (id)context;
- (id)eventQueue;
- (int)_outstandingMessages;
- (void)_removeMessage:(id)arg1;
- (void)_registerMessage:(id)arg1;
- (id)serviceName;
- (void)sendMessage:(id)arg1;
- (id)messageHandler;
- (void)_handleXPCError:(id)arg1;
- (void)setMessageHandler:(id)arg1;
- (void)shutdown;

@end