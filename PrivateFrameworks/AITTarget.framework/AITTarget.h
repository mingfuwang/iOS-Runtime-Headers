/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AITTarget.framework/AITTarget
 */

@class AITXPCConnection, NSString, NSMutableArray, NSMutableDictionary;

@interface AITTarget : NSObject <AITXPCConnectionDelegate> {
    int _notifyToken;
    NSMutableDictionary *_observerRecords;
    AITXPCConnection *_xpcConnection;
    struct dispatch_queue_s { } *_clientQueue;
    double _startTime;
    NSMutableArray *_queuedProbes;
    struct dispatch_queue_s { } *_rpcDispatchQueue;
    NSString *_rpcSelectorPrefix;
    id _rpcTarget;
    struct dispatch_source_s { } *_watchdogSource;
}

@property(retain) id rpcTarget;
@property(copy) NSString * rpcSelectorPrefix;
@property struct dispatch_queue_s { }* rpcDispatchQueue;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedTarget;

- (unsigned int)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (oneway void)release;
- (id)init;
- (id)autorelease;
- (void)addObserver:(id)arg1 forMessage:(id)arg2 dispatchQueue:(struct dispatch_queue_s { }*)arg3 block:(id)arg4;
- (void)xpcConnectionUnhandledMessage:(void*)arg1;
- (void)xpcConnectionFailed:(id)arg1;
- (void)xpcConnection:(id)arg1 receivedMessage:(id)arg2 userInfo:(id)arg3;
- (struct dispatch_queue_s { }*)rpcDispatchQueue;
- (void)setRpcDispatchQueue:(struct dispatch_queue_s { }*)arg1;
- (id)rpcSelectorPrefix;
- (void)setRpcSelectorPrefix:(id)arg1;
- (id)rpcTarget;
- (void)setRpcTarget:(id)arg1;
- (void)removeObserver:(id)arg1 forMessage:(id)arg2;
- (void)_sendAckForToken:(id)arg1 success:(BOOL)arg2 returnValue:(id)arg3 details:(id)arg4;
- (id)_rpcTarget;
- (void)_setupXPCConnectionIfNeeded;
- (void)_flushQueuedProbes;
- (BOOL)_appIsWhitelisted;
- (void)_probeBarrier:(id)arg1;
- (void)_fireProbe:(id)arg1 withArgumentDictionary:(id)arg2;
- (BOOL)_probeIsEnabled:(id)arg1;

@end