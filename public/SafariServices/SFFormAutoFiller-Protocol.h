//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString, NSURL, SFFormAutoFillFrameHandle;

@protocol SFFormAutoFiller <NSObject>
- (void)resumeLoadingAfterSavingFormData;
- (void)clearAutoFillMetadata;
- (void)collectMetadataForTextField:(NSString *)arg1 inFrame:(SFFormAutoFillFrameHandle *)arg2 atURL:(NSURL *)arg3 completionHandler:(void (^)(WBSFormMetadata *, NSDictionary *))arg4;
- (void)collectFormMetadataForPrefillingAtURL:(NSURL *)arg1;
- (void)collectURLsForPrefillingAtURL:(NSURL *)arg1;
- (void)setFormControls:(NSArray *)arg1 areAutoFilled:(_Bool)arg2 andClearField:(NSString *)arg3 inFrame:(SFFormAutoFillFrameHandle *)arg4;
- (void)fillTextField:(NSString *)arg1 inFrame:(SFFormAutoFillFrameHandle *)arg2 withGeneratedPassword:(NSString *)arg3;
- (void)annotateForm:(long long)arg1 inFrame:(SFFormAutoFillFrameHandle *)arg2 withValues:(NSDictionary *)arg3;
- (void)autoFillForm:(long long)arg1 inFrame:(SFFormAutoFillFrameHandle *)arg2 withGeneratedPassword:(NSString *)arg3;
- (void)autoFillFormSynchronouslyInFrame:(SFFormAutoFillFrameHandle *)arg1 withValues:(NSDictionary *)arg2;
- (void)autoFillFormAsynchronouslyInFrame:(SFFormAutoFillFrameHandle *)arg1 withValues:(NSDictionary *)arg2 setAutoFilled:(_Bool)arg3 focusFieldAfterFilling:(_Bool)arg4 fieldToFocus:(NSString *)arg5;
- (void)autoFillFormAsynchronouslyInFrame:(SFFormAutoFillFrameHandle *)arg1 withValues:(NSDictionary *)arg2 setAutoFilled:(_Bool)arg3 selectFieldAfterFilling:(NSString *)arg4;
@end

