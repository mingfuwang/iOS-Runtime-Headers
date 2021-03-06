/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOTileKeyList;

@interface GEOTileRemoteRequest : NSObject {
    unsigned long long _handle;
    GEOTileKeyList *_list;
    BOOL _movedToNetwork;
    struct __CFRunLoop { } *_queue;
}

@property(readonly) unsigned long long handle;
@property(readonly) GEOTileKeyList * list;
@property BOOL movedToNetwork;
@property(readonly) struct __CFRunLoop { }* queue;

- (void)dealloc;
- (unsigned long long)handle;
- (id)initWithList:(id)arg1 handle:(unsigned long long)arg2 queue:(struct __CFRunLoop { }*)arg3;
- (id)list;
- (BOOL)movedToNetwork;
- (struct __CFRunLoop { }*)queue;
- (void)setMovedToNetwork:(BOOL)arg1;

@end
