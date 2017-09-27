//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSURL, SFFormAutoFillFrameHandle, WBSFormMetadata;

@protocol SFFormMetadataObserver <NSObject>
- (void)autoFillDidFinishWithUpdatedFormMetadata:(WBSFormMetadata *)arg1;
- (void)willNavigateFrame:(SFFormAutoFillFrameHandle *)arg1 withUnsubmittedForm:(WBSFormMetadata *)arg2 loadingIsDeferred:(_Bool)arg3;
- (void)didFillGeneratedPasswordInForm:(WBSFormMetadata *)arg1 inFrame:(SFFormAutoFillFrameHandle *)arg2;
- (void)textDidChangeInTextField:(NSDictionary *)arg1 inForm:(WBSFormMetadata *)arg2 inFrame:(SFFormAutoFillFrameHandle *)arg3;
- (void)didCollectFormMetadataForPreFilling:(NSDictionary *)arg1 atURL:(NSURL *)arg2 ancestorFramesOfFormToPreFill:(NSArray *)arg3;
- (void)didCollectURLsForPreFilling:(NSArray *)arg1 atURL:(NSURL *)arg2;
@end

