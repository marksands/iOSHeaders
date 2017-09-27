//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVCapturePhotoSettings, AVCaptureResolvedPhotoSettings, AVWeakReferencingDelegateStorage, NSArray;

@interface AVCapturePhotoRequest : NSObject
{
    AVWeakReferencingDelegateStorage *_delegateStorage;
    unsigned int _photoCallbackFlavor;
    AVCapturePhotoSettings *_unresolvedSettings;
    AVCaptureResolvedPhotoSettings *_resolvedSettings;
    NSArray *_expectedPhotoManifest;
    unsigned int _firedCallbackFlags;
    unsigned long long _firedPhotoCallbacksCount;
    void *_previewSurface;
    struct opaqueCMSampleBuffer *_previewSampleBuffer;
}

+ (id)requestWithDelegate:(id)arg1 settings:(id)arg2;
@property(retain, nonatomic) struct opaqueCMSampleBuffer *previewSampleBuffer; // @synthesize previewSampleBuffer=_previewSampleBuffer;
@property(retain, nonatomic) void *previewSurface; // @synthesize previewSurface=_previewSurface;
@property(nonatomic) unsigned long long firedPhotoCallbacksCount; // @synthesize firedPhotoCallbacksCount=_firedPhotoCallbacksCount;
@property(nonatomic) unsigned int firedCallbackFlags; // @synthesize firedCallbackFlags=_firedCallbackFlags;
@property(readonly, nonatomic) NSArray *expectedPhotoManifest; // @synthesize expectedPhotoManifest=_expectedPhotoManifest;
@property(readonly) AVCapturePhotoSettings *unresolvedSettings; // @synthesize unresolvedSettings=_unresolvedSettings;
@property(readonly) unsigned int photoCallbackFlavor; // @synthesize photoCallbackFlavor=_photoCallbackFlavor;
@property(readonly) AVWeakReferencingDelegateStorage *delegateStorage; // @synthesize delegateStorage=_delegateStorage;
- (void)_resolveExpectedPhotoManifest;
@property(retain, nonatomic) AVCaptureResolvedPhotoSettings *resolvedSettings;
@property(readonly, nonatomic) unsigned long long expectedPhotoCount;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 settings:(id)arg2;

@end

