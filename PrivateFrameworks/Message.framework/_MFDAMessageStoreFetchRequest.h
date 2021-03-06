/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class <MFRequestQueueResponseConsumer><DAMailAccountStreamConsumerFactory>, MFDAMessageStore, Message, MimePart;

@interface _MFDAMessageStoreFetchRequest : DAMailboxFetchMessageRequest <MFDAMailAccountRequest> {
    <MFRequestQueueResponseConsumer><DAMailAccountStreamConsumerFactory> *consumer;
    int format;
    Message *message;
    MimePart *part;
    BOOL partial;
    MFDAMessageStore *store;
}

@property(readonly) BOOL isUserRequested;
@property(readonly) BOOL shouldSend;

- (id)deferredOperation;
- (unsigned long long)generationNumber;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isUserRequested;
- (BOOL)shouldSend;

@end
