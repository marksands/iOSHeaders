//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKAVMediaObject.h>

@class AVURLAsset, UIImage;

@interface CKMovieMediaObject : CKAVMediaObject
{
    _Bool _hasVideoTrack;
    _Bool _checkedVideoInfo;
    _Bool _isAutoloopVideo;
    _Bool _isAppleAutoloopVideo;
    _Bool _isAutoloopVideoInitialized;
    _Bool _isAppleAutoloopVideoInitialized;
    UIImage *_thumbnail;
    AVURLAsset *_asset;
    struct CGSize _pxSize;
}

+ (_Bool)isPreviewable;
+ (id)attachmentSummary:(unsigned long long)arg1;
+ (id)fallbackFilenamePrefix;
+ (id)UTITypes;
+ (Class)__ck_attachmentItemClass;
@property(nonatomic) _Bool isAppleAutoloopVideoInitialized; // @synthesize isAppleAutoloopVideoInitialized=_isAppleAutoloopVideoInitialized;
@property(nonatomic) _Bool isAutoloopVideoInitialized; // @synthesize isAutoloopVideoInitialized=_isAutoloopVideoInitialized;
@property(nonatomic) _Bool isAppleAutoloopVideo; // @synthesize isAppleAutoloopVideo=_isAppleAutoloopVideo;
@property(nonatomic) _Bool isAutoloopVideo; // @synthesize isAutoloopVideo=_isAutoloopVideo;
@property(retain, nonatomic) AVURLAsset *asset; // @synthesize asset=_asset;
@property(nonatomic) _Bool checkedVideoInfo; // @synthesize checkedVideoInfo=_checkedVideoInfo;
@property(nonatomic) struct CGSize pxSize; // @synthesize pxSize=_pxSize;
@property(nonatomic) _Bool hasVideoTrack; // @synthesize hasVideoTrack=_hasVideoTrack;
@property(retain, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
- (void).cxx_destruct;
- (void)updateVideoInfo;
- (_Bool)hasNoVideoTrack;
- (id)previewItemTitle;
- (void)export:(id)arg1;
- (_Bool)canExport;
- (struct CGSize)bbSize;
- (id)generateThumbnailFillToSize:(struct CGSize)arg1 contentAlignmentInsets:(struct UIEdgeInsets)arg2;
- (id)generateThumbnailForWidth:(double)arg1 orientation:(BOOL)arg2;
- (id)previewForWidth:(double)arg1 orientation:(BOOL)arg2;
- (Class)previewBalloonViewClass;
- (id)previewCachesFileURLWithOrientation:(BOOL)arg1 extension:(id)arg2;
- (id)previewCacheKeyWithOrientation:(BOOL)arg1;
- (int)mediaType;

@end

