//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudPhotoServices/CPLDerivativeGenerator-Protocol.h>

@interface CloudPhotoServices : NSObject <CPLDerivativeGenerator>
{
}

+ (id)_minionConnection;
+ (void)_createVideoResourcesFromInputURL:(id)arg1 withItemIdentifier:(id)arg2 videoAdjustments:(id)arg3 resourceType:(unsigned long long)arg4 forIris:(_Bool)arg5 destinationDirectory:(id)arg6 outputResources:(id)arg7;
+ (void)_generateVideoDerivativeResourcesFromInputResource:(id)arg1 withCPLAdjustments:(id)arg2 destinationDirectory:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)_createPosterFrameResourcesFromInputURL:(id)arg1 withItemIdentifier:(id)arg2 destinationDirectory:(id)arg3 outputResources:(id)arg4;
+ (id)_createCPLResourceFromURL:(id)arg1 withResourceType:(unsigned long long)arg2 uniformTypeIdentifier:(id)arg3 itemIdentifier:(id)arg4;
+ (void)_createJPEGResourcesFromInputJPEGURL:(id)arg1 resourceTypes:(id)arg2 withItemIdentifier:(id)arg3 destinationDirectory:(id)arg4 outputResources:(id)arg5 convertToSRGB:(_Bool)arg6;
+ (id)_filenameForResourceWithItemIdentifier:(id)arg1 resourceType:(unsigned long long)arg2 extension:(id)arg3;
+ (unsigned long long)_bestImageResourceTypeForPixelCount:(long long)arg1;
+ (void)_generateImageDerivativeResourcesFromInputResource:(id)arg1 destinationDirectory:(id)arg2 isAdjusted:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)generateDerivativeResourcesFromInputResource:(id)arg1 withAdjustments:(id)arg2 destinationDirectory:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (_Bool)isUnsupportedOriginalFormatError:(id)arg1;
+ (id)singlePassTranscodeVideoAtURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (id)transcodeVideoAtURL:(id)arg1 withAdjustments:(id)arg2 destinationURL:(id)arg3 options:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (void)generatePosterFrameForVideoAtURL:(id)arg1 maximumPixelCount:(long long)arg2 destinationURL:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)resizeImageAtURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)resizeImageAtURL:(id)arg1 destinationURL:(id)arg2 maximumPixelCount:(long long)arg3 bakeInOrientation:(_Bool)arg4 colorOutput:(long long)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (long long)status;
+ (void)_sendCommandToRemoteObjectProxy:(CDUnknownBlockType)arg1 withErrorHandler:(CDUnknownBlockType)arg2;
+ (void)_sendRetryNumber:(int)arg1 toRemoteObjectProxyWithCommand:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;

@end

