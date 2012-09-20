/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSObject<OS_dispatch_queue>;

@interface MPNetworkPlayabilityMonitor : NSObject  {
    int _effectiveNetworkTypeForPlayback;
    int _networkType;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(readonly) int networkType;
@property(readonly) int effectiveNetworkTypeForPlayback;

+ (id)sharedNetworkPlayabilityMonitor;

- (int)networkType;
- (int)_onQueueEffectiveNetworkTypeForAverageBitrate:(double)arg1;
- (int)effectiveNetworkTypeForPlayback;
- (void)_networkTypeDidChangeNotification:(id)arg1;
- (void)adjustEffectiveNetworkTypeUsingPreviouslyPlayedItem:(id)arg1;
- (void)dealloc;
- (id)init;

@end