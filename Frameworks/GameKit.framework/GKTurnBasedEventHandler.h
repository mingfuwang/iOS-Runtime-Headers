/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSObject<GKTurnBasedEventHandlerDelegate>;

@interface GKTurnBasedEventHandler : NSObject {
    NSObject<GKTurnBasedEventHandlerDelegate> *_delegateWeak;
    BOOL _didBecomeActive;
}

@property NSObject<GKTurnBasedEventHandlerDelegate> * delegate;
@property BOOL didBecomeActive;

+ (id)sharedTurnBasedEventHandler;

- (void)callTurnEventForMatch:(id)arg1 userTapped:(BOOL)arg2;
- (void)dealloc;
- (id)delegate;
- (BOOL)didBecomeActive;
- (void)lookForEvent;
- (void)setDelegate:(id)arg1;
- (void)setDidBecomeActive:(BOOL)arg1;

@end
