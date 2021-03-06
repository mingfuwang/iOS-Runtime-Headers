/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class NSString;

@interface DOMWebKitAnimation : DOMObject {
}

@property(readonly) double delay;
@property(readonly) unsigned short direction;
@property(readonly) double duration;
@property double elapsedTime;
@property(readonly) BOOL ended;
@property(readonly) unsigned short fillMode;
@property(readonly) int iterationCount;
@property(readonly) NSString * name;
@property(readonly) BOOL paused;

- (void)dealloc;
- (double)delay;
- (unsigned short)direction;
- (double)duration;
- (double)elapsedTime;
- (BOOL)ended;
- (unsigned short)fillMode;
- (void)finalize;
- (int)iterationCount;
- (id)name;
- (void)pause;
- (BOOL)paused;
- (void)play;
- (void)setElapsedTime:(double)arg1;

@end
