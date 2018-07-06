//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface VCEffectsManager : NSObject
{
    id _delegate;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
    NSMutableArray *_effectsArray;
    _Bool _effectsRegistered;
    CDStruct_1b6d18a9 _lastPrintTimeStamp;
    CDStruct_1b6d18a9 _lastReceivedTimeStamp;
    int _sendFramesCount;
    int _receivedFramesCount;
    double _effectsTimeoutThreshold;
}

+ (id)sharedManager;
@property(retain) NSMutableArray *effectsArray; // @synthesize effectsArray=_effectsArray;
- (void)effectsRegistered:(_Bool)arg1;
- (void)encodeProcessedPixelBuffer:(struct __CVBuffer *)arg1 time:(CDStruct_1b6d18a9)arg2 imageData:(id)arg3 processTime:(id)arg4;
- (void)printEffectsLogging;
- (_Bool)checkHealthForEffect:(id)arg1;
- (void)capturedPixelBuffer:(struct __CVBuffer *)arg1 depthBuffer:(struct __CVBuffer *)arg2 time:(CDStruct_1b6d18a9)arg3 imageData:(id)arg4 toClient:(id)arg5;
- (void)renderPixelBuffer:(struct __CVBuffer *)arg1 time:(CDStruct_1b6d18a9)arg2;
- (void)capturedPixelBuffer:(struct __CVBuffer *)arg1 depthDataPixelBuffer:(struct __CVBuffer *)arg2 time:(CDStruct_1b6d18a9)arg3 imageData:(id)arg4;
- (void)clearAllStickers:(_Bool)arg1;
- (void)addStickerWithURL:(id)arg1 isFaceSticker:(_Bool)arg2 atPosition:(struct CGPoint)arg3 identifier:(id)arg4;
- (void)setMemoji:(id)arg1;
- (void)setAnimoji:(id)arg1;
- (_Bool)isEffectsOn;
- (void)registerBlocksForService;
@property(nonatomic) id <VCEffectsManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (id)init;

@end

