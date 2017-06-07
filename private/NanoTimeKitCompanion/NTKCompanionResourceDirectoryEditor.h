//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NTKCompanionResourceDirectoryEditor : NSObject
{
    NSString *_resourceDirectory;
    long long _state;
    NSString *_galleryPreviewResourceDirectory;
}

+ (id)_scaleImage:(id)arg1 toLongestEdgeInPixels:(double)arg2;
+ (id)_writeAsset:(id)arg1 image:(id)arg2 withImageCrop:(struct CGRect)arg3 to:(id)arg4;
+ (_Bool)_transcodeIrisVideoOf:(id)arg1 forPhoto:(id)arg2 withCrop:(struct CGRect)arg3 into:(id)arg4 previewOnly:(_Bool)arg5;
+ (id)_createResourceDirectoryWithAsset:(id)arg1 previewOnly:(_Bool)arg2;
+ (_Bool)_transcodeStillImageOf:(id)arg1 forPhoto:(id)arg2 withCrop:(struct CGRect)arg3 into:(id)arg4;
+ (id)_transcodeAsset:(id)arg1 withCrop:(struct CGRect)arg2 into:(id)arg3 previewOnly:(_Bool)arg4;
+ (id)_linkPhoto:(id)arg1 to:(id)arg2 previewOnly:(_Bool)arg3;
@property(retain, nonatomic) NSString *galleryPreviewResourceDirectory; // @synthesize galleryPreviewResourceDirectory=_galleryPreviewResourceDirectory;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *resourceDirectory; // @synthesize resourceDirectory=_resourceDirectory;
- (void).cxx_destruct;
- (void)finalizeWithCompletion:(CDUnknownBlockType)arg1;
- (void)generateGalleryPreviewResourceDirectoryWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithResourceDirectory:(id)arg1;

@end

